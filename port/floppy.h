// port/floppy.h - the A: drive, which the port did not have.
//
// WHY. The program's start-up probes A:\ROSTER1.UT2 with int 21h AX=4300 before it draws anything. The port had
// no A: drive, so the probe failed, the program took its "insert the save disk, press a key" path, and sat
// there. Differential tracing against the machine found it: 4,200 of the port's 4,216 executed addresses match
// the machine's, and the first that does not is the `je` at guest 0x0e259b that chooses the error path.
//
// It is a real reader over the real image, not a shim: attributes, opens and reads are all served from the
// bytes in saves/userdisk.hdm, because the machine has the same disk mounted and a faked attribute answer would
// only move the failure to the read that follows.
//
// GEOMETRY, from tools/savedisk.js, which walks the same images: 1024-byte sectors, one reserved sector, two
// FATs of two sectors each, 192 root entries, 1232 sectors in all, one sector per cluster. That gives
// FAT1 at 0x400, the root directory at 0x1400, and the data area at 0x2c00. The image is 1,261,568 bytes.
//
// Read only. saves/ holds irreplaceable state and none of it is in git, so nothing here writes.

#pragma once

#include <cstdint>
#include <cstdio>
#include <cstring>
#include <string>
#include <vector>

namespace u2floppy {

constexpr uint32_t SS = 1024;                  // bytes per sector, and per cluster
constexpr uint32_t RESERVED_SECTORS = 1;
constexpr uint32_t NFATS = 2;
constexpr uint32_t FATSZ = 2;
constexpr uint32_t ROOT_ENTRIES = 192;
constexpr uint32_t TOTAL_SECTORS = 1232;
constexpr uint32_t FAT1_OFF = RESERVED_SECTORS * SS;
constexpr uint32_t ROOT_OFF = (RESERVED_SECTORS + NFATS * FATSZ) * SS;
constexpr uint32_t ROOT_SECTORS = (ROOT_ENTRIES * 32 + SS - 1) / SS;
constexpr uint32_t DATA_OFF = ROOT_OFF + ROOT_SECTORS * SS;
constexpr uint32_t IMAGE_SIZE = TOTAL_SECTORS * SS;

// A DOS path as the program passes it: "A:\ROSTER1.UT2", or "a:/roster1.ut2". Reduced to the 8.3 name.
inline std::string normalise(const std::string& in) {
	std::string s = in;
	if (s.size() >= 2 && s[1] == ':') s = s.substr(2);
	size_t start = 0;
	while (start < s.size() && (s[start] == '\\' || s[start] == '/')) ++start;
	s = s.substr(start);
	for (auto& ch : s) {
		ch = (char)tolower((unsigned char)ch);
		if (ch == '\\') ch = '/';
	}
	return s;
}

struct Entry {
	std::string name;      // normalised 8.3, "roster1.ut2"
	uint8_t attr = 0;
	uint16_t cluster = 0;
	uint32_t size = 0;
	bool is_dir() const { return (attr & 0x10) != 0; }
	// The DOS attribute word: a directory, or an ordinary archive file.
	uint16_t dos_attr() const { return is_dir() ? 0x10 : 0x20; }
};

class Image {
   public:
	// Reads the image. Read only, and it refuses a file that is not the size the geometry implies rather than
	// interpreting something else as a floppy.
	bool open(const char* path) {
		FILE* f = std::fopen(path, "rb");
		if (!f) {
			std::fprintf(stderr, "floppy: cannot open %s\n", path);
			return false;
		}
		std::fseek(f, 0, SEEK_END);
		long n = std::ftell(f);
		std::fseek(f, 0, SEEK_SET);
		if (n != (long)IMAGE_SIZE) {
			std::fprintf(stderr, "floppy: %s is %ld bytes, not the %u an FM Towns 2HD image is\n", path, n,
			             (unsigned)IMAGE_SIZE);
			std::fclose(f);
			return false;
		}
		img_.resize((size_t)n);
		size_t got = std::fread(img_.data(), 1, img_.size(), f);
		std::fclose(f);
		if (got != img_.size()) {
			std::fprintf(stderr, "floppy: short read on %s\n", path);
			return false;
		}
		path_ = path;
		return true;
	}

	bool loaded() const { return !img_.empty(); }
	const std::string& path() const { return path_; }

	// Walks the root directory for a name. No subdirectories: the save disk has none, and a lookup that
	// silently failed on one would be worse than one that refuses.
	bool find(const std::string& dos_path, Entry& out) const {
		if (img_.empty()) return false;
		const std::string want = normalise(dos_path);
		if (want.empty() || want.find('/') != std::string::npos) return false;
		for (uint32_t i = 0; i < ROOT_ENTRIES; ++i) {
			const uint8_t* e = img_.data() + ROOT_OFF + i * 32;
			if (e[0] == 0x00) break;                       // end of directory
			if (e[0] == 0xE5) continue;                    // deleted
			if (e[11] & 0x08) continue;                    // volume label
			std::string	name = eight_three(e);
			if (name != want) continue;
			out.name = name;
			out.attr = e[11];
			out.cluster = (uint16_t)(e[26] | (e[27] << 8));
			out.size = (uint32_t)(e[28] | (e[29] << 8) | (e[30] << 16) | ((uint32_t)e[31] << 24));
			return true;
		}
		return false;
	}

	// The file's bytes, by following the FAT chain from its first cluster. The size in the directory entry is
	// the authority for the length; the chain is followed for the storage, and a chain shorter than the size
	// is reported rather than silently truncating.
	bool read(const std::string& dos_path, std::vector<uint8_t>& out) const {
		Entry e;
		if (!find(dos_path, e)) return false;
		if (e.is_dir()) return false;
		out.clear();
		out.reserve(e.size);
		uint32_t c = e.cluster;
		uint32_t guard = 0;
		while (out.size() < e.size && c >= 2 && c <= 0xFF7) {
			const size_t off = DATA_OFF + (size_t)(c - 2) * SS;
			if (off + SS > img_.size()) break;
			const size_t take = std::min<size_t>(SS, (size_t)e.size - out.size());
			out.insert(out.end(), img_.begin() + off, img_.begin() + off + take);
			c = fat_next(c);
			if (++guard > TOTAL_SECTORS) break;
		}
		if (out.size() != e.size) {
			std::fprintf(stderr, "floppy: %s claims %u bytes but its chain gave %u\n", e.name.c_str(),
			             (unsigned)e.size, (unsigned)out.size());
			return false;
		}
		return true;
	}

	// For the diagnostic listing.
	std::vector<Entry> list() const {
		std::vector<Entry> out;
		if (img_.empty()) return out;
		for (uint32_t i = 0; i < ROOT_ENTRIES; ++i) {
			const uint8_t* e = img_.data() + ROOT_OFF + i * 32;
			if (e[0] == 0x00) break;
			if (e[0] == 0xE5 || (e[11] & 0x08)) continue;
			Entry x;
			x.name = eight_three(e);
			x.attr = e[11];
			x.cluster = (uint16_t)(e[26] | (e[27] << 8));
			x.size = (uint32_t)(e[28] | (e[29] << 8) | (e[30] << 16) | ((uint32_t)e[31] << 24));
			out.push_back(x);
		}
		return out;
	}

   private:
	static std::string eight_three(const uint8_t* e) {
		std::string base, ext;
		for (int i = 0; i < 8; ++i) {
			char ch = (char)e[i];
			if (ch == ' ') break;
			base += (char)tolower((unsigned char)ch);
		}
		for (int i = 8; i < 11; ++i) {
			char ch = (char)e[i];
			if (ch == ' ') break;
			ext += (char)tolower((unsigned char)ch);
		}
		// The first byte 0x05 stands for a real 0xE5 in a name, per FAT12.
		if (!base.empty() && (unsigned char)base[0] == 0x05) base[0] = (char)0xE5;
		return ext.empty() ? base : base + "." + ext;
	}

	uint32_t fat_next(uint32_t cluster) const {
		const size_t o = FAT1_OFF + (size_t)cluster * 3 / 2;
		if (o + 1 >= img_.size()) return 0xFFF;
		const uint32_t v = (uint32_t)(img_[o] | (img_[o + 1] << 8));
		return (cluster & 1) ? (v >> 4) : (v & 0xFFF);
	}

	std::vector<uint8_t> img_;
	std::string path_;
};

}  // namespace u2floppy
