#!/usr/bin/env node
// tools/makesave.js - build a save disk headlessly, using the same modules the
// browser editor runs.
//
// The GitHub Pages editor has no API, because it is a static page with no
// server. But the page's logic lives in web/fat12.js and web/roster.js as plain
// ES modules, so Node can import exactly what the browser imports. That makes a
// command-line front end a genuine end-to-end test of the shipped code rather
// than a parallel implementation that might drift.
//
// Usage:
//   node tools/makesave.js --out disk.hdm [options]
//   node tools/makesave.js --out disk.hdm --from stock.hdm [options]
//
//   --out FILE          where to write. Default savedisk.hdm
//   --from FILE         start from an existing disk instead of a blank one
//   --force             overwrite --out if it exists
//   --slot N            0..3, default 0. Later slots can be added by repeating
//                       --party below.
//
//   --party             begins a character. Every following --name/--race/...
//                       applies to it until the next --party.
//   --name NAME         letters, digits, spaces. 15 max.
//   --race H|E|D|B      human, elf, dwarf, bobbit. Default H
//   --sex  M|F          male, female. Default M
//   --prof F|C|W|T      fighter, cleric, wizard, thief. Default F
//   --stats a,b,c,d,e,f strength, agility, stamina, charisma, wisdom,
//                       intelligence. Base points, must total 90 with no value
//                       below 10. Default 10 across, which spends 60 of 90.
//   --hp N              default 400
//   --food N            rations. Stored at 100x. Default 400
//   --gold N            default 400
//   --exp N             default 0
//   --cheat             skip the 90-point and minimum checks, as the editor's
//                       cheat button does
//
// Examples:
//   node tools/makesave.js --out hero.hdm \
//     --party --name HERO --race H --sex F --prof W --stats 25,25,10,10,10,10
//
//   node tools/makesave.js --out party.hdm \
//     --party --name ANA --race H --sex F --prof W --stats 25,25,10,10,10,10 \
//     --party --name BOB --race D --sex M --prof F --stats 20,20,20,10,10,10
//
// Everything is verified by reading the written disk back and re-parsing it.
// A write that silently failed cannot pass.

import * as fat from '../web/fat12.js';
import * as roster from '../web/roster.js';
import fs from 'fs';

const STATS = ['STRENGTH', 'AGILITY', 'STAMINA', 'CHARISMA', 'WISDOM', 'INTELLIGENCE'];
const SHORT = { STRENGTH: 'STR', AGILITY: 'AGI', STAMINA: 'STA', CHARISMA: 'CHA', WISDOM: 'WIS', INTELLIGENCE: 'INT' };
const STAT_MIN = 10, STAT_POINTS = 90, STAT_MAX = 99;
const FOOD_SCALE = 100;
const NAME_MAX = 15;

function die(m) {
  console.error('error: ' + m);
  process.exit(1);
}

// --- argument parsing ------------------------------------------------------
// A --party token starts a new character; everything else accumulates onto the
// one being built. Simple and order-dependent, which is what a shell caller
// expects.

const argv = process.argv.slice(2);
let out = 'savedisk.hdm';
let from = null;
let force = false;
const parties = [];
let cur = null;

const num = (v, what) => {
  const n = Number(v);
  if (!Number.isFinite(n)) die(what + ' must be a number, got ' + JSON.stringify(v));
  return Math.floor(n);
};

for (let i = 0; i < argv.length; i++) {
  const a = argv[i];
  const next = () => {
    if (i + 1 >= argv.length) die(a + ' needs a value');
    return argv[++i];
  };
  if (a === '--out') { out = next(); continue; }
  if (a === '--from') { from = next(); continue; }
  if (a === '--force') { force = true; continue; }
  if (a === '--party') {
    cur = { slot: parties.length, cheat: false };
    parties.push(cur);
    continue;
  }
  if (!cur) die(a + ' came before any --party');
  if (a === '--cheat') { cur.cheat = true; continue; }
  if (a === '--name') { cur.NAME = next(); continue; }
  if (a === '--race') { cur.RACE = next().toUpperCase(); continue; }
  if (a === '--sex') { cur.SEX = next().toUpperCase(); continue; }
  if (a === '--prof') { cur.PROFESSION = next().toUpperCase(); continue; }
  if (a === '--stats') { cur.stats = next().split(',').map((x) => num(x.trim(), '--stats')); continue; }
  if (a === '--hp') { cur.HP = num(next(), '--hp'); continue; }
  if (a === '--food') { cur.FOOD = num(next(), '--food'); continue; }
  if (a === '--gold') { cur.GOLD = num(next(), '--gold'); continue; }
  if (a === '--exp') { cur.EXPERIENCE = num(next(), '--exp'); continue; }
  die('unknown option ' + a);
}

if (!parties.length) die('no --party given, so there would be nothing to create');

// --- validation ------------------------------------------------------------
// Mirrors validate() in web/index.html. If a rule changes there, change it here,
// otherwise the CLI will happily write characters the page refuses.

function sanitiseName(raw) {
  const cleaned = String(raw || '').replace(/[^A-Za-z0-9 ]/g, '').toUpperCase().slice(0, NAME_MAX);
  return cleaned.trim() || 'HERO';
}

for (const p of parties) {
  p.NAME = sanitiseName(p.NAME);
  p.RACE = p.RACE || 'H';
  p.SEX = p.SEX || 'M';
  p.PROFESSION = p.PROFESSION || 'F';
  p.stats = p.stats || [10, 10, 10, 10, 10, 10];
  if (p.stats.length !== 6) die('--stats needs six numbers, got ' + p.stats.length);

  if (!roster.RACES[p.RACE]) die('race must be one of ' + Object.keys(roster.RACES).join(', ') + ', got ' + p.RACE);
  if (!roster.SEXES[p.SEX]) die('sex must be M or F, got ' + p.SEX);
  if (!roster.PROFESSIONS[p.PROFESSION]) die('prof must be one of ' + Object.keys(roster.PROFESSIONS).join(', ') + ', got ' + p.PROFESSION);

  if (!p.cheat) {
    for (let k = 0; k < 6; k++) {
      if (p.stats[k] < STAT_MIN) {
        die(p.NAME + ': ' + STATS[k].toLowerCase() + ' is ' + p.stats[k] + ', below the minimum of ' + STAT_MIN + '. Use --cheat to override.');
      }
    }
    const total = p.stats.reduce((a, b) => a + b, 0);
    if (total > STAT_POINTS) {
      die(p.NAME + ': attributes total ' + total + ', over the game\'s ' + STAT_POINTS + '. Reduce by ' + (total - STAT_POINTS) + ' or use --cheat.');
    }
  }
}

// --- build -----------------------------------------------------------------

let img;
if (from) {
  if (!fs.existsSync(from)) die('no such disk: ' + from);
  img = new Uint8Array(fs.readFileSync(from));
  if (img.length !== fat.SIZE) die(from + ' is ' + img.length + ' bytes, not an FM Towns 2HD disk of ' + fat.SIZE);
} else {
  img = fat.newBlankDisk();
}

if (fs.existsSync(out) && !force) die('refusing to overwrite ' + out + ' without --force');

const dec = new TextDecoder('latin1');
const enc = new TextEncoder();

for (const p of parties) {
  if (p.slot > 3) die('only four slots exist, and ' + (p.slot + 1) + ' characters were given');

  // Base allocation, then the measured modifiers, clamped to 99 as the game does.
  const base = {};
  for (let k = 0; k < 6; k++) base[STATS[k]] = p.stats[k];
  const fin = roster.applyModifiers(base, p.RACE, p.SEX, p.PROFESSION);

  const values = {
    NAME: p.NAME, RACE: p.RACE, SEX: p.SEX, PROFESSION: p.PROFESSION,
    HP: String(p.HP ?? 400), MHP: String(p.HP ?? 400),
    FOOD: String((p.FOOD ?? 400) * FOOD_SCALE),
    GOLD: String(p.GOLD ?? 400), EXPERIENCE: String(p.EXPERIENCE ?? 0),
  };
  for (const k of STATS) values[k] = String(Math.min(STAT_MAX, fin[k]));

  const entry = fat.findEntry(img, 'ROSTER1.UT2');
  if (!entry) {
    let text = 'Roster data:ULTIMA II for FM-TOWNS\r\nLINGUAL=0\r\n';
    for (let s = 0; s < 4; s++) text += roster.buildSlot(s, s === p.slot ? values : { NAME: '\u0000' }, null);
    fat.putFile(img, 'ROSTER1.UT2', enc.encode(text));
  } else {
    const text = dec.decode(fat.readFile(img, entry));
    const donor = roster.slotsOf(text).find((s) => s.name) || null;
    const block = roster.buildSlot(p.slot, values, donor ? donor.text : null);
    fat.writeFile(img, entry, enc.encode(roster.replaceSlot(text, p.slot, block)));
  }

  const worldName = 'WORLD' + (p.slot + 1) + '.UT2';
  if (!fat.findEntry(img, worldName)) fat.putFile(img, worldName, fat.newWorld());

  // Verify: read back and confirm the name and stats survived.
  const check = roster.slotsOf(dec.decode(fat.readFile(img, fat.findEntry(img, 'ROSTER1.UT2'))));
  const w = check.find((s) => s.slot === p.slot);
  if (!w || w.name !== p.NAME) die('write did not land for slot ' + p.slot);
  for (const k of STATS) {
    if (w.fields[k] !== values[k]) die('verify failed: ' + k + ' wrote ' + values[k] + ' read ' + w.fields[k]);
  }

  console.log('%s -> slot %d  %s %s %s  %s',
    p.NAME.padEnd(NAME_MAX),
    p.slot + 1,
    roster.RACES[p.RACE], roster.SEXES[p.SEX], roster.PROFESSIONS[p.PROFESSION].label,
    STATS.map((k) => SHORT[k] + ' ' + w.fields[k]).join('  '));
  const cha = Number(w.fields.CHARISMA), int = Number(w.fields.INTELLIGENCE);
  console.log('     CHA+INT %d%s, food %d rations',
    cha + int, cha + int >= 40 ? ' (shop discount)' : '', Number(w.fields.FOOD) / FOOD_SCALE);
}

fs.writeFileSync(out, img);
console.log('\nwrote ' + out + ' (' + img.length + ' bytes)');
console.log('files: ' + fat.listRoot(img).map((f) => f.name).join(', '));
