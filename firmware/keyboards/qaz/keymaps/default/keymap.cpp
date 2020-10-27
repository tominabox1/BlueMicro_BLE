/*
Copyright 2018 <Pierre Constantineau>

3-Clause BSD License

Redistribution and use in source and binary forms, with or without modification, are permitted provided that the following conditions are met:

1. Redistributions of source code must retain the above copyright notice, this list of conditions and the following disclaimer.

2. Redistributions in binary form must reproduce the above copyright notice, this list of conditions and the following disclaimer in the documentation and/or other materials provided with the distribution.

3. Neither the name of the copyright holder nor the names of its contributors may be used to endorse or promote products derived from this software without specific prior written permission.
THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
(INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

*/
#include "keymap.h"

std::array<std::array<Key, MATRIX_COLS>, MATRIX_ROWS> matrix =
    {KEYMAP(
    KC_Q,   KC_W,   KC_F,   KC_P,   KC_G,   KC_J,   KC_L,    KC_U,   KC_Y,     KC_QUOTE,
    GUI_A,   ALT_R,   CTL_S,   SFT_T,   KC_D,   KC_H,   SFT_N,    CTL_E,   ALT_I,     GUI_O,
    KC_Z,   KC_X,   KC_C,   KC_V,   KC_B,   KC_K,   KC_M,    KC_COMM,     KC_DOT,
    KC_LCTL, KC_LALT, KC_LGUI, FN2_BSPC, FN1_SPC, KC_ENT, KC_RGUI, KC_SLSH)};

void setupKeymap() {

    uint32_t layer0_tap[MATRIX_ROWS][MATRIX_COLS] =
KEYMAP(
    XXXXXXX,   XXXXXXX,   XXXXXXX,   XXXXXXX,   XXXXXXX,   XXXXXXX,     XXXXXXX,   XXXXXXX,   XXXXXXX,   XXXXXXX,
    GUI_A_TAP,   ALT_R_TAP,   CTL_S_TAP,   SFT_T_TAP,   XXXXXXX,       XXXXXXX,  SFT_N_TAP,   CTL_E_TAP,   ALT_I_TAP,   GUI_O_TAP,
    XXXXXXX,   XXXXXXX,   XXXXXXX,   XXXXXXX,   XXXXXXX,     XXXXXXX,  XXXXXXX,   XXXXXXX,   XXXXXXX,  
    XXXXXXX,   XXXXXXX,   XXXXXXX, FN2_BSPC_TAP,  FN1_SPC_TAP,   XXXXXXX,   XXXXXXX, XXXXXXX  );

    uint32_t layer0_hold[MATRIX_ROWS][MATRIX_COLS] =
KEYMAP(
    XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,        XXXXXXX,      XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,
    GUI_A_HOLD,    ALT_R_HOLD,    CTL_S_HOLD,    SFT_T_HOLD,    XXXXXXX,        XXXXXXX,      SFT_N_HOLD,    CTL_E_HOLD,    ALT_I_HOLD,    GUI_O_HOLD,
    XXXXXXX,   XXXXXXX,   XXXXXXX,   XXXXXXX,   XXXXXXX,       XXXXXXX,     XXXXXXX,   XXXXXXX,   XXXXXXX,  
    XXXXXXX, XXXXXXX, XXXXXXX, FN2_BSPC_HOLD,  FN1_SPC_HOLD, XXXXXXX, XXXXXXX, XXXXXXX  );

    uint32_t layer1[MATRIX_ROWS][MATRIX_COLS] =
KEYMAP(
    KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,
    KC_EXLM, KC_AT, KC_HASH, KC_DLR, KC_PERC, KC_CIRC, KC_AMPR, KC_ASTR, KC_EQUAL, KC_MINS,
    XXXXXXX,   XXXXXXX,   XXXXXXX,   XXXXXXX,   XXXXXXX,  XXXXXXX,     XXXXXXX,   XXXXXXX,   XXXXXXX,   
    XXXXXXX, XXXXXXX, XXXXXXX, KC_DEL,  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX  );


    uint32_t layer2[MATRIX_ROWS][MATRIX_COLS] =
KEYMAP(
    RGB_TOG,RGB_MOD,RGB_VAI,XXXXXXX,XXXXXXX,XXXXXXX, KC_PGDN, KC_UP, KC_PGUP, XXXXXXX,
    KC_F11,  KC_F12,  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_LEFT, KC_DOWN, KC_RIGHT, KC_GRV,
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
    DFU, EEP_RST, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, RESET, CLEAR_BONDS  );

    /*
     * add the other layers
     */
    for (int row = 0; row < MATRIX_ROWS; ++row)
    {
        for (int col = 0; col < MATRIX_COLS; ++col)
        {
            matrix[row][col].addActivation(_BASE, Method::MT_TAP, layer0_tap[row][col]);
            matrix[row][col].addActivation(_BASE, Method::MT_HOLD, layer0_hold[row][col]);
            matrix[row][col].addActivation(_NUM_SYM, Method::PRESS, layer1[row][col]);
            matrix[row][col].addActivation(_NAV, Method::PRESS, layer2[row][col]);

        }
    }
}
