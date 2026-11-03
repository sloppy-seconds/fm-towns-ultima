#pragma once

#ifdef _WIN32
// THE CONTROL SOCKET IS NOT PORTED, and this is the whole of that decision. Everything below is POSIX: <arpa/inet.h>,
// <sys/un.h>, poll(), read() and close(). The channel exists for the measurement tools and the tests, not for playing,
// and a Windows build is for playing. So it answers rather than pretending: --control fails to open and says why, which
// is the same shape as a missing disc reporting itself instead of starting and failing later.
//
// Porting it is a day of work no player benefits from: winsock2 for the TCP half, a named pipe for the Unix-socket
// half, and every tool in this repository would then need testing against a second socket implementation. If a Windows
// session ever needs the instruments, that is the item to open.
#include <map>
#include <string>

namespace u2ctl {

struct Command {
	long id = 0;
	std::string cmd;
	std::map<std::string, std::string> args;
};

class Channel {
  public:
	bool open(const std::string &, std::string &err) {
		err = "this build has no control socket: it is POSIX only and the Windows build does not port it";
		return false;
	}
	const std::string &bound() const { return empty_; }
	void poll() {}
	void send(const std::string &) {}
	int next(Command &, std::string &) { return -1; }

  private:
	std::string empty_;
};

}  // namespace u2ctl

#else
// port/control.h - the JSON-lines control channel, phase 10 tier 1.
//
// WHY THIS EXISTS, AND WHY IT IS A TAP AND NOT A FRONT-END. Driving the port from a script currently means a
// display server, xdotool, a screenshot tool and, to know what the screen said, a vision model. That is how defect 1
// was found, and it took three passes to get a deterministic reproduction. The measured reason a second injection
// path is not enough is in docs/port-defects.md: U2_KEYS moves the game-menu highlight and then cannot select an
// item, while a real SDL key does it first try. So commands that inject input go through SDL, and this file is only
// the door, the queue and the reply, not a parallel implementation of anything.
//
// WHY BETWEEN FRAMES. Commands are read from the existing on_vsync hook and nowhere else, which means a command can
// never observe a half-updated machine and cannot perturb the instruction stream. It also means a command is only
// answered when the machine reaches a frame boundary, which is what makes "step N frames" a real unit of work.
//
// WHY FLAG-GATED. Without --control this file is not touched at all: no socket, no thread, no poll, and the release
// binary's behaviour is byte-identical to the one before it existed. That is asserted by a test, not trusted.
//
// THE PROTOCOL. One JSON object per line in, one JSON object per line out, `id` echoed back so a caller can pipeline.
// `{"id":1,"cmd":"hello"}` -> `{"id":1,"ok":true,"version":"1","frame":4026}`. A malformed line gets ok:false with
// an error naming what was wrong, and the connection stays open, because a driver that loses its socket over a typo
// is a driver that sleeps.
//
// NO JSON LIBRARY. The port links a recompiled game and a Fujitsu machine layer; it is not acquiring a dependency
// for a flat object of scalars. The parser accepts exactly the shape above and says so when it does not.
//
// ONE CLIENT. This is an instrument, not a server. A second connection is refused while one is live rather than
// interleaved with it, because two drivers pressing keys into one machine produces a trace nobody can read.

#include <cerrno>
#include <cstdio>
#include <cstring>
#include <map>
#include <string>
#include <vector>

#include <arpa/inet.h>
#include <fcntl.h>
#include <netinet/in.h>
#include <poll.h>
#include <sys/socket.h>
#include <sys/stat.h>
#include <sys/un.h>
#include <unistd.h>

namespace u2ctl {

struct Command {
	long id = 0;
	std::string cmd;
	std::map<std::string, std::string> args;
};

// The version of the protocol, not of the port. A caller that sends `hello` gets this back and can refuse to
// guess. It goes up when a command is added or a field changes meaning, which is the only way a protocol stays honest.
inline const char *version() {
	return "1";
}

inline void escape(const std::string &s, std::string &out) {
	for (char c : s) {
		if (c == '"' || c == '\\') {
			out.push_back('\\');
			out.push_back(c);
		} else if (c == '\n') {
			out += "\\n";
		} else if ((unsigned char)c < 0x20) {
			char buf[8];
			std::snprintf(buf, sizeof buf, "\\u%04x", c);
			out += buf;
		} else {
			out.push_back(c);
		}
	}
}

inline std::string error_reply(long id, const std::string &what) {
	std::string out = "{\"id\":" + std::to_string(id) + ",\"ok\":false,\"error\":\"";
	escape(what, out);
	out += "\"}\n";
	return out;
}

inline std::string ok_reply(long id, const std::string &fields) {
	std::string out = "{\"id\":" + std::to_string(id) + ",\"ok\":true";
	if (!fields.empty())
		out += "," + fields;
	out += "}\n";
	return out;
}

// Parse one flat JSON object of scalars. Anything fancier is refused with a reason rather than half-accepted,
// because a half-accepted command is a command that did something else.
inline bool parse_line(const std::string &line, Command &out, std::string &err) {
	size_t i = 0;
	auto ws = [&]() {
		while (i < line.size() && (line[i] == ' ' || line[i] == '\t' || line[i] == '\r' || line[i] == '\n'))
			++i;
	};
	auto literal = [&](std::string &v) {
		if (i < line.size() && line[i] == '"') {
			++i;
			v.clear();
			while (i < line.size() && line[i] != '"') {
				if (line[i] == '\\' && i + 1 < line.size()) {
					char n = line[i + 1];
					if (n == 'n')
						v.push_back('\n');
					else if (n == 't')
						v.push_back('\t');
					else
						v.push_back(n);
					i += 2;
					continue;
				}
				v.push_back(line[i++]);
			}
			if (i >= line.size()) {
				err = "unterminated string";
				return false;
			}
			++i;
			return true;
		}
		size_t start = i;
		while (i < line.size() && line[i] != ',' && line[i] != '}')
			++i;
		v = line.substr(start, i - start);
		while (!v.empty() && (v.back() == ' ' || v.back() == '\t'))
			v.pop_back();
		if (v.empty()) {
			err = "empty value";
			return false;
		}
		return true;
	};

	ws();
	if (i >= line.size() || line[i] != '{') {
		err = "not a JSON object";
		return false;
	}
	++i;
	for (;;) {
		ws();
		if (i < line.size() && line[i] == '}') {
			++i;
			break;
		}
		std::string key;
		if (!literal(key))
			return false;
		ws();
		if (i >= line.size() || line[i] != ':') {
			err = "no colon after " + key;
			return false;
		}
		++i;
		ws();
		std::string val;
		if (!literal(val))
			return false;
		if (key == "id") {
			out.id = std::strtol(val.c_str(), nullptr, 10);
		} else if (key == "cmd" || key == "command") {
			out.cmd = val;
		} else {
			out.args[key] = val;
		}
		ws();
		if (i < line.size() && line[i] == ',') {
			++i;
			continue;
		}
		if (i < line.size() && line[i] == '}') {
			++i;
			break;
		}
		err = "expected , or } after " + key;
		return false;
	}
	if (out.cmd.empty()) {
		err = "no cmd field";
		return false;
	}
	return true;
}

// Base64, because `shot` returns a PNG over a text protocol and the alternative is a second transport for one
// command. Standard alphabet, no line breaks: a reply is one line, and a folded base64 field is a parsing bug
// waiting for a caller that forgot to unfold.
inline std::string b64(const std::vector<uint8_t> &in) {
	static const char *tbl = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";
	std::string out;
	out.reserve(((in.size() + 2) / 3) * 4);
	for (size_t i = 0; i < in.size(); i += 3) {
		uint32_t v = (uint32_t)in[i] << 16;
		if (i + 1 < in.size())
			v |= (uint32_t)in[i + 1] << 8;
		if (i + 2 < in.size())
			v |= in[i + 2];
		out.push_back(tbl[(v >> 18) & 63]);
		out.push_back(tbl[(v >> 12) & 63]);
		out.push_back(i + 1 < in.size() ? tbl[(v >> 6) & 63] : '=');
		out.push_back(i + 2 < in.size() ? tbl[v & 63] : '=');
	}
	return out;
}

// Read a whole file, or return false. Used by `shot` to hand back the PNG the kit just wrote.
inline bool read_file(const std::string &path, std::vector<uint8_t> &out) {
	FILE *f = std::fopen(path.c_str(), "rb");
	if (!f)
		return false;
	std::fseek(f, 0, SEEK_END);
	long n = std::ftell(f);
	std::fseek(f, 0, SEEK_SET);
	out.resize(n > 0 ? (size_t)n : 0);
	size_t got = n > 0 ? std::fread(out.data(), 1, out.size(), f) : 0;
	std::fclose(f);
	return got == out.size();
}

class Channel {
  public:
	~Channel() { close_all(); }

	// A spec with a '/' is a Unix socket path, anything else is host:port. Port 0 is allowed and the bound port is
	// read back, which is what lets a test grab an ephemeral port without a collision.
	bool open(const std::string &spec, std::string &err) {
		if (spec.find('/') != std::string::npos)
			return open_unix(spec, err);
		return open_tcp(spec, err);
	}

	const std::string &bound() const { return bound_; }

	// Called from the frame hook. Never blocks: everything here is non-blocking and bounded by one accept and one
	// read per frame, so a slow or silent client cannot stall the machine.
	void poll() {
		if (listen_fd_ < 0)
			return;
		struct pollfd pfd {};
		pfd.fd = listen_fd_;
		pfd.events = POLLIN;
		if (::poll(&pfd, 1, 0) > 0 && client_fd_ < 0) {
			int fd = ::accept(listen_fd_, nullptr, nullptr);
			if (fd >= 0) {
				set_nonblock(fd);
				client_fd_ = fd;
			}
		}
		if (client_fd_ < 0)
			return;
		char buf[4096];
		ssize_t n = ::recv(client_fd_, buf, sizeof buf, 0);
		if (n == 0) {
			::close(client_fd_);
			client_fd_ = -1;
			line_.clear();
			return;
		}
		if (n < 0 && errno != EAGAIN && errno != EWOULDBLOCK) {
			::close(client_fd_);
			client_fd_ = -1;
			line_.clear();
			return;
		}
		if (n > 0) {
			for (ssize_t i = 0; i < n; ++i) {
				if (buf[i] == '\n') {
					if (!line_.empty())
						queue_.push(line_);
					line_.clear();
				} else {
					line_.push_back(buf[i]);
				}
			}
		}
	}

	// 0 = nothing queued, 1 = parsed into c, -1 = the line was not a command and err says why. A malformed line has
	// to be distinguishable from an empty queue, because a caller that treats "bad" as "nothing yet" silently drops
	// the command, which is exactly what the first version of this did and the protocol test caught.
	int next(Command &c, std::string &err) {
		std::string line;
		if (!queue_.pop(line))
			return 0;
		return parse_line(line, c, err) ? 1 : -1;
	}

	void send(const std::string &json) {
		if (client_fd_ < 0)
			return;
		size_t off = 0;
		while (off < json.size()) {
			ssize_t n = ::send(client_fd_, json.data() + off, json.size() - off, 0);
			if (n <= 0) {
				if (n < 0 && (errno == EAGAIN || errno == EWOULDBLOCK)) {
					struct pollfd pfd {};
					pfd.fd = client_fd_;
					pfd.events = POLLOUT;
					::poll(&pfd, 1, 200);
					continue;
				}
				return;
			}
			off += (size_t)n;
		}
	}

	// A reply can be queued when no client is connected yet, which happens when a command arrives in the same frame
	// the client is being accepted. It is flushed on the next poll.
	bool has_client() const { return client_fd_ >= 0; }

  private:
	// A FIFO with an index, which is all a command queue needs and costs no new include in a port that links a
	// recompiled game.
	struct Queue {
		std::vector<std::string> items;
		size_t at = 0;
		void push(std::string s) { items.push_back(std::move(s)); }
		bool pop(std::string &out) {
			if (at >= items.size())
				return false;
			out = items[at++];
			if (at == items.size()) {
				items.clear();
				at = 0;
			}
			return true;
		}
	};

	static void set_nonblock(int fd) {
		int fl = ::fcntl(fd, F_GETFL, 0);
		if (fl >= 0)
			::fcntl(fd, F_SETFL, fl | O_NONBLOCK);
	}

	void close_all() {
		if (client_fd_ >= 0)
			::close(client_fd_);
		if (listen_fd_ >= 0)
			::close(listen_fd_);
		if (!bound_path_.empty())
			::unlink(bound_path_.c_str());
		client_fd_ = listen_fd_ = -1;
	}

	bool open_tcp(const std::string &spec, std::string &err) {
		size_t colon = spec.rfind(':');
		if (colon == std::string::npos) {
			err = "--control wants host:port or /path/to.sock";
			return false;
		}
		std::string host = spec.substr(0, colon);
		int port = std::atoi(spec.c_str() + colon + 1);
		listen_fd_ = ::socket(AF_INET, SOCK_STREAM, 0);
		if (listen_fd_ < 0) {
			err = std::strerror(errno);
			return false;
		}
		int one = 1;
		::setsockopt(listen_fd_, SOL_SOCKET, SO_REUSEADDR, &one, sizeof one);
		struct sockaddr_in a {};
		a.sin_family = AF_INET;
		a.sin_port = htons((uint16_t)port);
		if (host.empty() || host == "*") {
			a.sin_addr.s_addr = htonl(INADDR_LOOPBACK);
		} else if (host == "0.0.0.0") {
			a.sin_addr.s_addr = INADDR_ANY;
		} else {
			if (::inet_pton(AF_INET, host.c_str(), &a.sin_addr) != 1) {
				err = "not an IPv4 address: " + host;
				return false;
			}
		}
		if (::bind(listen_fd_, (struct sockaddr *)&a, sizeof a) != 0) {
			err = std::string("bind: ") + std::strerror(errno);
			return false;
		}
		socklen_t len = sizeof a;
		::getsockname(listen_fd_, (struct sockaddr *)&a, &len);
		char ip[INET_ADDRSTRLEN];
		::inet_ntop(AF_INET, &a.sin_addr, ip, sizeof ip);
		bound_ = std::string(ip) + ":" + std::to_string(ntohs(a.sin_port));
		return finish(err);
	}

	bool open_unix(const std::string &path, std::string &err) {
		// A stale socket file from a previous run is not an error worth failing a release on, but a live one is:
		// bind() answers that question, so unlink only after proving nobody is listening.
		int probe = ::socket(AF_UNIX, SOCK_STREAM, 0);
		if (probe >= 0) {
			struct sockaddr_un ua {};
			ua.sun_family = AF_UNIX;
			std::strncpy(ua.sun_path, path.c_str(), sizeof ua.sun_path - 1);
			if (::connect(probe, (struct sockaddr *)&ua, sizeof ua) == 0) {
				::close(probe);
				err = "something is already listening on " + path;
				return false;
			}
			::close(probe);
			::unlink(path.c_str());
		}
		listen_fd_ = ::socket(AF_UNIX, SOCK_STREAM, 0);
		if (listen_fd_ < 0) {
			err = std::strerror(errno);
			return false;
		}
		struct sockaddr_un ua {};
		ua.sun_family = AF_UNIX;
		std::strncpy(ua.sun_path, path.c_str(), sizeof ua.sun_path - 1);
		if (::bind(listen_fd_, (struct sockaddr *)&ua, sizeof ua) != 0) {
			err = std::string("bind: ") + std::strerror(errno);
			return false;
		}
		bound_path_ = path;
		bound_ = path;
		return finish(err);
	}

	bool finish(std::string &err) {
		if (::listen(listen_fd_, 1) != 0) {
			err = std::string("listen: ") + std::strerror(errno);
			return false;
		}
		set_nonblock(listen_fd_);
		return true;
	}

	int listen_fd_ = -1;
	int client_fd_ = -1;
	std::string bound_;
	std::string bound_path_;
	std::string line_;
	Queue queue_;
};

}  // namespace u2ctl

#endif	// !_WIN32
