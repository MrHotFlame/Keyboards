#include QMK_KEYBOARD_H

enum combo_events {
    COMBO_DEL,
    COMBO_ESC,
    COMBO_BSPC,
    COMBO_ENT,
    COMBO_COUNT
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    // Layer 0: Default
    [0] = LAYOUT(
        KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P,
        KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN,
        LSFT_T(KC_Z), KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, RSFT_T(KC_SLSH),
        KC_LCTL, KC_LGUI, KC_NO, LT(1, KC_SPC), LT(2, KC_NO), LT(2, KC_NO), LT(2, KC_NO), KC_NO, KC_ENT, LT(3, KC_RALT)
    ),

    // Layer 1: Numbers / Symbols
    [1] = LAYOUT(
        KC_TAB, _______, _______, _______, _______, KC_MINS, KC_EQL, KC_LBRC, KC_RBRC, KC_QUOT,
        KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0,
        KC_TILD, _______, _______, _______, _______, _______, KC_GRV, _______, _______, KC_BSLS,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______
    ),

    // Layer 2: Shifted Symbols / Extras
    [2] = LAYOUT(
        KC_EXLM, KC_AT, KC_HASH, KC_DLR, KC_PERC, KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______
    ),

    // Layer 3: Function / Navigation
    [3] = LAYOUT(
        _______, KC_UP, _______, _______, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6,
        KC_LEFT, KC_DOWN, KC_RGHT, _______, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______
    )
};

#ifdef COMBO_ENABLE
const uint16_t PROGMEM combo_del[]  = {KC_Y, KC_H, COMBO_END};
const uint16_t PROGMEM combo_esc[]  = {KC_Q, KC_A, COMBO_END};
const uint16_t PROGMEM combo_bspc[] = {KC_P, KC_SCLN, COMBO_END};
const uint16_t PROGMEM combo_ent[]  = {KC_RSFT, KC_SCLN, COMBO_END};

combo_t key_combos[] = {
    [COMBO_DEL]  = COMBO(combo_del,  KC_DEL),
    [COMBO_ESC]  = COMBO(combo_esc,  KC_ESC),
    [COMBO_BSPC] = COMBO(combo_bspc, KC_BSPC),
    [COMBO_ENT]  = COMBO(combo_ent,  KC_ENT),
};
#endif
