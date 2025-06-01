// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
        KC_F1,     KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_T,   KC_DEL, KC_F2,  KC_Y,   KC_U,   KC_I,       KC_O,   KC_P,       KC_BSPC,
        KC_LSFT,    KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_TAB,    KC_TAB,   KC_H,    KC_J,    KC_K,    KC_L,   KC_LBRC,   KC_RBRC,
        KC_LCTL,    KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,      KC_M,     KC_COMM, KC_DOT,  KC_PSLS, KC_NUBS,
        KC_LGUI,    MO(1),   KC_SPC,  KC_SPC,  KC_ENT,  KC_ENT,  MO(2),     KC_RALT
    ),

    [1] = LAYOUT(
        KC_ESC,     KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_DEL,    KC_F2,    KC_Y,    KC_U,    KC_I,    KC_O,   KC_P,      KC_BSPC,
        KC_LSFT,    KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_TAB,    KC_TAB,   KC_H,    KC_J,    KC_K,    KC_L,   KC_LBRC,   KC_RBRC,
        KC_LCTL,    KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,      KC_M,     KC_COMM, KC_DOT,  KC_PSLS, KC_NUBS,
        KC_LGUI,    MO(1),   KC_SPC,  KC_SPC,  KC_ENT,  KC_ENT,  MO(2),     KC_RALT
    ),

    [2] = LAYOUT(
        KC_ESC,     KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_DEL,    KC_F2,    KC_Y,    KC_U,    KC_I,    KC_O,   KC_P,      KC_BSPC,
        KC_LSFT,    KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_TAB,    KC_TAB,   KC_H,    KC_J,    KC_K,    KC_L,   KC_LBRC,   KC_RBRC,
        KC_LCTL,    KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,      KC_M,     KC_COMM, KC_DOT,  KC_PSLS, KC_NUBS,
        KC_LGUI,    MO(1),   KC_SPC,  KC_SPC,  KC_ENT,  KC_ENT,  MO(2),     KC_RALT
    ),

    [3] = LAYOUT(
        KC_ESC,     KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_DEL,    KC_F2,    KC_Y,    KC_U,    KC_I,    KC_O,   KC_P,      KC_BSPC,
        KC_LSFT,    KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_TAB,    KC_TAB,   KC_H,    KC_J,    KC_K,    KC_L,   KC_LBRC,   KC_RBRC,
        KC_LCTL,    KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,      KC_M,     KC_COMM, KC_DOT,  KC_PSLS, KC_NUBS,
        KC_LGUI,    MO(1),   KC_SPC,  KC_SPC,  KC_ENT,  KC_ENT,  MO(2),     KC_RALT
    )

};
