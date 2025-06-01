// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
        KC_ESC,     KC_Q,   KC_W,   KC_E,    KC_R,              KC_T,           KC_DEL,         LALT(KC_ENT),   KC_Y,   KC_U,               KC_I,       KC_O,       KC_P,       KC_BSPC,
        KC_LSFT,    KC_A,   KC_S,   KC_D,    KC_F,              KC_G,           LALT(KC_TAB),   KC_INT4,        KC_H,   KC_J,               KC_K,       KC_L,       KC_SCLN,    KC_QUOT,
        KC_LCTL,    KC_Z,   KC_X,   KC_C,    KC_V,              KC_B,                                           KC_N,   KC_M,               KC_COMM,    KC_DOT,     KC_SLSH,    KC_INT1,
                                    KC_LGUI, LT(MO(2),KC_LNG2), LCTL_T(KC_SPC), KC_F2,          KC_F4,          KC_ENT, LT(MO(1),KC_LNG1),  KC_RALT
    ),

    [1] = LAYOUT(
        _______,    S(KC_1),  S(KC_2),  S(KC_3),  S(KC_4),  S(KC_5),  _______,  _______,   S(KC_6),  S(KC_7),  S(KC_8),  S(KC_9),  S(KC_0),  KC_DEL,
        _______,    XXXXXXX,  KC_F2,    KC_F3,    KC_F4,    KC_F5,    _______,  _______,   XXXXXXX,  KC_UP,    XXXXXXX,  KC_LBRC,  KC_RBRC,  KC_BSLS,
        _______,    XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,                       KC_LEFT,  KC_DOWN,  KC_RGHT,  XXXXXXX,  KC_EQL,   KC_MINS,
                                        _______,  _______,  _______,  _______,  _______,   _______,  _______,  _______
    ),

    [2] = LAYOUT(
        _______,    S(KC_1),  S(KC_2),  S(KC_3),  S(KC_4),  S(KC_5),  _______,  _______,   KC_7,    KC_8,   KC_9,  XXXXXXX,  XXXXXXX,  XXXXXXX,
        KC_TAB,     XXXXXXX,  KC_F2,    KC_F3,    KC_F4,    KC_F5,    _______,  _______,   KC_4,    KC_5,   KC_6,  XXXXXXX,  XXXXXXX,  XXXXXXX,
        _______,    XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,                       KC_1,    KC_2,   KC_3,  XXXXXXX,  XXXXXXX,   XXXXXXX,
                                        _______,  _______,  _______,  _______,  _______,   _______, KC_0,   KC_DOT
    ),

    [3] = LAYOUT(
        XXXXXXX,    XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,   XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,
        XXXXXXX,    XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,   XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,
        XXXXXXX,    XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,                       XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,
                                        XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,   XXXXXXX,  XXXXXXX,  XXXXXXX
    )

};
