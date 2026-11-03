# Host OOM Incident Report, 2026-11-03

**For:** the agent working on u2port
**Machine:** ai.lan (GMKtec EVO-X2, Strix Halo, Fedora 44, kernel 7.2.9-ogc3.1)
**Impact:** two global OOM kills took down an unrelated 85 GiB inference server twice, costing ~3 hours of AI host uptime.

This report corrects two wrong conclusions reached during triage. Read the "What this is NOT" section before proposing a fix.

---

## 1. Summary

A process named `u2port` / `u2port.exe` accumulated **123.6 GB of resident anonymous memory** on a 128.7 GB machine, twice, causing global OOM kills.

| Time (AEST) | PID | Process | Cgroup | anon-rss | total-vm |
|---|---|---|---|---|---|
| 08:57:09 | 2251789 | `u2port.exe` | `libpod-39169b20…scope/container` (**u2win**) | 123,634,624 kB | 235,624,184 kB |
| 12:37:42 | 2673407 | `u2port` | `tmux-spawn-ac1ede5b…scope` (**bare host, tmux**) | 123,236,220 kB | 234,982,852 kB |

Both `global_oom`, both `CONSTRAINT_NONE`, both `oom_score_adj: 0`, `UID: 1000`.

Five defunct remnants remain, all children of PID **2141386** (the u2win conmon):

```
2251789 2141386 Z 05:03:05 u2port.exe <defunct>
2296266 2141386 Z 04:48:03 u2port.exe <defunct>
2296517 2141386 Z 04:47:53 u2port.exe <defunct>
2654747 2141386 Z 01:35:52 u2port.exe <defunct>
2655267 2141386 Z 01:35:41 u2port.exe <defunct>
```

Two of those (2251789, 2654747/2655267) bracket the two OOM kills. The container is being restarted repeatedly.

---

## 2. Exact kernel evidence

Raw lines, unmodified:

```
Nov 03 08:57:09 ai kernel: oom-kill:constraint=CONSTRAINT_NONE,nodemask=(null),cpuset=user.slice,mems_allowed=0,global_oom,task_memcg=/user.slice/user-1000.slice/user@1000.service/user.slice/libpod-39169b2055170703acad3d575530af1a3ae27f2c71c4663c01ec1cabfe622476.scope/container,task=u2port.exe,pid=2251789,uid=1000
Nov 03 08:57:09 ai kernel: Out of memory: Killed process 2251789 (u2port.exe) total-vm:235624184kB, anon-rss:123634624kB, file-rss:16kB, shmem-rss:0kB, UID:1000 pgtables:261132kB oom_score_adj:0
Nov 03 12:37:42 ai kernel: oom-kill:constraint=CONSTRAINT_NONE,nodemask=(null),cpuset=user.slice,mems_allowed=0,global_oom,task_memcg=/user.slice/user-1000.slice/user@1000.service/tmux-spawn-ac1ede5b-3c10-422d-8aa4-103d736616de.scope,task=u2port,pid=2673407,uid=1000
Nov 03 12:37:42 ai kernel: Out of memory: Killed process 2673407 (u2port) total-vm:234982852kB, anon-rss:123236220kB, file-rss:2476kB, shmem-rss:0kB, UID:1000 pgtables:258700kB oom_score_adj:0
```

Machine total: `32937681 pages RAM` = 128.7 GB. **One process held ~96% of physical RAM.**

---

## 3. The OOM kill stack, the important part

```
__alloc_pages_slowpath.constprop.0
__alloc_frozen_pages_noprof
alloc_pages_mpol
? do_page_cache_ra+0x68/0x80
folio_alloc_noprof
__filemap_get_folio_mpol
filemap_fault
__do_fault
do_read_fault
do_fault
__handle_mm_fault
handle_mm_fault
do_user_addr_fault
exc_page_fault
asm_exc_page_fault
RIP: 0023:0xf7c56cc6
Code: Unable to access opcode bytes at 0xf7c56c9c.
```

Two critical facts:

**(a) `RIP: 0023:` is 32-bit compat-mode userspace.** Segment selector `0x23` is a 32-bit user code segment. This is a **32-bit Windows PE** (`u2port.exe`), not the native 64-bit SDL3 build in `module/`.

**(b) The kill was triggered by a `filemap_fault`, not by `malloc`.** The faulting task was reading a memory-mapped file. `do_page_cache_ra` appears in the trace, so readahead was allocating folios. The kernel needed pages for page cache and had none.

**This was not a malloc returning a huge size.** A 32-bit process cannot present 235 GB of `total-vm` through normal allocation; that requires the emulator/host layer to map an oversized address space.

---

## 4. Memory state at time of death (08:57:09)

```
active_anon:      15,486,740 kB  ( 15.5 GB)
inactive_anon:   109,317,600 kB  (109.3 GB)   ← cold, evictable
active_file:          11,280 kB
inactive_file:        62,076 kB
free:                157,820 kB  (  0.16 GB)
all_unreclaimable? yes
pagetables:          370,604 kB
```

**109 GB of the 123 GB was *inactive* anonymous memory**, which the kernel had already classified as evictable. `all_unreclaimable? yes` means it could not evict it.

Why not:

```
Free swap  = 224kB
Total swap = 16777212kB   (16 GB zram, zstd, /dev/zram0)
```

```
vm.swappiness = 60
vm.overcommit_memory = 0     (heuristic, NOT the cause)
CommitLimit:    81500168 kB
Committed_AS:   33010368 kB  (well under limit)
```

The RAM was held as 123 GB resident anon, but hot-vs-cold shows only 15.5 GB was active. The kernel wanted to page out 109 GB into a 16 GB zram swap that was already at 224 kB free. It could not, so it killed the faulting process.

**Overcommit was not the mechanism.** Commit was 33 GB against an 81.5 GB limit. This was exhaustion by genuine resident pages, not a bogus reservation.

---

## 5. What this is NOT

Three wrong conclusions from triage, recorded so they are not re-derived:

### NOT the native `u2port` from `module/`

There are native binaries at `build/port/b/u2port`, `build/play/u2port`, `build/ctl/u2port` etc. The OOM victim's RIP is 32-bit compat mode (`0x23`) and the name is `u2port.exe`. **The native port is not implicated by this evidence.** Do not start by reading the generated C++ in `module/`.

### NOT a runaway `malloc` driven by corrupted guest memory

That was speculation. The stack is `filemap_fault`, not a heap allocation path.

### NOT the Spice86 process

A separate, healthy process is running:

```
2126277  rss=71,732kB  vsz=267,693,152kB  dotnet …/Spice86.dll -e ultimaii.exe
          -r …/tmp/20261103-081643/dump --HttpApiPort 20230
          --McpHttpPort 20231 --GdbPort 20233 --AllowIvtAddress0
          --Cycles 3000 --HeadlessMode Minimal
```

Note it has a **267 GB `vsz`** but only **71 MB RSS**. That is normal for .NET and is *not* the same thing as the OOM (different PID, different cgroup, still alive, ran 5h22m without issue). But the `vsz` figure is worth knowing: this host already runs something with a 267 GB virtual address space, so VA space alone is not diagnostic here.

---

## 6. Open questions for the port agent

The evidence establishes *what* happened but not *why the address space was that large*. Candidate explanations, in the order they should be tested:

1. **Where does `u2port.exe` come from?** It is not in this repo. It is a 32-bit Windows PE. Which build produces it, and what emulator/compat layer runs it (Wine, DOSBox-staging, 86Box, Spice86, something custom)?

2. **Is the guest RAM setting explicit and wrong?** If the wrapper passes a large RAM size, the emulator will map and touch it. Find the launch line that sets guest memory.

3. **Is a memory-mapped file oversized?** The fault was `filemap_fault` with `do_page_cache_ra`. What file was being mapped and read? Candidate: `ENCHANT.EXP` (1,072,398 bytes, far too small), or a save disk, or a generated dump. An oversized or `ssize`-corrupt mmap request would show here.

4. **Why 235 GB of `total-vm` from a 32-bit process?** Enumerate the maps. A 32-bit process normally has a 4 GB user VA limit; reaching 235 GB means the wrapper or a large-address-aware flag is doing something unusual. `grep -E '^(Size|Rss)' /proc/<pid>/smaps_rollup` at 1/2/4 GB growth would localise it.

5. **Why does the container restart in a loop?** Five defunct children of conmon 2141386. Whatever supervises it is retrying, and each retry risks another global OOM.

---

## 7. Reproduction with a cap (do this first)

Never reproduce this uncapped on ai.lan, because halogen holds 85 GiB and dies when this happens.

```bash
systemd-run --user --scope -p MemoryMax=4G -p MemorySwapMax=0 \
  <the exact u2port invocation>
```

Under the cap the kill is scoped to your process and, more usefully, the growth curve is visible before it dies. Capture at intervals:

```bash
grep -E '^(Size|Rss|Anonymous|AnonHugePages|Swap)' /proc/<pid>/smaps_rollup
```

---

## 8. Environment facts

- `u2win` container: `docker.io/library/fedora:41`, `HostConfig.Memory = 0` (**no limit**), `MemorySwap = 0`, `ShmSize = 65536000`
- Command: `[sleep infinity]`, so the container is a shell host, not the workload
- Mount: `/var/home/paul/Projects/ai/fm-family-ultima-trilogy -> /src`
- Swap: 16 GB zram only (zstd, 5.8 GB data → 1.4 GB compressed), no disk swap
- Host RAM: 128.7 GB total, 2.0 GB carved for iGPU in firmware

---

## 9. Requested outcome

1. A scoped reproduction under `MemoryMax=4G` showing where the growth starts.
2. Identification of what maps the oversized address space (wrapper config vs. mmap in the binary).
3. Either a bounded allocation or an explicit, documented memory requirement.
4. A memory cap on `u2win` and on ad-hoc launches regardless, so a recurrence cannot take the host down.

---

*Evidence gathered 2026-11-03 from `journalctl -k` and procfs on ai.lan. All figures are verbatim from kernel output.*
