// fat12.js - read and write an FM Towns 2HD save disk in the browser.
//
// This is a port of the proven logic in fm-family-ultima-trilogy/tools/savedisk.js,
// which is covered by 25 assertions. Keep the two in step: if you fix a bug here,
// fix it there, and the reverse.
//
// Geometry is fixed because every FM Towns 2HD save disk uses it. There is no
// need to read the BPB, and reading it would only introduce a way to get it wrong.
//
// The interesting facts, all measured:
//   - a save disk holds ROSTER1.UT2 (plain ASCII, four slots) and WORLD1-4.UT2
//   - slots are 0-based in the roster, world files are 1-based
//   - unused space is filled with 0xE5, which is the FM Towns format fill
//   - the disk needs no boot sector. Ultima II was confirmed to accept a disk
//     whose first sector carries only a BPB and write a character to it.

export const GEOM = {
  SS: 1024,          // bytes per sector
  RESERVED: 1,       // reserved sectors before the FATs
  NFATS: 2,
  FATSZ: 2,          // sectors per FAT
  ROOTS: 192,        // root directory entries
  TOTAL: 1232,       // total sectors
};

export const SIZE = GEOM.TOTAL * GEOM.SS;              // 1,261,568
export const ROOT_OFF = (GEOM.RESERVED + GEOM.NFATS * GEOM.FATSZ) * GEOM.SS;
export const DATA_OFF = (GEOM.RESERVED + GEOM.NFATS * GEOM.FATSZ + Math.ceil((GEOM.ROOTS * 32) / GEOM.SS)) * GEOM.SS;
export const FAT1 = GEOM.RESERVED * GEOM.SS;
export const FAT2 = (GEOM.RESERVED + GEOM.FATSZ) * GEOM.SS;

// --- FAT12 -----------------------------------------------------------------
// Entries are 12 bits packed into 16, so odd and even clusters are read from a
// slightly different nibble of the same 16-bit word. Getting this wrong reads
// plausible garbage rather than failing, which is why it is written carefully.

export function fatGet(img, off, cluster) {
  const o = off + Math.floor(cluster * 1.5);
  const v = img[o] | (img[o + 1] << 8);
  return cluster & 1 ? v >>> 4 : v & 0xfff;
}

export function fatSet(img, off, cluster, value) {
  const o = off + Math.floor(cluster * 1.5);
  const v = img[o] | (img[o + 1] << 8);
  const nv = cluster & 1
    ? (v & 0x000f) | ((value & 0xfff) << 4)
    : (v & 0xf000) | (value & 0xfff);
  img[o] = nv & 0xff;
  img[o + 1] = (nv >>> 8) & 0xff;
}

// Values 0xFF8..0xFFF terminate a chain. Testing the cluster about to be visited
// and stopping when the previous entry handed back a terminator is the only
// correct form: other comparisons silently drop the final cluster of every file.
export function chainOf(img, first) {
  const out = [];
  const seen = new Set();
  let c = first;
  while (c >= 2 && c <= 0xff7 && !seen.has(c) && out.length < 2000) {
    seen.add(c);
    out.push(c);
    c = fatGet(img, FAT1, c);
  }
  return out;
}

export function freeClusters(img) {
  const out = [];
  for (let c = 2; c < GEOM.TOTAL; c++) if (fatGet(img, FAT1, c) === 0) out.push(c);
  return out;
}

// --- root directory --------------------------------------------------------

export function listRoot(img) {
  const out = [];
  for (let i = 0; i < GEOM.ROOTS; i++) {
    const o = ROOT_OFF + i * 32;
    if (img[o] === 0) break;
    if (img[o] === 0xe5) continue;
    const attr = img[o + 11];
    if (attr === 0x0f) continue;
    let name = '';
    for (let k = 0; k < 11; k++) name += String.fromCharCode(img[o + k]);
    out.push({
      entryOffset: o,
      name: name.trim(),
      attr,
      cluster: img[o + 26] | (img[o + 27] << 8),
      size: (img[o + 28] | (img[o + 29] << 8) | (img[o + 30] << 16) | (img[o + 31] << 24)) >>> 0,
    });
  }
  return out;
}

export function findEntry(img, name) {
  const want = name.toUpperCase().replace(/\./g, ' ').padEnd(11).slice(0, 11);
  return listRoot(img).find((e) => e.name.toUpperCase().replace(/\s+/g, ' ').padEnd(11).slice(0, 11) === want);
}

export function readFile(img, entry) {
  const chain = chainOf(img, entry.cluster);
  const out = new Uint8Array(entry.size);
  let p = 0;
  for (const c of chain) {
    const start = DATA_OFF + (c - 2) * GEOM.SS;
    const n = Math.min(GEOM.SS, entry.size - p);
    if (n <= 0) break;
    out.set(img.subarray(start, start + n), p);
    p += n;
  }
  return out;
}

// Rewrites a file in place if the chain is long enough, else allocates a new
// one. Both FAT copies are updated because the games disagree on which they read.
export function writeFile(img, entry, data) {
  const need = Math.max(1, Math.ceil(data.length / GEOM.SS));
  let chain = chainOf(img, entry.cluster);

  if (chain.length < need) {
    const free = freeClusters(img);
    if (free.length < need) throw new Error('not enough free clusters: need ' + need + ', have ' + free.length);
    for (const c of chain) { fatSet(img, FAT1, c, 0); fatSet(img, FAT2, c, 0); }
    chain = free.slice(0, need);
    entry.cluster = chain[0];
    img[entry.entryOffset + 26] = chain[0] & 0xff;
    img[entry.entryOffset + 27] = (chain[0] >>> 8) & 0xff;
  }

  for (let i = 0; i < chain.length; i++) {
    const c = chain[i];
    const next = i + 1 < Math.min(chain.length, need) ? chain[i + 1] : 0xfff;
    fatSet(img, FAT1, c, i < need ? next : 0);
    fatSet(img, FAT2, c, i < need ? next : 0);
    if (i < need) {
      const dst = DATA_OFF + (c - 2) * GEOM.SS;
      const n = Math.min(GEOM.SS, data.length - i * GEOM.SS);
      img.fill(0x00, dst, dst + GEOM.SS);
      if (n > 0) img.set(data.subarray(i * GEOM.SS, i * GEOM.SS + n), dst);
    }
  }
  const s = data.length;
  img[entry.entryOffset + 28] = s & 0xff;
  img[entry.entryOffset + 29] = (s >>> 8) & 0xff;
  img[entry.entryOffset + 30] = (s >>> 16) & 0xff;
  img[entry.entryOffset + 31] = (s >>> 24) & 0xff;
  return chain.length;
}

export function addEntry(img, name, firstCluster, size) {
  const parts = name.toUpperCase().split('.');
  const entryName = ((parts[0] || '').padEnd(8).slice(0, 8) + (parts[1] || '').padEnd(3).slice(0, 3)).padEnd(11);
  let slot = -1;
  for (let i = 0; i < GEOM.ROOTS; i++) {
    const o = ROOT_OFF + i * 32;
    if (img[o] === 0 || img[o] === 0xe5) { slot = o; break; }
  }
  if (slot < 0) throw new Error('root directory full');
  img.fill(0x00, slot, slot + 32);
  for (let k = 0; k < 11; k++) img[slot + k] = entryName.charCodeAt(k);
  img[slot + 11] = 0x20;
  img[slot + 26] = firstCluster & 0xff;
  img[slot + 27] = (firstCluster >>> 8) & 0xff;
  img[slot + 28] = size & 0xff;
  img[slot + 29] = (size >>> 8) & 0xff;
  img[slot + 30] = (size >>> 16) & 0xff;
  img[slot + 31] = (size >>> 24) & 0xff;
  return { entryOffset: slot, name: entryName.trim(), attr: 0x20, cluster: firstCluster, size };
}

// Allocates a new file and writes data into it.
export function putFile(img, name, data) {
  const free = freeClusters(img);
  const need = Math.max(1, Math.ceil(data.length / GEOM.SS));
  if (free.length < need) throw new Error('not enough free clusters: need ' + need + ', have ' + free.length);
  const chain = free.slice(0, need);
  for (let i = 0; i < chain.length; i++) {
    const next = i + 1 < chain.length ? chain[i + 1] : 0xfff;
    fatSet(img, FAT1, chain[i], next);
    fatSet(img, FAT2, chain[i], next);
    const dst = DATA_OFF + (chain[i] - 2) * GEOM.SS;
    const n = Math.min(GEOM.SS, data.length - i * GEOM.SS);
    img.fill(0x00, dst, dst + GEOM.SS);
    if (n > 0) img.set(data.subarray(i * GEOM.SS, i * GEOM.SS + n), dst);
  }
  return addEntry(img, name, chain[0], data.length);
}

// --- creating a disk from nothing -----------------------------------------
// Verified in game: Ultima II accepts this and writes a character to it. The
// boot sector carries only a BPB, about 11 non-zero bytes, with no IPL4 and no
// boot code, because a save disk is never booted from.
export function newBlankDisk() {
  const b = new Uint8Array(SIZE).fill(0xe5);
  b.fill(0x00, 0, GEOM.SS);
  const u16 = (o, v) => { b[o] = v & 0xff; b[o + 1] = (v >>> 8) & 0xff; };
  const u32 = (o, v) => { b[o] = v & 0xff; b[o + 1] = (v >>> 8) & 0xff; b[o + 2] = (v >>> 16) & 0xff; b[o + 3] = (v >>> 24) & 0xff; };
  u16(0x0b, GEOM.SS);
  b[0x0d] = 1;
  u16(0x0e, GEOM.RESERVED);
  b[0x10] = GEOM.NFATS;
  u16(0x11, GEOM.ROOTS);
  u16(0x13, GEOM.TOTAL);
  b[0x15] = 0xfe;
  u16(0x16, GEOM.FATSZ);
  u16(0x18, 8);
  u16(0x1a, 2);
  u32(0x1c, 0);
  for (const off of [FAT1, FAT2]) {
    b.fill(0x00, off, off + GEOM.FATSZ * GEOM.SS);
    b[off] = 0xfe; b[off + 1] = 0xff; b[off + 2] = 0xff;
  }
  b.fill(0x00, ROOT_OFF, ROOT_OFF + GEOM.ROOTS * 32);
  return b;
}

// An untouched world file: one run of 0xE5 at 0xF200. Generated, never copied.
export const WORLD_SIZE = 68096;
export const WORLD_FILL_FROM = 0xf200;
export const WORLD_FILL_LEN = 6144;

export function newWorld() {
  const b = new Uint8Array(WORLD_SIZE);
  b.fill(0xe5, WORLD_FILL_FROM, WORLD_FILL_FROM + WORLD_FILL_LEN);
  return b;
}
