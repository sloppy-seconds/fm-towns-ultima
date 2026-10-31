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
// Read only by default, and the boundary matters. saves/ holds irreplaceable state and none of it is in git, so an
// image is opened read-only unless the caller asks for write access, and only the user/save disk is ever given that
// ask. The real game disc is a separate file served by a separate path and cannot be written from here at all. Paul
// sanctioned mutating save images on 2026-11-01, because a created character that cannot be written to ROSTER1.UT2
// is a character that does not exist. See docs/port-defects.md defect 3, cause two.

#pragma once

#include <algorithm>
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
constexpr uint32_t DATA_CLUSTERS = TOTAL_SECTORS - (RESERVED_SECTORS + NFATS * FATSZ + ROOT_SECTORS);
constexpr uint16_t FAT_EOF = 0xFFF;              // FAT12 end-of-chain is 0xFF8..0xFFF; 0xFFF is what the format writes
constexpr uint32_t FAT2_OFF = FAT1_OFF + FATSZ * SS;
// 1990-01-01 00:00:00 in the packed DOS date and time fields. A fixed value, not the clock, so a write is
// reproducible: two runs that save the same roster produce byte-identical images.
constexpr uint16_t DOS_DATE = (uint16_t)((10 << 9) | (1 << 5) | 1);
constexpr uint16_t DOS_TIME = 0;

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
	// Reads the image. Read only unless allow_write is set, and it refuses a file that is not the size the geometry
	// implies rather than interpreting something else as a floppy.
	bool open(const char* path, bool allow_write = false) {
		FILE* f = std::fopen(path, allow_write ? "r+b" : "rb");
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
		writable_ = allow_write;
		return true;
	}

	bool writable() const { return writable_; }

	// Writes the in-memory image back to the file it came from. Called once at exit, so a crash mid-run leaves the
	// disk as it was found rather than half-updated.
	bool flush() {
		if (!writable_ || !dirty_ || path_.empty()) return true;
		FILE* f = std::fopen(path_.c_str(), "wb");
		if (!f) {
			std::fprintf(stderr, "floppy: cannot write %s\n", path_.c_str());
			return false;
		}
		size_t put = std::fwrite(img_.data(), 1, img_.size(), f);
		std::fclose(f);
		if (put != img_.size()) {
			std::fprintf(stderr, "floppy: short write on %s (%zu of %zu bytes)\n", path_.c_str(), put, img_.size());
			return false;
		}
		dirty_ = false;
		return true;
	}

	// Creates or replaces one root-directory file with these bytes, and leaves the image dirty.
	//
	// The old chain is freed and a fresh one allocated rather than resized in place, which is slower and much harder
	// to get wrong: an in-place grow has to decide what a partially-written tail cluster means, and a save that
	// corrupts the FAT is a save disk that no longer mounts.
	bool write_file(const std::string& dos_path, const std::vector<uint8_t>& data) {
		if (!writable_) {
			std::fprintf(stderr, "floppy: %s was opened read-only, refusing a write\n", path_.c_str());
			return false;
		}
		const std::string want = normalise(dos_path);
		if (want.empty() || want.find('/') != std::string::npos) return false;
		uint32_t slot = 0;
		if (!free_slot(want, slot)) {
			std::fprintf(stderr, "floppy: no free root entry for %s\n", want.c_str());
			return false;
		}
		Entry old;
		if (find(want, old)) free_chain(old.cluster);     // replacing: give the old clusters back first

		const uint32_t need = (uint32_t)((data.size() + SS - 1) / SS);
		std::vector<uint32_t> chain;
		chain.reserve(need);
		for (uint32_t c = 2; c < 2 + DATA_CLUSTERS && chain.size() < need; ++c) {
			if (fat_next(c) != 0) continue;
			fat_set(c, FAT_EOF);
			chain.push_back(c);
		}
		if (chain.size() != need) {
			for (auto c : chain) fat_set(c, 0);           // do not leave a partial chain claimed
			std::fprintf(stderr, "floppy: no room for %s (%u bytes, %u clusters free)\n", want.c_str(),
			             (unsigned)data.size(), (unsigned)chain.size());
			return false;
		}
		for (size_t i = 0; i < chain.size(); ++i) {
			fat_set(chain[i], i + 1 == chain.size() ? FAT_EOF : chain[i + 1]);
			const size_t off = DATA_OFF + (size_t)(chain[i] - 2) * SS;
			const size_t from = i * SS;
			const size_t take = std::min<size_t>(SS, data.size() - from);
			std::copy_n(data.begin() + (long)from, take, img_.begin() + (long)off);
			if (take < SS) std::fill_n(img_.begin() + (long)(off + take), SS - take, 0);   // no stale tail bytes
		}

		uint8_t* e = img_.data() + ROOT_OFF + slot * 32;
		std::memset(e, ' ', 11);
		std::string base = want, ext;
		const size_t dot = want.find('.');
		if (dot != std::string::npos) { ext = want.substr(dot + 1); base = want.substr(0, dot); }
		for (size_t i = 0; i < base.size() && i < 8; ++i) e[i] = (uint8_t)toupper((unsigned char)base[i]);
		for (size_t i = 0; i < ext.size() && i < 3; ++i) e[8 + i] = (uint8_t)toupper((unsigned char)ext[i]);
		if (base.empty() && !ext.empty()) e[0] = ' ';     // an extension-only name is not a name; do not emit one
		e[11] = 0x20;                                     // archive
		std::memset(e + 12, 0, 4);                        // reserved, creation date and time
		e[22] = (uint8_t)(DOS_DATE & 0xFF); e[23] = (uint8_t)(DOS_DATE >> 8);
		e[24] = (uint8_t)(DOS_TIME & 0xFF); e[25] = (uint8_t)(DOS_TIME >> 8);
		e[26] = (uint8_t)(chain.empty() ? 0 : chain[0] & 0xFF);
		e[27] = (uint8_t)(chain.empty() ? 0 : chain[0] >> 8);
		e[28] = (uint8_t)(data.size() & 0xFF);
		e[29] = (uint8_t)((data.size() >> 8) & 0xFF);
		e[30] = (uint8_t)((data.size() >> 16) & 0xFF);
		e[31] = (uint8_t)((data.size() >> 24) & 0xFF);

		// Both FATs, because a real disk keeps them in step and a reader that picks the other one would disagree.
		std::copy_n(img_.begin() + (long)FAT1_OFF, (size_t)FATSZ * SS, img_.begin() + (long)FAT2_OFF);
		dirty_ = true;
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

	void fat_set(uint32_t cluster, uint32_t value) {
		const size_t o = FAT1_OFF + (size_t)cluster * 3 / 2;
		if (o + 1 >= img_.size()) return;
		if (cluster & 1) {
			img_[o] = (uint8_t)((img_[o] & 0x0F) | ((value & 0x0F) << 4));
			img_[o + 1] = (uint8_t)((value >> 4) & 0xFF);
		} else {
			img_[o] = (uint8_t)(value & 0xFF);
			img_[o + 1] = (uint8_t)((img_[o + 1] & 0xF0) | ((value >> 8) & 0x0F));
		}
	}

	// Walks a chain and hands every cluster back to the FAT. The directory slot is the caller's business.
	void free_chain(uint32_t cluster) {
		uint32_t c = cluster, guard = 0;
		while (c >= 2 && c <= 0xFF7 && guard++ < TOTAL_SECTORS) {
			const uint32_t next = fat_next(c);
			fat_set(c, 0);
			c = next;
		}
	}

	// The root entry to write into: an existing file of that name keeps its slot, otherwise the first deleted one,
	// otherwise the first unused one. False only when the directory is genuinely full.
	bool free_slot(const std::string& want, uint32_t& out) {
		uint32_t deleted = 0xFFFFFFFF, fresh = 0xFFFFFFFF;
		for (uint32_t i = 0; i < ROOT_ENTRIES; ++i) {
			const uint8_t* e = img_.data() + ROOT_OFF + i * 32;
			if (e[0] == 0x00) { fresh = i; break; }
			if (e[0] == 0xE5) { if (deleted == 0xFFFFFFFF) deleted = i; continue; }
			if (e[11] & 0x08) continue;
			if (eight_three(e) == want) { out = i; return true; }
		}
		if (deleted != 0xFFFFFFFF) { out = deleted; return true; }
		if (fresh != 0xFFFFFFFF) { out = fresh; return true; }
		return false;
	}

	std::vector<uint8_t> img_;
	std::string path_;
	bool writable_ = false;
	bool dirty_ = false;
};

}  // namespace u2floppy
