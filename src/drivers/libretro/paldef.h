#ifndef _PALDEF_H
#define _PALDEF_H

typedef struct st_palettes {
   char name[32];
   char desc[32];
   pal  data[64];
} st_palettes;

#define PALETTE_COUNT       14 /* NOTE: increment me */
#define PALETTE_INTERNAL    (PALETTE_COUNT + 1)
#define PALETTE_RAW         (PALETTE_COUNT + 2)
#define PALETTE_CUSTOM      (PALETTE_COUNT + 3)
#define PALETTE_TOTAL_COUNT PALETTE_CUSTOM

#define PAL_ASQREALC          "asqrealc"
#define PAL_VIRTUALCONSOLE    "nintendo-vc"
#define PAL_NESRGB            "rgb"
#define PAL_CXA2025AS         "sony-cxa2025as-us"
#define PAL_NESPAL            "pal"
#define PAL_BMF_FINAL2        "bmf-final2"
#define PAL_BMF_FINAL3        "bmf-final3"
#define PAL_NESCAP            "nescap"
#define PAL_WAVEBEAM          "wavebeam"
#define PAL_FBX_DIGITAL_PRIME "digital-prime-fbx"
#define PAL_FBX_MAGNUM        "magnum-fbx"
#define PAL_FBX_SMOOTH_V2     "smooth-v2-fbx"
#define PAL_FBX_NES_CLASSIC   "nes-classic-fbx"
#define PAL_ROYAL_TEA         "royal-tea"

static st_palettes palettes[PALETTE_COUNT + 1] = {
	{ PAL_ASQREALC, "AspiringSquire's Real palette", {
		{ 0x6C, 0x6C, 0x6C }, { 0x00, 0x26, 0x8E }, { 0x00, 0x00, 0xA8 }, { 0x40, 0x00, 0x94 },
		{ 0x70, 0x00, 0x70 }, { 0x78, 0x00, 0x40 }, { 0x70, 0x00, 0x00 }, { 0x62, 0x16, 0x00 },
		{ 0x44, 0x24, 0x00 }, { 0x34, 0x34, 0x00 }, { 0x00, 0x50, 0x00 }, { 0x00, 0x44, 0x44 },
		{ 0x00, 0x40, 0x60 }, { 0x00, 0x00, 0x00 }, { 0x10, 0x10, 0x10 }, { 0x10, 0x10, 0x10 },

		{ 0xBA, 0xBA, 0xBA }, { 0x20, 0x5C, 0xDC }, { 0x38, 0x38, 0xFF }, { 0x80, 0x20, 0xF0 },
		{ 0xC0, 0x00, 0xC0 }, { 0xD0, 0x14, 0x74 }, { 0xD0, 0x20, 0x20 }, { 0xAC, 0x40, 0x14 },
		{ 0x7C, 0x54, 0x00 }, { 0x58, 0x64, 0x00 }, { 0x00, 0x88, 0x00 }, { 0x00, 0x74, 0x68 },
		{ 0x00, 0x74, 0x9C }, { 0x20, 0x20, 0x20 }, { 0x10, 0x10, 0x10 }, { 0x10, 0x10, 0x10 },

		{ 0xFF, 0xFF, 0xFF }, { 0x4C, 0xA0, 0xFF }, { 0x88, 0x88, 0xFF }, { 0xC0, 0x6C, 0xFF },
		{ 0xFF, 0x50, 0xFF }, { 0xFF, 0x64, 0xB8 }, { 0xFF, 0x78, 0x78 }, { 0xFF, 0x96, 0x38 },
		{ 0xDB, 0xAB, 0x00 }, { 0xA2, 0xCA, 0x20 }, { 0x4A, 0xDC, 0x4A }, { 0x2C, 0xCC, 0xA4 },
		{ 0x1C, 0xC2, 0xEA }, { 0x58, 0x58, 0x58 }, { 0x10, 0x10, 0x10 }, { 0x10, 0x10, 0x10 },

		{ 0xFF, 0xFF, 0xFF }, { 0xB0, 0xD4, 0xFF }, { 0xC4, 0xC4, 0xFF }, { 0xE8, 0xB8, 0xFF },
		{ 0xFF, 0xB0, 0xFF }, { 0xFF, 0xB8, 0xE8 }, { 0xFF, 0xC4, 0xC4 }, { 0xFF, 0xD4, 0xA8 },
		{ 0xFF, 0xE8, 0x90 }, { 0xF0, 0xF4, 0xA4 }, { 0xC0, 0xFF, 0xC0 }, { 0xAC, 0xF4, 0xF0 },
		{ 0xA0, 0xE8, 0xFF }, { 0xC2, 0xC2, 0xC2 }, { 0x20, 0x20, 0x20 }, { 0x10, 0x10, 0x10 }
		}
	},
	{ PAL_VIRTUALCONSOLE, "Virtual Console palette", {
		{ 0x49, 0x49, 0x49 }, { 0x00, 0x00, 0x6A }, { 0x09, 0x00, 0x63 }, { 0x29, 0x00, 0x59 },
		{ 0x42, 0x00, 0x4A }, { 0x49, 0x00, 0x00 }, { 0x42, 0x00, 0x00 }, { 0x29, 0x11, 0x00 },
		{ 0x18, 0x27, 0x00 }, { 0x00, 0x30, 0x10 }, { 0x00, 0x30, 0x00 }, { 0x00, 0x29, 0x10 },
		{ 0x01, 0x20, 0x43 }, { 0x00, 0x00, 0x00 }, { 0x00, 0x00, 0x00 }, { 0x00, 0x00, 0x00 },

		{ 0x74, 0x71, 0x74 }, { 0x00, 0x30, 0x84 }, { 0x31, 0x01, 0xAC }, { 0x4B, 0x01, 0x94 },
		{ 0x64, 0x00, 0x7B }, { 0x6B, 0x00, 0x39 }, { 0x6B, 0x21, 0x01 }, { 0x5A, 0x2F, 0x00 },
		{ 0x42, 0x49, 0x00 }, { 0x18, 0x59, 0x01 }, { 0x10, 0x59, 0x01 }, { 0x01, 0x59, 0x32 },
		{ 0x01, 0x49, 0x5A }, { 0x10, 0x10, 0x10 }, { 0x00, 0x00, 0x00 }, { 0x00, 0x00, 0x00 },

		{ 0xAD, 0xAD, 0xAD }, { 0x4A, 0x71, 0xB6 }, { 0x64, 0x58, 0xD5 }, { 0x84, 0x50, 0xE6 },
		{ 0xA4, 0x51, 0xAD }, { 0xAD, 0x49, 0x84 }, { 0xB5, 0x62, 0x4A }, { 0x94, 0x71, 0x32 },
		{ 0x7B, 0x72, 0x2A }, { 0x5A, 0x86, 0x01 }, { 0x38, 0x8E, 0x31 }, { 0x31, 0x8E, 0x5A },
		{ 0x39, 0x8E, 0x8D }, { 0x38, 0x38, 0x38 }, { 0x00, 0x00, 0x00 }, { 0x00, 0x00, 0x00 },

		{ 0xB6, 0xB6, 0xB6 }, { 0x8C, 0x9D, 0xB5 }, { 0x8D, 0x8E, 0xAE }, { 0x9C, 0x8E, 0xBC },
		{ 0xA6, 0x87, 0xBC }, { 0xAD, 0x8D, 0x9D }, { 0xAE, 0x96, 0x8C }, { 0x9C, 0x8F, 0x7C },
		{ 0x9C, 0x9E, 0x72 }, { 0x94, 0xA6, 0x7C }, { 0x84, 0xA7, 0x7B }, { 0x7C, 0x9D, 0x84 },
		{ 0x73, 0x96, 0x8D }, { 0xDE, 0xDE, 0xDE }, { 0x00, 0x00, 0x00 }, { 0x00, 0x00, 0x00 }
		}
	},
	{ PAL_NESRGB, "Nintendo RGB PPU palette", {
		{ 0x6D, 0x6D, 0x6D }, { 0x00, 0x24, 0x92 }, { 0x00, 0x00, 0xDB }, { 0x6D, 0x49, 0xDB },
		{ 0x92, 0x00, 0x6D }, { 0xB6, 0x00, 0x6D }, { 0xB6, 0x24, 0x00 }, { 0x92, 0x49, 0x00 },
		{ 0x6D, 0x49, 0x00 }, { 0x24, 0x49, 0x00 }, { 0x00, 0x6D, 0x24 }, { 0x00, 0x92, 0x00 },
		{ 0x00, 0x49, 0x49 }, { 0x00, 0x00, 0x00 }, { 0x00, 0x00, 0x00 }, { 0x00, 0x00, 0x00 },

		{ 0xB6, 0xB6, 0xB6 }, { 0x00, 0x6D, 0xDB }, { 0x00, 0x49, 0xFF }, { 0x92, 0x00, 0xFF },
		{ 0xB6, 0x00, 0xFF }, { 0xFF, 0x00, 0x92 }, { 0xFF, 0x00, 0x00 }, { 0xDB, 0x6D, 0x00 },
		{ 0x92, 0x6D, 0x00 }, { 0x24, 0x92, 0x00 }, { 0x00, 0x92, 0x00 }, { 0x00, 0xB6, 0x6D },
		{ 0x00, 0x92, 0x92 }, { 0x24, 0x24, 0x24 }, { 0x00, 0x00, 0x00 }, { 0x00, 0x00, 0x00 },

		{ 0xFF, 0xFF, 0xFF }, { 0x6D, 0xB6, 0xFF }, { 0x92, 0x92, 0xFF }, { 0xDB, 0x6D, 0xFF },
		{ 0xFF, 0x00, 0xFF }, { 0xFF, 0x6D, 0xFF }, { 0xFF, 0x92, 0x00 }, { 0xFF, 0xB6, 0x00 },
		{ 0xDB, 0xDB, 0x00 }, { 0x6D, 0xDB, 0x00 }, { 0x00, 0xFF, 0x00 }, { 0x49, 0xFF, 0xDB },
		{ 0x00, 0xFF, 0xFF }, { 0x49, 0x49, 0x49 }, { 0x00, 0x00, 0x00 }, { 0x00, 0x00, 0x00 },

		{ 0xFF, 0xFF, 0xFF }, { 0xB6, 0xDB, 0xFF }, { 0xDB, 0xB6, 0xFF }, { 0xFF, 0xB6, 0xFF },
		{ 0xFF, 0x92, 0xFF }, { 0xFF, 0xB6, 0xB6 }, { 0xFF, 0xDB, 0x92 }, { 0xFF, 0xFF, 0x49 },
		{ 0xFF, 0xFF, 0x6D }, { 0xB6, 0xFF, 0x49 }, { 0x92, 0xFF, 0x6D }, { 0x49, 0xFF, 0xDB },
		{ 0x92, 0xDB, 0xFF }, { 0x92, 0x92, 0x92 }, { 0x00, 0x00, 0x00 }, { 0x00, 0x00, 0x00 }
		}
	},
	{ PAL_CXA2025AS, "Sony CXA2025AS US palette", {
		{ 0x58, 0x58, 0x58 }, { 0x00, 0x23, 0x8C }, { 0x00, 0x13, 0x9B }, { 0x2D, 0x05, 0x85 },
		{ 0x5D, 0x00, 0x52 }, { 0x7A, 0x00, 0x17 }, { 0x7A, 0x08, 0x00 }, { 0x5F, 0x18, 0x00 },
		{ 0x35, 0x2A, 0x00 }, { 0x09, 0x39, 0x00 }, { 0x00, 0x3F, 0x00 }, { 0x00, 0x3C, 0x22 },
		{ 0x00, 0x32, 0x5D }, { 0x00, 0x00, 0x00 }, { 0x00, 0x00, 0x00 }, { 0x00, 0x00, 0x00 },

		{ 0xA1, 0xA1, 0xA1 }, { 0x00, 0x53, 0xEE }, { 0x15, 0x3C, 0xFE }, { 0x60, 0x28, 0xE4 },
		{ 0xA9, 0x1D, 0x98 }, { 0xD4, 0x1E, 0x41 }, { 0xD2, 0x2C, 0x00 }, { 0xAA, 0x44, 0x00 },
		{ 0x6C, 0x5E, 0x00 }, { 0x2D, 0x73, 0x00 }, { 0x00, 0x7D, 0x06 }, { 0x00, 0x78, 0x52 },
		{ 0x00, 0x69, 0xA9 }, { 0x00, 0x00, 0x00 }, { 0x00, 0x00, 0x00 }, { 0x00, 0x00, 0x00 },

		{ 0xFF, 0xFF, 0xFF }, { 0x1F, 0xA5, 0xFE }, { 0x5E, 0x89, 0xFE }, { 0xB5, 0x72, 0xFE },
		{ 0xFE, 0x65, 0xF6 }, { 0xFE, 0x67, 0x90 }, { 0xFE, 0x77, 0x3C }, { 0xFE, 0x93, 0x08 },
		{ 0xC4, 0xB2, 0x00 }, { 0x79, 0xCA, 0x10 }, { 0x3A, 0xD5, 0x4A }, { 0x11, 0xD1, 0xA4 },
		{ 0x06, 0xBF, 0xFE }, { 0x42, 0x42, 0x42 }, { 0x00, 0x00, 0x00 }, { 0x00, 0x00, 0x00 },

		{ 0xFF, 0xFF, 0xFF }, { 0xA0, 0xD9, 0xFE }, { 0xBD, 0xCC, 0xFE }, { 0xE1, 0xC2, 0xFE },
		{ 0xFE, 0xBC, 0xFB }, { 0xFE, 0xBD, 0xD0 }, { 0xFE, 0xC5, 0xA9 }, { 0xFE, 0xD1, 0x8E },
		{ 0xE9, 0xDE, 0x86 }, { 0xC7, 0xE9, 0x92 }, { 0xA8, 0xEE, 0xB0 }, { 0x95, 0xEC, 0xD9 },
		{ 0x91, 0xE4, 0xFE }, { 0xAC, 0xAC, 0xAC }, { 0x00, 0x00, 0x00 }, { 0x00, 0x00, 0x00 }
		}
	},
	{ PAL_NESPAL, "PAL palette", {
		{ 0x80, 0x80, 0x80 }, { 0x00, 0x00, 0xBA }, { 0x37, 0x00, 0xBF }, { 0x84, 0x00, 0xA6 },
		{ 0xBB, 0x00, 0x6A }, { 0xB7, 0x00, 0x1E }, { 0xB3, 0x00, 0x00 }, { 0x91, 0x26, 0x00 },
		{ 0x7B, 0x2B, 0x00 }, { 0x00, 0x3E, 0x00 }, { 0x00, 0x48, 0x0D }, { 0x00, 0x3C, 0x22 },
		{ 0x00, 0x2F, 0x66 }, { 0x00, 0x00, 0x00 }, { 0x05, 0x05, 0x05 }, { 0x05, 0x05, 0x05 },

		{ 0xC8, 0xC8, 0xC8 }, { 0x00, 0x59, 0xFF }, { 0x44, 0x3C, 0xFF }, { 0xB7, 0x33, 0xCC },
		{ 0xFE, 0x33, 0xAA }, { 0xFE, 0x37, 0x5E }, { 0xFE, 0x37, 0x1A }, { 0xD5, 0x4B, 0x00 },
		{ 0xC4, 0x62, 0x00 }, { 0x3C, 0x7B, 0x00 }, { 0x1D, 0x84, 0x15 }, { 0x00, 0x95, 0x66 },
		{ 0x00, 0x84, 0xC4 }, { 0x11, 0x11, 0x11 }, { 0x09, 0x09, 0x09 }, { 0x09, 0x09, 0x09 },

		{ 0xFE, 0xFE, 0xFE }, { 0x00, 0x95, 0xFF }, { 0x6F, 0x84, 0xFF }, { 0xD5, 0x6F, 0xFF },
		{ 0xFE, 0x77, 0xCC }, { 0xFE, 0x6F, 0x99 }, { 0xFE, 0x7B, 0x59 }, { 0xFE, 0x91, 0x5F },
		{ 0xFE, 0xA2, 0x33 }, { 0xA6, 0xBF, 0x00 }, { 0x51, 0xD9, 0x6A }, { 0x4D, 0xD5, 0xAE },
		{ 0x00, 0xD9, 0xFF }, { 0x66, 0x66, 0x66 }, { 0x0D, 0x0D, 0x0D }, { 0x0D, 0x0D, 0x0D },

		{ 0xFE, 0xFE, 0xFE }, { 0x84, 0xBF, 0xFF }, { 0xBB, 0xBB, 0xFF }, { 0xD0, 0xBB, 0xFF },
		{ 0xFE, 0xBF, 0xEA }, { 0xFE, 0xBF, 0xCC }, { 0xFE, 0xC4, 0xB7 }, { 0xFE, 0xCC, 0xAE },
		{ 0xFE, 0xD9, 0xA2 }, { 0xCC, 0xE1, 0x99 }, { 0xAE, 0xEE, 0xB7 }, { 0xAA, 0xF8, 0xEE },
		{ 0xB3, 0xEE, 0xFF }, { 0xDD, 0xDD, 0xDD }, { 0x11, 0x11, 0x11 }, { 0x11, 0x11, 0x11 }
		}
	},
	{ PAL_BMF_FINAL2, "BMF's Final 2 palette", {
		{ 0x52, 0x52, 0x52 }, { 0x00, 0x00, 0x80 }, { 0x08, 0x00, 0x8A }, { 0x2C, 0x00, 0x7E },
		{ 0x4A, 0x00, 0x4E }, { 0x50, 0x00, 0x06 }, { 0x44, 0x00, 0x00 }, { 0x26, 0x08, 0x00 },
		{ 0x0A, 0x20, 0x00 }, { 0x00, 0x2E, 0x00 }, { 0x00, 0x32, 0x00 }, { 0x00, 0x26, 0x0A },
		{ 0x00, 0x1C, 0x48 }, { 0x00, 0x00, 0x00 }, { 0x00, 0x00, 0x00 }, { 0x00, 0x00, 0x00 },

		{ 0xA4, 0xA4, 0xA4 }, { 0x00, 0x38, 0xCE }, { 0x34, 0x16, 0xEC }, { 0x5E, 0x04, 0xDC },
		{ 0x8C, 0x00, 0xB0 }, { 0x9A, 0x00, 0x4C }, { 0x90, 0x18, 0x00 }, { 0x70, 0x36, 0x00 },
		{ 0x4C, 0x54, 0x00 }, { 0x0E, 0x6C, 0x00 }, { 0x00, 0x74, 0x00 }, { 0x00, 0x6C, 0x2C },
		{ 0x00, 0x5E, 0x84 }, { 0x00, 0x00, 0x00 }, { 0x00, 0x00, 0x00 }, { 0x00, 0x00, 0x00 },

		{ 0xFF, 0xFF, 0xFF }, { 0x4C, 0x9C, 0xFF }, { 0x7C, 0x78, 0xFF }, { 0xA6, 0x64, 0xFF },
		{ 0xDA, 0x5A, 0xFF }, { 0xF0, 0x54, 0xC0 }, { 0xF0, 0x6A, 0x56 }, { 0xD6, 0x86, 0x10 },
		{ 0xBA, 0xA4, 0x00 }, { 0x76, 0xC0, 0x00 }, { 0x46, 0xCC, 0x1A }, { 0x2E, 0xC8, 0x66 },
		{ 0x34, 0xC2, 0xBE }, { 0x3A, 0x3A, 0x3A }, { 0x00, 0x00, 0x00 }, { 0x00, 0x00, 0x00 },

		{ 0xFF, 0xFF, 0xFF }, { 0xB6, 0xDA, 0xFF }, { 0xC8, 0xCA, 0xFF }, { 0xDA, 0xC2, 0xFF },
		{ 0xF0, 0xBE, 0xFF }, { 0xFC, 0xBC, 0xEE }, { 0xFA, 0xC2, 0xC0 }, { 0xF2, 0xCC, 0xA2 },
		{ 0xE6, 0xDA, 0x92 }, { 0xCC, 0xE6, 0x8E }, { 0xB8, 0xEE, 0xA2 }, { 0xAE, 0xEA, 0xBE },
		{ 0xAE, 0xE8, 0xE2 }, { 0xB0, 0xB0, 0xB0 }, { 0x00, 0x00, 0x00 }, { 0x00, 0x00, 0x00 }
		}
	},
	{ PAL_BMF_FINAL3, "BMF's Final 3 palette", {
		{ 0x68, 0x68, 0x68 }, { 0x00, 0x12, 0x99 }, { 0x1A, 0x08, 0xAA }, { 0x51, 0x02, 0x9A },
		{ 0x7E, 0x00, 0x69 }, { 0x8E, 0x00, 0x1C }, { 0x7E, 0x03, 0x01 }, { 0x51, 0x18, 0x00 },
		{ 0x1F, 0x37, 0x00 }, { 0x01, 0x4E, 0x00 }, { 0x00, 0x5A, 0x00 }, { 0x00, 0x50, 0x1C },
		{ 0x00, 0x40, 0x61 }, { 0x00, 0x00, 0x00 }, { 0x00, 0x00, 0x00 }, { 0x00, 0x00, 0x00 },

		{ 0xB9, 0xB9, 0xB9 }, { 0x0C, 0x5C, 0xD7 }, { 0x50, 0x35, 0xF0 }, { 0x89, 0x19, 0xE0 },
		{ 0xBB, 0x0C, 0xB3 }, { 0xCE, 0x0C, 0x61 }, { 0xC0, 0x2B, 0x0E }, { 0x95, 0x4D, 0x01 },
		{ 0x61, 0x6F, 0x00 }, { 0x1F, 0x8B, 0x00 }, { 0x01, 0x98, 0x0C }, { 0x00, 0x93, 0x4B },
		{ 0x00, 0x81, 0x9B }, { 0x00, 0x00, 0x00 }, { 0x00, 0x00, 0x00 }, { 0x00, 0x00, 0x00 },

		{ 0xFF, 0xFF, 0xFF }, { 0x63, 0xB4, 0xFF }, { 0x9B, 0x91, 0xFF }, { 0xD3, 0x77, 0xFF },
		{ 0xEF, 0x6A, 0xFF }, { 0xF9, 0x68, 0xC0 }, { 0xF9, 0x7D, 0x6C }, { 0xED, 0x9B, 0x2D },
		{ 0xBD, 0xBD, 0x16 }, { 0x7C, 0xDA, 0x1C }, { 0x4B, 0xE8, 0x47 }, { 0x35, 0xE5, 0x91 },
		{ 0x3F, 0xD9, 0xDD }, { 0x60, 0x60, 0x60 }, { 0x00, 0x00, 0x00 }, { 0x00, 0x00, 0x00 },

		{ 0xFF, 0xFF, 0xFF }, { 0xAC, 0xE7, 0xFF }, { 0xD5, 0xCD, 0xFF }, { 0xED, 0xBA, 0xFF },
		{ 0xF8, 0xB0, 0xFF }, { 0xFE, 0xB0, 0xEC }, { 0xFD, 0xBD, 0xB5 }, { 0xF9, 0xD2, 0x8E },
		{ 0xE8, 0xEB, 0x7C }, { 0xBB, 0xF3, 0x82 }, { 0x99, 0xF7, 0xA2 }, { 0x8A, 0xF5, 0xD0 },
		{ 0x92, 0xF4, 0xF1 }, { 0xBE, 0xBE, 0xBE }, { 0x00, 0x00, 0x00 }, { 0x00, 0x00, 0x00 }
		}
	},
	{ PAL_NESCAP, "RGBSource's NESCAP palette", {
		{ 0x64, 0x63, 0x65 }, { 0x00, 0x15, 0x80 }, { 0x1D, 0x00, 0x90 }, { 0x38, 0x00, 0x82 },
		{ 0x56, 0x00, 0x5D }, { 0x5A, 0x00, 0x1A }, { 0x4F, 0x09, 0x00 }, { 0x38, 0x1B, 0x00 },
		{ 0x1E, 0x31, 0x00 }, { 0x00, 0x3D, 0x00 }, { 0x00, 0x41, 0x00 }, { 0x00, 0x3A, 0x1B },
		{ 0x00, 0x2F, 0x55 }, { 0x00, 0x00, 0x00 }, { 0x00, 0x00, 0x00 }, { 0x00, 0x00, 0x00 },

		{ 0xAF, 0xAD, 0xAF }, { 0x16, 0x4B, 0xCA }, { 0x47, 0x2A, 0xE7 }, { 0x6B, 0x1B, 0xDB },
		{ 0x96, 0x17, 0xB0 }, { 0x9F, 0x18, 0x5B }, { 0x96, 0x30, 0x01 }, { 0x7B, 0x48, 0x00 },
		{ 0x5A, 0x66, 0x00 }, { 0x23, 0x78, 0x00 }, { 0x01, 0x7F, 0x00 }, { 0x00, 0x78, 0x3D },
		{ 0x00, 0x6C, 0x8C }, { 0x00, 0x00, 0x00 }, { 0x00, 0x00, 0x00 }, { 0x00, 0x00, 0x00 },

		{ 0xFF, 0xFF, 0xFF }, { 0x60, 0xA6, 0xFF }, { 0x8F, 0x84, 0xFF }, { 0xB4, 0x73, 0xFF },
		{ 0xE2, 0x6C, 0xFF }, { 0xF2, 0x68, 0xC3 }, { 0xEF, 0x7E, 0x61 }, { 0xD8, 0x95, 0x27 },
		{ 0xBA, 0xB3, 0x07 }, { 0x81, 0xC8, 0x07 }, { 0x57, 0xD4, 0x3D }, { 0x47, 0xCF, 0x7E },
		{ 0x4B, 0xC5, 0xCD }, { 0x4C, 0x4B, 0x4D }, { 0x00, 0x00, 0x00 }, { 0x00, 0x00, 0x00 },

		{ 0xFF, 0xFF, 0xFF }, { 0xC2, 0xE0, 0xFF }, { 0xD5, 0xD2, 0xFF }, { 0xE3, 0xCB, 0xFF },
		{ 0xF7, 0xC8, 0xFF }, { 0xFE, 0xC6, 0xEE }, { 0xFE, 0xCE, 0xC6 }, { 0xF6, 0xD7, 0xAE },
		{ 0xE9, 0xE4, 0x9F }, { 0xD3, 0xED, 0x9D }, { 0xC0, 0xF2, 0xB2 }, { 0xB9, 0xF1, 0xCC },
		{ 0xBA, 0xED, 0xED }, { 0xBA, 0xB9, 0xBB }, { 0x00, 0x00, 0x00 }, { 0x00, 0x00, 0x00 }
		}
	},
	{ PAL_WAVEBEAM, "nakedarthur's Wavebeam palette", {
		{ 0x6B, 0x6B, 0x6B }, { 0x00, 0x1B, 0x88 }, { 0x21, 0x00, 0x9A }, { 0x40, 0x00, 0x8C },
		{ 0x60, 0x00, 0x67 }, { 0x64, 0x00, 0x1E }, { 0x59, 0x08, 0x00 }, { 0x48, 0x16, 0x00 },
		{ 0x28, 0x36, 0x00 }, { 0x00, 0x45, 0x00 }, { 0x00, 0x49, 0x08 }, { 0x00, 0x42, 0x1D },
		{ 0x00, 0x36, 0x59 }, { 0x00, 0x00, 0x00 }, { 0x00, 0x00, 0x00 }, { 0x00, 0x00, 0x00 },

		{ 0xB4, 0xB4, 0xB4 }, { 0x15, 0x55, 0xD3 }, { 0x43, 0x37, 0xEF }, { 0x74, 0x25, 0xDF },
		{ 0x9C, 0x19, 0xB9 }, { 0xAC, 0x0F, 0x64 }, { 0xAA, 0x2C, 0x00 }, { 0x8A, 0x4B, 0x00 },
		{ 0x66, 0x6B, 0x00 }, { 0x21, 0x83, 0x00 }, { 0x00, 0x8A, 0x00 }, { 0x00, 0x81, 0x44 },
		{ 0x00, 0x76, 0x91 }, { 0x00, 0x00, 0x00 }, { 0x00, 0x00, 0x00 }, { 0x00, 0x00, 0x00 },

		{ 0xFF, 0xFF, 0xFF }, { 0x63, 0xB2, 0xFF }, { 0x7C, 0x9C, 0xFF }, { 0xC0, 0x7D, 0xFE },
		{ 0xE9, 0x77, 0xFF }, { 0xF5, 0x72, 0xCD }, { 0xF4, 0x88, 0x6B }, { 0xDD, 0xA0, 0x29 },
		{ 0xBD, 0xBD, 0x0A }, { 0x89, 0xD2, 0x0E }, { 0x5C, 0xDE, 0x3E }, { 0x4B, 0xD8, 0x86 },
		{ 0x4D, 0xCF, 0xD2 }, { 0x52, 0x52, 0x52 }, { 0x00, 0x00, 0x00 }, { 0x00, 0x00, 0x00 },

		{ 0xFF, 0xFF, 0xFF }, { 0xBC, 0xDF, 0xFF }, { 0xD2, 0xD2, 0xFF }, { 0xE1, 0xC8, 0xFF },
		{ 0xEF, 0xC7, 0xFF }, { 0xFF, 0xC3, 0xE1 }, { 0xFF, 0xCA, 0xC6 }, { 0xF2, 0xDA, 0xAD },
		{ 0xEB, 0xE3, 0xA0 }, { 0xD2, 0xED, 0xA2 }, { 0xBC, 0xF4, 0xB4 }, { 0xB5, 0xF1, 0xCE },
		{ 0xB6, 0xEC, 0xF1 }, { 0xBF, 0xBF, 0xBF }, { 0x00, 0x00, 0x00 }, { 0x00, 0x00, 0x00 }
		}
	},
	{ PAL_FBX_DIGITAL_PRIME, "FBX's Digital Prime palette", {
		{ 0x61, 0x61, 0x61 }, { 0x00, 0x00, 0x88 }, { 0x1F, 0x0D, 0x99 }, { 0x37, 0x13, 0x79 },
		{ 0x56, 0x12, 0x60 }, { 0x5D, 0x00, 0x10 }, { 0x52, 0x0E, 0x00 }, { 0x3A, 0x23, 0x08 },
		{ 0x21, 0x35, 0x0C }, { 0x0D, 0x41, 0x0E }, { 0x17, 0x44, 0x17 }, { 0x00, 0x3A, 0x1F },
		{ 0x00, 0x2F, 0x57 }, { 0x00, 0x00, 0x00 }, { 0x00, 0x00, 0x00 }, { 0x00, 0x00, 0x00 },

		{ 0xAA, 0xAA, 0xAA }, { 0x0D, 0x4D, 0xC4 }, { 0x4B, 0x24, 0xDE }, { 0x69, 0x12, 0xCF },
		{ 0x90, 0x14, 0xAD }, { 0x9D, 0x1C, 0x48 }, { 0x92, 0x34, 0x04 }, { 0x73, 0x50, 0x05 },
		{ 0x5D, 0x69, 0x13 }, { 0x16, 0x7A, 0x11 }, { 0x13, 0x80, 0x08 }, { 0x12, 0x76, 0x49 },
		{ 0x1C, 0x66, 0x91 }, { 0x00, 0x00, 0x00 }, { 0x00, 0x00, 0x00 }, { 0x00, 0x00, 0x00 },

		{ 0xFC, 0xFC, 0xFC }, { 0x63, 0x9A, 0xFC }, { 0x8A, 0x7E, 0xFC }, { 0xB0, 0x6A, 0xFC },
		{ 0xDD, 0x6D, 0xF2 }, { 0xE7, 0x71, 0xAB }, { 0xE3, 0x86, 0x58 }, { 0xCC, 0x9E, 0x22 },
		{ 0xA8, 0xB1, 0x00 }, { 0x72, 0xC1, 0x00 }, { 0x5A, 0xCD, 0x4E }, { 0x34, 0xC2, 0x8E },
		{ 0x4F, 0xBE, 0xCE }, { 0x42, 0x42, 0x42 }, { 0x00, 0x00, 0x00 }, { 0x00, 0x00, 0x00 },

		{ 0xFC, 0xFC, 0xFC }, { 0xBE, 0xD4, 0xFC }, { 0xCA, 0xCA, 0xFC }, { 0xD9, 0xC4, 0xFC },
		{ 0xEC, 0xC1, 0xFC }, { 0xFA, 0xC3, 0xE7 }, { 0xF7, 0xCE, 0xC3 }, { 0xE2, 0xCD, 0xA7 },
		{ 0xDA, 0xDB, 0x9C }, { 0xC8, 0xE3, 0x9E }, { 0xBF, 0xE5, 0xB8 }, { 0xB2, 0xEB, 0xC8 },
		{ 0xB7, 0xE5, 0xEB }, { 0xAC, 0xAC, 0xAC }, { 0x00, 0x00, 0x00 }, { 0x00, 0x00, 0x00 }
		}
	},
	{ PAL_FBX_MAGNUM, "FBX's Magnum palette", {
		{ 0x69, 0x69, 0x69 }, { 0x00, 0x14, 0x8F }, { 0x1E, 0x02, 0x9B }, { 0x3F, 0x00, 0x8A },
		{ 0x60, 0x00, 0x60 }, { 0x66, 0x00, 0x17 }, { 0x57, 0x0D, 0x00 }, { 0x45, 0x1B, 0x00 },
		{ 0x24, 0x34, 0x00 }, { 0x00, 0x42, 0x00 }, { 0x00, 0x45, 0x00 }, { 0x00, 0x3C, 0x1F },
		{ 0x00, 0x31, 0x5C }, { 0x00, 0x00, 0x00 }, { 0x00, 0x00, 0x00 }, { 0x00, 0x00, 0x00 },

		{ 0xAF, 0xAF, 0xAF }, { 0x0F, 0x51, 0xDD }, { 0x44, 0x2F, 0xF3 }, { 0x72, 0x20, 0xE2 },
		{ 0xA3, 0x19, 0xB3 }, { 0xAE, 0x1C, 0x51 }, { 0xA4, 0x34, 0x00 }, { 0x88, 0x4D, 0x00 },
		{ 0x67, 0x6D, 0x00 }, { 0x20, 0x80, 0x00 }, { 0x00, 0x8B, 0x00 }, { 0x00, 0x7F, 0x42 },
		{ 0x00, 0x6C, 0x97 }, { 0x01, 0x01, 0x01 }, { 0x00, 0x00, 0x00 }, { 0x00, 0x00, 0x00 },

		{ 0xFF, 0xFF, 0xFF }, { 0x65, 0xAA, 0xFF }, { 0x8C, 0x96, 0xFF }, { 0xB9, 0x83, 0xFF },
		{ 0xDD, 0x6F, 0xFF }, { 0xEA, 0x6F, 0xBD }, { 0xEB, 0x84, 0x66 }, { 0xDC, 0xA2, 0x1F },
		{ 0xBA, 0xB4, 0x03 }, { 0x7E, 0xCB, 0x07 }, { 0x54, 0xD3, 0x3E }, { 0x3C, 0xD2, 0x84 },
		{ 0x3E, 0xC7, 0xCC }, { 0x4B, 0x4B, 0x4B }, { 0x00, 0x00, 0x00 }, { 0x00, 0x00, 0x00 },

		{ 0xFF, 0xFF, 0xFF }, { 0xBD, 0xE2, 0xFF }, { 0xCE, 0xCF, 0xFF }, { 0xE6, 0xC2, 0xFF },
		{ 0xF6, 0xBC, 0xFF }, { 0xF9, 0xC2, 0xED }, { 0xFA, 0xCF, 0xC6 }, { 0xF8, 0xDE, 0xAC },
		{ 0xEE, 0xE9, 0xA1 }, { 0xD0, 0xF5, 0x9F }, { 0xBB, 0xF5, 0xAF }, { 0xB3, 0xF5, 0xCD },
		{ 0xB9, 0xED, 0xF0 }, { 0xB9, 0xB9, 0xB9 }, { 0x00, 0x00, 0x00 }, { 0x00, 0x00, 0x00 }
		}
	},
	{ PAL_FBX_SMOOTH_V2, "FBX's Smooth V2 palette", {
		{ 0x6A, 0x6A, 0x6A }, { 0x00, 0x14, 0x8F }, { 0x1E, 0x02, 0x9B }, { 0x3F, 0x00, 0x8A },
		{ 0x60, 0x00, 0x60 }, { 0x66, 0x00, 0x17 }, { 0x57, 0x0D, 0x00 }, { 0x3C, 0x1F, 0x00 },
		{ 0x1B, 0x33, 0x00 }, { 0x00, 0x42, 0x00 }, { 0x00, 0x45, 0x00 }, { 0x00, 0x3C, 0x1F },
		{ 0x00, 0x31, 0x5C }, { 0x00, 0x00, 0x00 }, { 0x00, 0x00, 0x00 }, { 0x00, 0x00, 0x00 },

		{ 0xB9, 0xB9, 0xB9 }, { 0x0F, 0x4B, 0xD4 }, { 0x41, 0x2D, 0xEB }, { 0x6C, 0x1D, 0xD9 },
		{ 0x9C, 0x17, 0xAB }, { 0xA7, 0x1A, 0x4D }, { 0x99, 0x32, 0x00 }, { 0x7C, 0x4A, 0x00 },
		{ 0x54, 0x64, 0x00 }, { 0x1A, 0x78, 0x00 }, { 0x00, 0x7F, 0x00 }, { 0x00, 0x76, 0x3E },
		{ 0x00, 0x67, 0x8F }, { 0x01, 0x01, 0x01 }, { 0x00, 0x00, 0x00 }, { 0x00, 0x00, 0x00 },
		{ 0xFF, 0xFF, 0xFF }, { 0x68, 0xA6, 0xFF }, { 0x8C, 0x9C, 0xFF }, { 0xB5, 0x86, 0xFF },

		{ 0xD9, 0x75, 0xFD }, { 0xE3, 0x77, 0xB9 }, { 0xE5, 0x8D, 0x68 }, { 0xD4, 0x9D, 0x29 },
		{ 0xB3, 0xAF, 0x0C }, { 0x7B, 0xC2, 0x11 }, { 0x55, 0xCA, 0x47 }, { 0x46, 0xCB, 0x81 },
		{ 0x47, 0xC1, 0xC5 }, { 0x4A, 0x4A, 0x4A }, { 0x00, 0x00, 0x00 }, { 0x00, 0x00, 0x00 },
		{ 0xFF, 0xFF, 0xFF }, { 0xCC, 0xEA, 0xFF }, { 0xDD, 0xDE, 0xFF }, { 0xEC, 0xDA, 0xFF },

		{ 0xF8, 0xD7, 0xFE }, { 0xFC, 0xD6, 0xF5 }, { 0xFD, 0xDB, 0xCF }, { 0xF9, 0xE7, 0xB5 },
		{ 0xF1, 0xF0, 0xAA }, { 0xDA, 0xFA, 0xA9 }, { 0xC9, 0xFF, 0xBC }, { 0xC3, 0xFB, 0xD7 },
		{ 0xC4, 0xF6, 0xF6 }, { 0xBE, 0xBE, 0xBE }, { 0x00, 0x00, 0x00 }, { 0x00, 0x00, 0x00 }
		}
	},
	{ PAL_FBX_NES_CLASSIC, "FBX's NES Classic palette", {
		{ 0x61, 0x61, 0x61 }, { 0x00, 0x00, 0x88 }, { 0x1F, 0x0D, 0x99 }, { 0x37, 0x13, 0x79 },
		{ 0x56, 0x12, 0x60 }, { 0x5D, 0x00, 0x10 }, { 0x52, 0x0E, 0x00 }, { 0x3A, 0x23, 0x08 },
		{ 0x21, 0x35, 0x0C }, { 0x0D, 0x41, 0x0E }, { 0x17, 0x44, 0x17 }, { 0x00, 0x3A, 0x1F },
		{ 0x00, 0x2F, 0x57 }, { 0x00, 0x00, 0x00 }, { 0x00, 0x00, 0x00 }, { 0x00, 0x00, 0x00 },

		{ 0xAA, 0xAA, 0xAA }, { 0x0D, 0x4D, 0xC4 }, { 0x4B, 0x24, 0xDE }, { 0x69, 0x12, 0xCF },
		{ 0x90, 0x14, 0xAD }, { 0x9D, 0x1C, 0x48 }, { 0x92, 0x34, 0x04 }, { 0x73, 0x50, 0x05 },
		{ 0x5D, 0x69, 0x13 }, { 0x16, 0x7A, 0x11 }, { 0x13, 0x80, 0x08 }, { 0x12, 0x76, 0x49 },
		{ 0x1C, 0x66, 0x91 }, { 0x00, 0x00, 0x00 }, { 0x00, 0x00, 0x00 }, { 0x00, 0x00, 0x00 },

		{ 0xFC, 0xFC, 0xFC }, { 0x63, 0x9A, 0xFC }, { 0x8A, 0x7E, 0xFC }, { 0xB0, 0x6A, 0xFC },
		{ 0xDD, 0x6D, 0xF2 }, { 0xE7, 0x71, 0xAB }, { 0xE3, 0x86, 0x58 }, { 0xCC, 0x9E, 0x22 },
		{ 0xA8, 0xB1, 0x00 }, { 0x72, 0xC1, 0x00 }, { 0x5A, 0xCD, 0x4E }, { 0x34, 0xC2, 0x8E },
		{ 0x4F, 0xBE, 0xCE }, { 0x42, 0x42, 0x42 }, { 0x00, 0x00, 0x00 }, { 0x00, 0x00, 0x00 },

		{ 0xFC, 0xFC, 0xFC }, { 0xBE, 0xD4, 0xFC }, { 0xCA, 0xCA, 0xFC }, { 0xD9, 0xC4, 0xFC },
		{ 0xEC, 0xC1, 0xFC }, { 0xFA, 0xC3, 0xE7 }, { 0xF7, 0xCE, 0xC3 }, { 0xE2, 0xCD, 0xA7 },
		{ 0xDA, 0xDB, 0x9C }, { 0xC8, 0xE3, 0x9E }, { 0xBF, 0xE5, 0xB8 }, { 0xB2, 0xEB, 0xC8 },
		{ 0xB7, 0xE5, 0xEB }, { 0xAC, 0xAC, 0xAC }, { 0x00, 0x00, 0x00 }, { 0x00, 0x00, 0x00 }
		}
	},
	{ PAL_ROYAL_TEA, "Royal Tea (PVM-2530)", {
		/* https://github.com/libretro/nestopia/commit/8707e779e0e5420b3f5842c59e800756e855f131 */
		{ 0x5A, 0x61, 0x65 }, { 0x00, 0x23, 0xA8 }, { 0x0F, 0x17, 0xB0 }, { 0x28, 0x12, 0x9F },
		{ 0x55, 0x0B, 0x61 }, { 0x6B, 0x0A, 0x11 }, { 0x6E, 0x0D, 0x00 }, { 0x5E, 0x19, 0x00 },
		{ 0x3C, 0x24, 0x02 }, { 0x00, 0x31, 0x04 }, { 0x00, 0x35, 0x08 }, { 0x00, 0x34, 0x1F },
		{ 0x00, 0x2C, 0x55 }, { 0x00, 0x00, 0x00 }, { 0x00, 0x00, 0x00 }, { 0x00, 0x00, 0x00 },
		{ 0xA7, 0xB5, 0xBC }, { 0x00, 0x59, 0xFF }, { 0x2A, 0x44, 0xFF }, { 0x52, 0x3C, 0xF1 },
		{ 0x9F, 0x34, 0xBA }, { 0xB3, 0x28, 0x46 }, { 0xBB, 0x2D, 0x09 }, { 0x9E, 0x41, 0x00 },
		{ 0x86, 0x5A, 0x00 }, { 0x24, 0x6D, 0x02 }, { 0x00, 0x73, 0x12 }, { 0x00, 0x71, 0x56 },
		{ 0x00, 0x66, 0xA6 }, { 0x00, 0x00, 0x00 }, { 0x00, 0x00, 0x00 }, { 0x00, 0x00, 0x00 },
		{ 0xFF, 0xFF, 0xFF }, { 0x4B, 0x9F, 0xFF }, { 0x5A, 0x91, 0xFF }, { 0x86, 0x7E, 0xFF },
		{ 0xD9, 0x7D, 0xFF }, { 0xFF, 0x95, 0xCF }, { 0xFF, 0x8E, 0x76 }, { 0xF7, 0xA2, 0x47 },
		{ 0xEF, 0xB4, 0x12 }, { 0x8C, 0xC5, 0x1C }, { 0x48, 0xD0, 0x4A }, { 0x10, 0xD1, 0x97 },
		{ 0x00, 0xC9, 0xF0 }, { 0x43, 0x48, 0x4B }, { 0x00, 0x00, 0x00 }, { 0x00, 0x00, 0x00 },
		{ 0xFF, 0xFF, 0xFF }, { 0xB1, 0xD9, 0xFF }, { 0xB1, 0xCF, 0xFF }, { 0xBC, 0xC8, 0xFF },
		{ 0xE3, 0xC8, 0xFF }, { 0xFF, 0xD3, 0xF7 }, { 0xFF, 0xD5, 0xCB }, { 0xFF, 0xDE, 0xB9 },
		{ 0xFF, 0xE5, 0xAD }, { 0xDB, 0xF6, 0xAF }, { 0xB7, 0xFB, 0xC4 }, { 0x9C, 0xFB, 0xE6 },
		{ 0x96, 0xF7, 0xFF }, { 0xB1, 0xC0, 0xC7 }, { 0x00, 0x00, 0x00 }, { 0x00, 0x00, 0x00 }
	    }
	},
	{ 0 }
};

#endif /* _PALDEF_H */
