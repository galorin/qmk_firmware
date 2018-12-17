#include QMK_KEYBOARD_H

// visual map https://imgur.com/a/TDmPNWF

// see https://github.com/qmk/qmk_firmware/blob/master/docs/keycodes.md for documentation

// Base layer http://www.keyboard-layout-editor.com/#/gists/c89fbca827e4596fd24789c64995c506

// see https://github.com/qmk/qmk_firmware/blob/master/docs/feature_rgblight.md

// reference https://github.com/qmk/qmk_firmware/tree/master/keyboards/levinson for how to do split keyboard with LED

extern keymap_config_t keymap_config;

// Each layer gets a name for readability, which is then used in the keymap matrix below.
// The underscores don't mean anything - you can have a layer called STUFF or any other name.
// Layer names don't all need to be of the same length, obviously, and you can also skip them
// entirely and just use numbers.
#define _QWERTY 0
#define _FUNC   1 
//#define _LED    2

// Fillers to make layering more clear
#define _______ KC_TRNS
#define XXXXXXX KC_NO
#define MEH_GRV MEH_T(KC_GRV) 

// uses https://docs.qmk.fm/#/feature_bootmagic

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
[_QWERTY] = LAYOUT_5x6(
  // left hand
   KC_GRV,  KC_1,    KC_2,     KC_3,     KC_4,       KC_5,      KC_6,    KC_7,   KC_8,     KC_9,    KC_0,    KC_MINS,
   KC_TAB,  KC_Q,    KC_W,     KC_E,     KC_R,       KC_T,      KC_Y,    KC_U,   KC_I,     KC_O,    KC_P,    KC_EQL,
   KC_LALT, KC_A,    KC_S,     KC_D,     KC_F,       KC_G,      KC_H,    KC_J,   KC_K,     KC_L,    KC_SCLN, KC_QUOT, 
   KC_NUBS, KC_Z,    KC_X,     KC_C,     KC_V,       KC_B,      KC_N,    KC_M,   KC_COMM,  KC_DOT,  KC_SLSH, KC_NUHS,
                     KC_LGUI,  RESET /*was RGB_TOG*/,                            KC_LBRC,  KC_RBRC,
// thumb cluster
// TEMP while discovering wiring from sequence
                                          KC_SPC,    KC_DEL,    KC_BSPC, KC_ENT,
								          TO(_FUNC), KC_LSFT,   KC_RCTL, KC_RSFT,
                                          KC_LCTL,   KC_ESC,    XXXXXXX, KC_RALT),
//                                        KC_SPC,  KC_DEL,       
//                                        KC_LSFT, TO(_FUNC),    
//                                        KC_LCTL, KC_ESC,       
   
[_FUNC] = LAYOUT_5x6(
  // left hand
   XXXXXXX, KC_F1,   KC_F2,    KC_F3,    KC_F4,    KC_F5,        KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,
   XXXXXXX, KC_PSCR, KC_HOME,  KC_UP,    KC_END,   KC_PGUP,      XXXXXXX, KC_VOLD, KC_MUTE, KC_VOLU, XXXXXXX, KC_F12,
   _______, XXXXXXX, KC_LEFT,  KC_DOWN,  KC_RIGHT, KC_PGDN,      XXXXXXX, KC_MPRV, KC_MPLY, KC_MNXT, XXXXXXX, XXXXXXX,
   RESET,   XXXXXXX, XXXXXXX,  XXXXXXX,  _______,  _______,      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
                      _______,  _______,                                           XXXXXXX, XXXXXXX,
                                           // thumb cluster
                                           _______, _______,      _______, _______,
                                           _______, TO(_QWERTY),  _______, _______,
                                           _______, _______,      _______, _______),
};