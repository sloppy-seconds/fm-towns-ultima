// port/savestore.h - the A: drive as plain files in a directory, instead of a 1.26 MB floppy image.
//
// WHY. The save disk is a FAT12 floppy image because that is what the original wrote to, and the port keeps an image
// reader for the case where somebody has one. But an image is an awkward thing to ask a player for: 1.26 MB of almost
// pure zero fill that has to be created, formatted and then found again. The files it holds are four roster slots and
// four world files, and nothing about them needs a filesystem to be reproducible. So this is the same four hooks the
// kit already calls, implemented over a directory: ROSTER1.UT2, WORLD1.UT2 and so on, as ordinary files a person can
// copy, diff and back up.
//
// The kit does not know or care which is in use. It calls fm_floppy_attrs / read / writable / write, and main.cpp
// decides what answers them.
//
// NOT A SECOND FILESYSTEM. Names are the game's own 8.3 names, taken through the same normalise() the image reader
// uses, so "A:\\ROSTER1.UT2", "a:/roster1.ut2" and "ROSTER1.UT2" all land on one file. There are no subdirectories,
// no attributes beyond "an ordinary file", and no timestamps, because nothing on this disc uses them.

#pragma once
#include "floppy.h"

#include <cctype>
#include <cstdio>
#include <filesystem>
#include <fstream>
#include <string>
#include <system_error>
#include <vector>

namespace u2floppy {

class Dir {
   public:
	// Creates the directory if it is not there. A directory that cannot be written is opened read-only rather than
	// refused, so a player with a read-only tree can still load a character and just cannot save over it.
	bool open(const std::string& dir, bool allow_write = false) {
		dir_ = dir;
		std::error_code ec;
		if (allow_write) std::filesystem::create_directories(dir_, ec);
		writable_ = allow_write && !ec;
		std::error_code ec2;
		loaded_ = std::filesystem::is_directory(dir_, ec2);
		return loaded_;
	}

	bool loaded() const { return loaded_; }
	bool writable() const { return writable_; }
	bool flush() { return true; }   // each write goes to its file as it happens, so there is nothing to commit

	// The 8.3 name as a file in the directory. Uppercase, because the disc's own directory listing is, and a player
	// looking at the folder should see what the game calls the file.
	std::string path_of(const std::string& dos_path) const {
		std::string n = normalise(dos_path);
		for (char& ch : n) ch = (char)std::toupper((unsigned char)ch);
		return dir_ + "/" + n;
	}

	bool find(const std::string& dos_path, Entry& out) const {
		const std::string p = path_of(dos_path);
		std::error_code ec;
		if (!std::filesystem::is_regular_file(p, ec)) return false;
		const auto size = std::filesystem::file_size(p, ec);
		if (ec) return false;
		out = Entry{};
		out.name = normalise(dos_path);
		out.attr = 0x00;                       // an ordinary file
		out.size = (uint32_t)size;
		return true;
	}

	bool read(const std::string& dos_path, std::vector<uint8_t>& out) const {
		std::ifstream f(path_of(dos_path), std::ios::binary);
		if (!f) return false;
		out.assign(std::istreambuf_iterator<char>(f), std::istreambuf_iterator<char>());
		return true;
	}

	bool write_file(const std::string& dos_path, const std::vector<uint8_t>& data) {
		if (!writable_) return false;
		std::error_code ec;
		const std::string p = path_of(dos_path);
		std::ofstream f(p, std::ios::binary | std::ios::trunc);
		if (!f) return false;
		f.write(reinterpret_cast<const char*>(data.data()), (std::streamsize)data.size());
		return f.good();
	}

	// The names a fresh save directory is seeded with, in the order the game lists them. Seeding comes from an image
	// when one is present, so a player who has the shipped disk with three characters on it does not lose them by
	// switching to a directory.
	static constexpr const char* kSeed[] = {"ROSTER1.UT2", "WORLD1.UT2", "WORLD2.UT2", "WORLD3.UT2", "WORLD4.UT2"};

	// Copy those files out of an opened image. Answers how many landed, and never overwrites one that already exists,
	// so a directory with a character in it is not reset by a later run that happens to have an image as well.
	int seed_from(const Image& img) {
		int n = 0;
		for (const char* name : kSeed) {
			if (!writable_) break;
			Entry e;
			if (find(name, e)) continue;                    // already here: leave it alone
			std::vector<uint8_t> bytes;
			if (!img.read(name, bytes) || bytes.empty()) continue;
			if (write_file(name, bytes)) ++n;
		}
		return n;
	}

   private:
	std::string dir_;
	bool loaded_ = false, writable_ = false;
};

}  // namespace u2floppy
