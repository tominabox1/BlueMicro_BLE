/*
Copyright 2018 <Pierre Constantineau>

3-Clause BSD License

Redistribution and use in source and binary forms, with or without modification, are permitted provided that the following conditions are met:

1. Redistributions of source code must retain the above copyright notice, this list of conditions and the following disclaimer.

2. Redistributions in binary form must reproduce the above copyright notice, this list of conditions and the following disclaimer in the documentation and/or other materials provided with the distribution.

3. Neither the name of the copyright holder nor the names of its contributors may be used to endorse or promote products derived from this software without specific prior written permission.

THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR 
A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT 
LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT 
(INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

*/
#ifndef KEYMAP_H
#define KEYMAP_H
#include <stdint.h>
#include "hid_keycodes.h"
#include "keyboard_config.h"
#include "advanced_keycodes.h"
#include "Key.h"
#include "KeyScanner.h"
#include <array>

#define KC_CAP_D MOD(MOD_LSHIFT, KC_D)

#define _BASE 0
#define _NUM_SYM  1
#define _NAV  2


#define FN1_SPC      XXXXXXX
#define FN1_SPC_TAP  KC_SPC
#define FN1_SPC_HOLD (LAYER_1)

#define FN2_BSPC       XXXXXXX
#define FN2_BSPC_TAP   KC_BSPC
#define FN2_BSPC_HOLD  (LAYER_2)

#define CTL_S         XXXXXXX
#define CTL_S_TAP     KC_S
#define CTL_S_HOLD    (KC_LCTRL)

#define ALT_R         XXXXXXX
#define ALT_R_TAP     KC_R
#define ALT_R_HOLD    (KC_LALT)

#define ALT_I         XXXXXXX
#define ALT_I_TAP     KC_I
#define ALT_I_HOLD   ( KC_RALT)

#define CTL_E        XXXXXXX
#define CTL_E_TAP    KC_E
#define CTL_E_HOLD   (KC_RCTRL)

#define SFT_T       XXXXXXX
#define SFT_T_TAP   KC_T
#define SFT_T_HOLD  (KC_RSHIFT)

#define SFT_N       XXXXXXX
#define SFT_N_TAP   KC_N
#define SFT_N_HOLD  (KC_RSHIFT)

#define GUI_A       XXXXXXX
#define GUI_A_TAP   KC_A
#define GUI_A_HOLD  (KC_LGUI)

#define GUI_O       XXXXXXX
#define GUI_O_TAP   KC_O
#define GUI_O_HOLD  (KC_RGUI)


void setupKeymap();
extern std::array<std::array<Key, MATRIX_COLS>, MATRIX_ROWS> matrix;

void process_user_macros(uint16_t macroid);
extern void addStringToQueue(const char* str);
extern void addKeycodeToQueue(const uint16_t keycode);
#endif /* KEYMAP_H */


