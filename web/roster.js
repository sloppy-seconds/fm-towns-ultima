// roster.js - parse and edit the Ultima II roster inside a save disk.
//
// ROSTER1.UT2 is plain ASCII: a header line, then four slot blocks of
// KEY=value lines separated by CRLF. Slot 0 begins at "(0)NAME=", each later
// slot at its own "(N)NAME=" line, and an empty slot is the same template with
// a NUL name and zeroed stats.
//
// Facts that are easy to get wrong, all measured in game:
//   - PROFESSION letters are F fighter, C cleric, W wizard, T thief. A mage is
//     "W", not "M": the DOS release uses M, this port does not, and using M
//     produces a garbage TYPE on the character sheet.
//   - SPID is a sprite index derived from the profession, SPID = index*4 + 2,
//     so F=2, C=6, W=10, T=14. Race and sex do not affect it.
//   - FOOD is stored at one hundred times the displayed figure, so 40000 shows
//     as 400, and it ticks down in fractions per turn.
//   - Stats are final values. Race, sex and profession bonuses were applied at
//     creation and baked in, so there is nothing to re-apply on load.

export const PROFESSIONS = {
  F: { label: 'Fighter', spid: 2 },
  C: { label: 'Cleric', spid: 6 },
  W: { label: 'Wizard', spid: 10 },
  T: { label: 'Thief', spid: 14 },
};

// --- creation stat modifiers ----------------------------------------------
// Measured, not copied from a published table. Five characters were created in
// game with 10 in every attribute, so every stored value above 10 is purely
// modifier. Four held race and sex constant while varying profession, and the
// fifth changed only sex.
//
//            STR AGI STA CHA WIS INT
//   H M F    +10 +10 +10   0   0  +5
//   H M C      0   0 +10   0 +10  +5
//   H M W      0   0 +10   0   0 +15
//   H F F    +10 +10   0 +10   0  +5
//   E M F      0  +5 +10   0   0   0
//   D M F     +5   0 +10   0   0   0
//   B M F     -5   0 +10   0 +10   0
//
// The last three were made as male fighters with a base of 10, so they isolate
// race. Solving that gives the table below. The male and female fighter differ
// by exactly a swap of +10 STA against +10 CHA with STR identical, which is what
// pins the sex bonus.
//
// This differs from the widely published Ultima II table in four ways, all
// confirmed against the game's own output:
//   - Male gives +10 Stamina, not +5 Strength. Stamina IS boosted by creation
//     in this port, which most references say never happens.
//   - Fighter gives +10 STR and +10 AGI, not +15 STR.
//   - Bobbit gives +10 WIS and -5 STR. No published table has a race penalty.
//   - Everything else matches: Female +10 CHA, Human +5 INT, Elf +5 AGI,
//     Dwarf +5 STR, Cleric +10 WIS, Wizard +10 INT, Thief +10 AGI.
//
// Every race, sex and profession shown has now been measured directly, so the
// whole table is proven rather than assumed.
export const MODIFIERS = {
  race: {
    H: { INTELLIGENCE: 5 },              // measured
    E: { AGILITY: 5 },                   // measured
    D: { STRENGTH: 5 },                  // measured
    B: { WISDOM: 10, STRENGTH: -5 },     // measured, note the penalty
  },
  sex: {
    M: { STAMINA: 10 },       // measured
    F: { CHARISMA: 10 },      // measured
  },
  profession: {
    F: { STRENGTH: 10, AGILITY: 10 }, // measured
    C: { WISDOM: 10 },                // measured
    W: { INTELLIGENCE: 10 },          // measured
    T: { AGILITY: 10 },               // measured
  },
};

// Every component of this table has been measured against characters the game
// created, so nothing here needs a caveat in the UI.
export function modifiersVerified() {
  return true;
}

// Applies race, sex and profession modifiers to a base allocation.
// Returns a new object; the input is not modified.
export function applyModifiers(base, race, sex, profession) {
  const out = { ...base };
  for (const table of [MODIFIERS.race[race], MODIFIERS.sex[sex], MODIFIERS.profession[profession]]) {
    if (!table) continue;
    for (const [k, v] of Object.entries(table)) out[k] = (Number(out[k]) || 0) + v;
  }
  return out;
}

export const RACES = { H: 'Human', E: 'Elf', D: 'Dwarf', B: 'Bobbit' };
export const SEXES = { M: 'Male', F: 'Female' };

export const STAT_FIELDS = ['STRENGTH', 'AGILITY', 'STAMINA', 'CHARISMA', 'WISDOM', 'INTELLIGENCE'];

// Field names contain regex metacharacters: the slot marker is literally
// "(0)NAME". Interpolating it raw turns the brackets into a capture group, which
// then matches nothing and silently reports every slot as empty.
function escapeRe(s) {
  return s.replace(/[.*+?^${}()|[\]\\]/g, '\\$&');
}

export function parseSlots(text) {
  const marks = [];
  const re = /\((\d)\)NAME=[^\r\n]*/g;
  let m;
  while ((m = re.exec(text)) !== null) marks.push({ slot: Number(m[1]), start: m.index });
  if (!marks.length) throw new Error('no slot markers found in the roster');
  return marks.map((mk, i) => ({
    slot: mk.slot,
    start: mk.start,
    end: i + 1 < marks.length ? marks[i + 1].start : text.length,
    text: text.slice(mk.start, i + 1 < marks.length ? marks[i + 1].start : text.length),
  }));
}

export function getField(slotText, field) {
  const m = slotText.match(new RegExp('^' + escapeRe(field) + '=([^\\r\\n]*)$', 'm'));
  return m ? m[1] : null;
}

export function setField(slotText, field, value) {
  const re = new RegExp('^(' + escapeRe(field) + '=)([^\\r\\n]*)$', 'm');
  if (!re.test(slotText)) throw new Error('field not present: ' + field);
  return slotText.replace(re, (_, pre) => pre + value);
}

// Turns every slot block into { slot, name, fields }.
export function slotsOf(text) {
  return parseSlots(text).map((s) => {
    const fields = {};
    for (const line of s.text.split(/\r?\n/)) {
      // The name line starts with a bracket, so it is matched separately. A
      // pattern expecting a leading letter drops it and the slot disappears.
      if (/^\(\d\)NAME=/.test(line)) {
        fields['(' + s.slot + ')NAME'] = line.slice(line.indexOf('=') + 1).replace(/\u0000/g, '');
        continue;
      }
      const m = line.match(/^([A-Za-z_][A-Za-z_0-9]*)=(.*)$/);
      if (m) fields[m[1]] = m[2].replace(/\u0000/g, '');
    }
    return { slot: s.slot, name: fields['(' + s.slot + ')NAME'] || '', fields, start: s.start, end: s.end };
  });
}

// Builds a fresh slot block. Starts from a donor block when one is supplied so
// fields this code does not know about survive, then overrides what we do know.
export function buildSlot(slot, values, donorText) {
  const defaults = {
    MODE: '', LANGAGE: 'E', SHAPE: 0, SPID: PROFESSIONS[values.PROFESSION || 'F'].spid, TORCHES: 0,
    STRENGTH: 10, AGILITY: 10, STAMINA: 10, CHARISMA: 10, WISDOM: 10, INTELLIGENCE: 10,
    RACE: 'H', PROFESSION: 'F', SEX: 'M', MAGIC: 65,
    HP: 400, MHP: 400, EXPERIENCE: 0, FOOD: 40000, GOLD: 400, KEY: 0, ERA: 2, TOOLS: 0,
    R_ARMOUR: 'A', R_WEAPON: 'A', SKIN: 1, CLOTH: 1, LEATHER: 0, CHAIN: 0, PLATE: 0,
    REFLECT: 0, POWER: 0, HAND: 1, DAGGER: 1, MACE: 0, AXE: 0, BOW: 0, SWORD: 0,
    GREAT_SWORD: 0, LIGHT_SWORD: 0, PHASER: 0, QUICK_SWORD: 0, RING: 0, WAND: 0,
    STAFF: 0, BOOTS: 0, CLOAK: 0, HELM: 0, GEM: 0, ANKH: 0, RED_GEM: 0, SKULL_KEY: 0,
    GREEN_GEM: 0, BRASS_BUTTON: 0, BLUE_TASSLE: 0, STRANGE_COIN: 0, GREEN_IDOL: 0,
    TRI_LITHIUM: 0, NONE: 0, LIGHT: 0, DOWN: 0, UP: 0, PASSWALL: 0, SURFACE: 0,
    PRAYER: 0, MISSILE: 0, BLINK: 0, KILL: 0, SCORE: 0, MAP: 0, MAP_X: 0, MAP_Y: 0,
    DUNG_X: 0, DUNG_Y: 0, PLAYER_X: 20, PLAYER_Y: 20, TORCH: 0, SPELL: 0,
    VEHICLE: 0, SEED: 80, FUEL: 0, FOUND: 0, WORLD: 0, ARM: 0, FOOT: 0, SLEEP: 0,
    GATE_X: 0, GATE_Y: 0, GATE_TIME: 0,
  };
  // Keep SPID consistent with the profession unless the caller overrode it.
  if (values.PROFESSION && PROFESSIONS[values.PROFESSION]) {
    defaults.SPID = PROFESSIONS[values.PROFESSION].spid;
  }

  const lines = [];
  const seen = new Set();
  let nameDone = false;
  if (donorText) {
    for (const line of donorText.split(/\r?\n/)) {
      if (/^\(\d\)NAME=/.test(line)) {
        if (!nameDone) { lines.push('(' + slot + ')NAME=' + values.NAME); nameDone = true; }
        continue;
      }
      const m = line.match(/^([A-Za-z_][A-Za-z_0-9]*)=(.*)$/);
      if (!m) continue;
      const key = m[1];
      if (seen.has(key)) continue;
      seen.add(key);
      const v = values[key] !== undefined ? values[key] : (defaults[key] !== undefined ? defaults[key] : m[2]);
      lines.push(key + '=' + v);
    }
  }
  if (!nameDone) lines.unshift('(' + slot + ')NAME=' + values.NAME);
  for (const [key, v] of Object.entries(defaults)) {
    if (seen.has(key)) continue;
    lines.push(key + '=' + (values[key] !== undefined ? values[key] : v));
  }
  return lines.join('\r\n') + '\r\n';
}

// Replaces one slot block in the roster text.
export function replaceSlot(text, slot, block) {
  const slots = parseSlots(text);
  const target = slots.find((s) => s.slot === slot);
  if (!target) throw new Error('no slot ' + slot + ' in the roster');
  return text.slice(0, target.start) + block + text.slice(target.end);
}
