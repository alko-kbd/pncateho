// Copyright 2024 Mayoroffk
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    // Base
    [0] = LAYOUT(KC_B, KC_F, KC_T, KC_J,
                 KC_H, KC_C, KC_N, KC_Y,
                                   LT(5, KC_BSPC), LSFT_T(KC_SPC)),
    // Num
    [1] = LAYOUT(KC_1, KC_2, KC_3, KC_4,
                 KC_5, KC_6, KC_7, KC_8,
                                   LT(5, KC_BSPC), LSFT_T(KC_EQUAL)),
    //
    [2] = LAYOUT(XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, 
                 XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, 
                                            XXXXXXX, XXXXXXX),
    //
    [3] = LAYOUT(XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, 
                 XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, 
                                            XXXXXXX, XXXXXXX),
    // Nav
    [4]  = LAYOUT(KC_LEFT, KC_UP,  KC_DOWN, KC_RIGHT,
                  KC_LGUI, KC_LALT, KC_LCTL, KC_ESC,
                                            LT(5, KC_BSPC), LSFT_T(KC_SPC)),

    [5] = LAYOUT(TO(1), XXXXXXX, XXXXXXX, TO(4), 
                 XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, 
                                            XXXXXXX, TO(0)),
};
