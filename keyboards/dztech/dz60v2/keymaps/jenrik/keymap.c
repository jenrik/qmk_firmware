#include QMK_KEYBOARD_H

//void keyboard_post_init_user(void) {
//  // Customise these values to desired behaviour
//  debug_enable=true;
//  debug_matrix=true;
//  //debug_keyboard=true;
//  //debug_mouse=true;
//}

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    LAYOUT(
        KC_GRV,    KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_PSCR, KC_SCRL,
        KC_TAB,       KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSLS,
        LCTL_T(KC_ESC), KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,          KC_ENT,
        KC_LSFT, XXXXXXX, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT, DB_TOGG,
        KC_LCTL, KC_LGUI, KC_LALT,                   KC_SPC,  MO(1),   KC_BSPC,          KC_RALT, KC_RGUI, XXXXXXX, MO(2),   KC_RCTL
    ),

    LAYOUT(
        _______, KC_F1  , KC_F2  , KC_F3  , KC_F4  , KC_F5  , KC_F6  , KC_F7  , KC_F8  , KC_F9  , KC_F10  , KC_F11 , KC_F12, _______, KC_DEL,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______ , _______, _______, QK_BOOT,
        KC_ESC , _______, _______, _______, _______, _______, _______, KC_LEFT, KC_DOWN , KC_UP , KC_RIGHT, _______,          _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______ , _______, _______, QK_BOOTLOADER,
        _______, _______, _______,                   _______, _______, KC_DEL ,          _______, _______ , _______, _______, _______
    ),

    LAYOUT(
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, ________, _______, _______, _______, _______,
        _______, RGB_TOG, RGB_MOD, RGB_HUI, RGB_HUD, RGB_SAI, RGB_SAD, RGB_VAI, RGB_VAD, _______, _______ , _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, KC_LEFT, KC_DOWN , KC_UP , KC_RIGHT, _______,          _______,
        _______, _______, _______, _______, BL_DOWN, BL_TOGG, BL_UP,   BL_STEP, _______, _______, _______ , _______, _______, _______,
        _______, _______, _______,                   _______, _______, _______,          _______, _______ , _______, _______, _______
    )
};

