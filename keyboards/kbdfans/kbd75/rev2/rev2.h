// Copyright 2018-2021 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#include "quantum.h"

#define ___ KC_NO

/*
 *              ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┐
 *              │00 │01 │02 │03 │04 │05 │06 │07 │08 │09 │0A │0B │0C │0D │0E │0F │
 *              ├───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┤      ┌───────┐
 *              │10 │11 │12 │13 │14 │15 │16 │17 │18 │19 │1A │1B │1C │1D │1E │1F │      │1E     │ 2u Backspace
 *              ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┼───┤      └─┬─────┤
 *              │20   │22 │23 │24 │25 │26 │27 │28 │29 │2A │2B │2C │2D │2E   │2F │        │     │
 *  2.25u       ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴─────┼───┤     ┌──┴┐3D  │ ISO Enter
 *  LShift      │30    │32 │33 │34 │35 │36 │37 │38 │39 │3A │3B │3C │3D      │3F │     │2E │    │
 * ┌────────┐   ├────┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴────┬───┼───┤   ┌─┴───┴────┤
 * │40      │   │40  │41 │42 │43 │44 │45 │46 │47 │48 │49 │4A │4B │4D    │4E │4F │   │4D        │ 2.75u RShift
 * └────────┘   ├────┼───┴┬──┴─┬─┴───┴──┬┴───┼───┴───┴──┬┴──┬┴──┬┴──┬───┼───┼───┤   └──────────┘
 *              │50  │51  │53  │54      │56  │58        │5A │5B │5C │5D │5E │5F │
 *              └────┴────┴────┴────────┴────┴──────────┴───┴───┴───┴───┴───┴───┘
 *              ┌────┬────┬────┬────────────────────────┬───┬───┬───┐
 *              │50  │51  │53  │56                      │5A │5B │5C │ Standard Spacebar
 *              └────┴────┴────┴────────────────────────┴───┴───┴───┘
 *              ┌────┬────┬────┬────────────────────────┬─────┬─────┐
 *              │50  │51  │53  │56                      │5A   │5C   │ Right-Side Winkeyless
 *              └────┴────┴────┴────────────────────────┴─────┴─────┘
 *              ┌─────┬─────┬───────────────────────────┬─────┬─────┐
 *              │50   │51   │56                         │5A   │5C   │ Winkeyless
 *              └─────┴─────┴───────────────────────────┴─────┴─────┘
 */

// LAYOUT for all possible switch positions on a KBD75 rev 2
#define LAYOUT( \
    K00, K01, K02, K03, K04, K05, K06, K07, K08, K09, K0A, K0B, K0C, K0D, K0E, K0F, \
    K10, K11, K12, K13, K14, K15, K16, K17, K18, K19, K1A, K1B, K1C, K1D, K1E, K1F, \
    K20,      K22, K23, K24, K25, K26, K27, K28, K29, K2A, K2B, K2C, K2D, K2E, K2F, \
    K30,      K32, K33, K34, K35, K36, K37, K38, K39, K3A, K3B, K3C, K3D,      K3F, \
    K40, K41, K42, K43, K44, K45, K46, K47, K48, K49, K4A, K4B,      K4D, K4E, K4F, \
    K50, K51,      K53, K54,      K56,      K58,      K5A, K5B, K5C, K5D, K5E, K5F  \
) { \
    { K00, K01, K02, K03, K04, K05, K06, K07, K08, K09, K0A, K0B, K0C, K0D, K0E, K0F }, \
    { K10, K11, K12, K13, K14, K15, K16, K17, K18, K19, K1A, K1B, K1C, K1D, K1E, K1F }, \
    { K20, ___, K22, K23, K24, K25, K26, K27, K28, K29, K2A, K2B, K2C, K2D, K2E, K2F }, \
    { K30, ___, K32, K33, K34, K35, K36, K37, K38, K39, K3A, K3B, K3C, K3D, ___, K3F }, \
    { K40, K41, K42, K43, K44, K45, K46, K47, K48, K49, K4A, K4B, ___, K4D, K4E, K4F }, \
    { K50, K51, ___, K53, K54, ___, K56, ___, K58, ___, K5A, K5B, K5C, K5D, K5E, K5F }  \
}


/* Standard bottom row
 * ┌────┬────┬────┬────────────────────────┬───┬───┬───┬───┬───┬───┐
 * │1.25│1.25│1.25│6.25U                   │1U │1U │1U │1U │1U │1U │
 * └────┴────┴────┴────────────────────────┴───┴───┴───┴───┴───┴───┘
 */

#define LAYOUT_75_ansi( \
    K00, K01, K02, K03, K04, K05, K06, K07, K08, K09, K0A, K0B, K0C, K0D, K0E, K0F, \
    K10, K11, K12, K13, K14, K15, K16, K17, K18, K19, K1A, K1B, K1C,      K1E, K1F, \
    K20,      K22, K23, K24, K25, K26, K27, K28, K29, K2A, K2B, K2C, K2D, K2E, K2F, \
    K30,      K32, K33, K34, K35, K36, K37, K38, K39, K3A, K3B, K3C, K3D,      K3F, \
    K40,      K42, K43, K44, K45, K46, K47, K48, K49, K4A, K4B,      K4D, K4E, K4F, \
    K50, K51,      K53,           K56,                K5A, K5B, K5C, K5D, K5E, K5F  \
) { \
    { K00, K01, K02, K03, K04, K05, K06, K07, K08, K09, K0A, K0B, K0C, K0D, K0E, K0F }, \
    { K10, K11, K12, K13, K14, K15, K16, K17, K18, K19, K1A, K1B, K1C, ___, K1E, K1F }, \
    { K20, ___, K22, K23, K24, K25, K26, K27, K28, K29, K2A, K2B, K2C, K2D, K2E, K2F }, \
    { K30, ___, K32, K33, K34, K35, K36, K37, K38, K39, K3A, K3B, K3C, K3D, ___, K3F }, \
    { K40, ___, K42, K43, K44, K45, K46, K47, K48, K49, K4A, K4B, ___, K4D, K4E, K4F }, \
    { K50, K51, ___, K53, ___, ___, K56, ___, ___, ___, K5A, K5B, K5C, K5D, K5E, K5F }  \
}

#define LAYOUT_75_iso( \
    K00, K01, K02, K03, K04, K05, K06, K07, K08, K09, K0A, K0B, K0C, K0D, K0E, K0F, \
    K10, K11, K12, K13, K14, K15, K16, K17, K18, K19, K1A, K1B, K1C,      K1E, K1F, \
    K20,      K22, K23, K24, K25, K26, K27, K28, K29, K2A, K2B, K2C, K2D,      K2F, \
    K30,      K32, K33, K34, K35, K36, K37, K38, K39, K3A, K3B, K3C, K2E, K3D, K3F, \
    K40, K41, K42, K43, K44, K45, K46, K47, K48, K49, K4A, K4B,      K4D, K4E, K4F, \
    K50, K51,      K53,           K56,                K5A, K5B, K5C, K5D, K5E, K5F  \
) { \
    { K00, K01, K02, K03, K04, K05, K06, K07, K08, K09, K0A, K0B, K0C, K0D, K0E, K0F }, \
    { K10, K11, K12, K13, K14, K15, K16, K17, K18, K19, K1A, K1B, K1C, ___, K1E, K1F }, \
    { K20, ___, K22, K23, K24, K25, K26, K27, K28, K29, K2A, K2B, K2C, K2D, K2E, K2F }, \
    { K30, ___, K32, K33, K34, K35, K36, K37, K38, K39, K3A, K3B, K3C, K3D, ___, K3F }, \
    { K40, K41, K42, K43, K44, K45, K46, K47, K48, K49, K4A, K4B, ___, K4D, K4E, K4F }, \
    { K50, K51, ___, K53, ___, ___, K56, ___, ___, ___, K5A, K5B, K5C, K5D, K5E, K5F }  \
}

/* Full Winkeyless (WKL)
 * ┌─────┬─────┬───────────────────────────┬─────┬─────┬───┬───┬───┐
 * │1.5  │1.5  │7U                         │1.5U │1.5U │1U │1U │1U │
 * └─────┴─────┴───────────────────────────┴─────┴─────┴───┴───┴───┘
 */

#define LAYOUT_75_ansi_wkl( \
    K00, K01, K02, K03, K04, K05, K06, K07, K08, K09, K0A, K0B, K0C, K0D, K0E, K0F, \
    K10, K11, K12, K13, K14, K15, K16, K17, K18, K19, K1A, K1B, K1C,      K1E, K1F, \
    K20,      K22, K23, K24, K25, K26, K27, K28, K29, K2A, K2B, K2C, K2D, K2E, K2F, \
    K30,      K32, K33, K34, K35, K36, K37, K38, K39, K3A, K3B, K3C, K3D,      K3F, \
    K40,      K42, K43, K44, K45, K46, K47, K48, K49, K4A, K4B,      K4D, K4E, K4F, \
    K50, K51,                     K56,                K5A,      K5C, K5D, K5E, K5F  \
) { \
    { K00, K01, K02, K03, K04, K05, K06, K07, K08, K09, K0A, K0B, K0C, K0D, K0E, K0F }, \
    { K10, K11, K12, K13, K14, K15, K16, K17, K18, K19, K1A, K1B, K1C, ___, K1E, K1F }, \
    { K20, ___, K22, K23, K24, K25, K26, K27, K28, K29, K2A, K2B, K2C, K2D, K2E, K2F }, \
    { K30, ___, K32, K33, K34, K35, K36, K37, K38, K39, K3A, K3B, K3C, K3D, ___, K3F }, \
    { K40, ___, K42, K43, K44, K45, K46, K47, K48, K49, K4A, K4B, ___, K4D, K4E, K4F }, \
    { K50, K51, ___, ___, ___, ___, K56, ___, ___, ___, K5A, ___, K5C, K5D, K5E, K5F }  \
}

#define LAYOUT_75_iso_wkl( \
    K00, K01, K02, K03, K04, K05, K06, K07, K08, K09, K0A, K0B, K0C, K0D, K0E, K0F, \
    K10, K11, K12, K13, K14, K15, K16, K17, K18, K19, K1A, K1B, K1C,      K1E, K1F, \
    K20,      K22, K23, K24, K25, K26, K27, K28, K29, K2A, K2B, K2C, K2D, K3D, K2F, \
    K30,      K32, K33, K34, K35, K36, K37, K38, K39, K3A, K3B, K3C, K2E,      K3F, \
    K40, K41, K42, K43, K44, K45, K46, K47, K48, K49, K4A, K4B,      K4D, K4E, K4F, \
    K50, K51,                     K56,                K5A,      K5C, K5D, K5E, K5F  \
) { \
    { K00, K01, K02, K03, K04, K05, K06, K07, K08, K09, K0A, K0B, K0C, K0D, K0E, K0F }, \
    { K10, K11, K12, K13, K14, K15, K16, K17, K18, K19, K1A, K1B, K1C, ___, K1E, K1F }, \
    { K20, ___, K22, K23, K24, K25, K26, K27, K28, K29, K2A, K2B, K2C, K2D, K2E, K2F }, \
    { K30, ___, K32, K33, K34, K35, K36, K37, K38, K39, K3A, K3B, K3C, K3D, ___, K3F }, \
    { K40, K41, K42, K43, K44, K45, K46, K47, K48, K49, K4A, K4B, ___, K4D, K4E, K4F }, \
    { K50, K51, ___, ___, ___, ___, K56, ___, ___, ___, K5A, ___, K5C, K5D, K5E, K5F }  \
}

/* Right-Side Winkeyless (RWKL)
 * ┌────┬────┬────┬────────────────────────┬─────┬─────┬───┬───┬───┐
 * │1.25│1.25│1.25│6.25U                   │1.5U │1.5U │1U │1U │1U │
 * └────┴────┴────┴────────────────────────┴─────┴─────┴───┴───┴───┘
 */

#define LAYOUT_75_ansi_rwkl( \
    K00, K01, K02, K03, K04, K05, K06, K07, K08, K09, K0A, K0B, K0C, K0D, K0E, K0F, \
    K10, K11, K12, K13, K14, K15, K16, K17, K18, K19, K1A, K1B, K1C,      K1E, K1F, \
    K20,      K22, K23, K24, K25, K26, K27, K28, K29, K2A, K2B, K2C, K2D, K2E, K2F, \
    K30,      K32, K33, K34, K35, K36, K37, K38, K39, K3A, K3B, K3C, K3D,      K3F, \
    K40,      K42, K43, K44, K45, K46, K47, K48, K49, K4A, K4B,      K4D, K4E, K4F, \
    K50, K51,      K53,           K56,                K5A,      K5C, K5D, K5E, K5F  \
) { \
    { K00, K01, K02, K03, K04, K05, K06, K07, K08, K09, K0A, K0B, K0C, K0D, K0E, K0F }, \
    { K10, K11, K12, K13, K14, K15, K16, K17, K18, K19, K1A, K1B, K1C, ___, K1E, K1F }, \
    { K20, ___, K22, K23, K24, K25, K26, K27, K28, K29, K2A, K2B, K2C, K2D, K2E, K2F }, \
    { K30, ___, K32, K33, K34, K35, K36, K37, K38, K39, K3A, K3B, K3C, K3D, ___, K3F }, \
    { K40, ___, K42, K43, K44, K45, K46, K47, K48, K49, K4A, K4B, ___, K4D, K4E, K4F }, \
    { K50, K51, ___, K53, ___, ___, K56, ___, ___, ___, K5A, ___, K5C, K5D, K5E, K5F }  \
}

#define LAYOUT_75_iso_rwkl( \
    K00, K01, K02, K03, K04, K05, K06, K07, K08, K09, K0A, K0B, K0C, K0D, K0E, K0F, \
    K10, K11, K12, K13, K14, K15, K16, K17, K18, K19, K1A, K1B, K1C,      K1E, K1F, \
    K20,      K22, K23, K24, K25, K26, K27, K28, K29, K2A, K2B, K2C, K2D, K3D, K2F, \
    K30,      K32, K33, K34, K35, K36, K37, K38, K39, K3A, K3B, K3C, K2E,      K3F, \
    K40, K41, K42, K43, K44, K45, K46, K47, K48, K49, K4A, K4B,      K4D, K4E, K4F, \
    K50, K51,      K53,           K56,                K5A,      K5C, K5D, K5E, K5F  \
) { \
    { K00, K01, K02, K03, K04, K05, K06, K07, K08, K09, K0A, K0B, K0C, K0D, K0E, K0F }, \
    { K10, K11, K12, K13, K14, K15, K16, K17, K18, K19, K1A, K1B, K1C, ___, K1E, K1F }, \
    { K20, ___, K22, K23, K24, K25, K26, K27, K28, K29, K2A, K2B, K2C, K2D, K2E, K2F }, \
    { K30, ___, K32, K33, K34, K35, K36, K37, K38, K39, K3A, K3B, K3C, K3D, ___, K3F }, \
    { K40, K41, K42, K43, K44, K45, K46, K47, K48, K49, K4A, K4B, ___, K4D, K4E, K4F }, \
    { K50, K51, ___, K53, ___, ___, K56, ___, ___, ___, K5A, ___, K5C, K5D, K5E, K5F }  \
}


/* The KBD75 rev1 and rev2 PCBs have the same matrix, but only the rev2
 * supports the numpad layout. I own a rev1, so I don't know what the numpad
 * layout's matrix is entirely.
 *
 *                                                                - @noroadsleft
 *
 *              ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┐
 *              │00 │01 │02 │03 │04 │05 │06 │07 │08 │09 │0A │0B │0C │0D │0E │0F │
 *              ├───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┤    ┌───────┐
 *              │10 │11 │12 │13 │14 │15 │16 │17 │18 │19 │1A │1B │1C │1D │1E │1F │    │??     │ 2u Backspace
 *              ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┼───┼───┼───┤    └─┬─────┤
 *              │20   │22 │23 │24 │25 │26 │27 │28 │29 │2A │2B │2C   │2D │2E │2F │      │     │
 *  2.25u       ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴─────┼───┼───┼───┤   ┌──┴┐??  │ ISO Enter
 *  LShift      │30    │32 │33 │34 │35 │36 │37 │38 │39 │3A │3B      │3C │3D │3F │   │?? │    │
 * ┌────────┐   ├────┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴────┬───┼───┼───┼───┤   └───┴────┘
 * │40      │   │40  │41 │42 │43 │44 │45 │46 │47 │48 │49 │4A    │4B │4D │4E │4F │
 * └────────┘   ├────┼───┴┬──┴─┬─┴──┬┴───┴───┼───┴──┬┴──┬┴──┬───┼───┼───┼───┼───┤
 *              │50  │51  │53  │54  │56      │58    │59 │5A │5B │5C │5D │5E │5F │
 *              └────┴────┴────┴────┴────────┴──────┴───┴───┴───┴───┴───┴───┴───┘
 */

// LAYOUT for all possible switch positions on a KBD75 rev 2
#define LAYOUT_numpad( \
    K00, K01, K02, K03, K04, K05, K06, K07, K08, K09, K0A, K0B, K0C, K0D, K0E, K0F, \
    K10, K11, K12, K13, K14, K15, K16, K17, K18, K19, K1A, K1B, K1C, K1D, K1E, K1F, \
    K20,      K22, K23, K24, K25, K26, K27, K28, K29, K2A, K2B, K2C, K2D, K2E, K2F, \
    K30,      K32, K33, K34, K35, K36, K37, K38, K39, K3A, K3B, K3C, K3D,      K3F, \
    K40, K41, K42, K43, K44, K45, K46, K47, K48, K49, K4A, K4B,      K4D, K4E, K4F, \
    K50, K51,      K53, K54,      K56,      K58, K59, K5A, K5B, K5C, K5D, K5E, K5F  \
) { \
    { K00, K01, K02, K03, K04, K05, K06, K07, K08, K09, K0A, K0B, K0C, K0D, K0E, K0F }, \
    { K10, K11, K12, K13, K14, K15, K16, K17, K18, K19, K1A, K1B, K1C, K1D, K1E, K1F }, \
    { K20, ___, K22, K23, K24, K25, K26, K27, K28, K29, K2A, K2B, K2C, K2D, K2E, K2F }, \
    { K30, ___, K32, K33, K34, K35, K36, K37, K38, K39, K3A, K3B, K3C, K3D, ___, K3F }, \
    { K40, K41, K42, K43, K44, K45, K46, K47, K48, K49, K4A, K4B, ___, K4D, K4E, K4F }, \
    { K50, K51, ___, K53, K54, ___, K56, ___, K58, K59, K5A, K5B, K5C, K5D, K5E, K5F }  \
}
