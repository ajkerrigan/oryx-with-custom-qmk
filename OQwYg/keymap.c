#include QMK_KEYBOARD_H
#include "version.h"
#define MOON_LED_LEVEL LED_LEVEL
#ifndef ZSA_SAFE_RANGE
#define ZSA_SAFE_RANGE SAFE_RANGE
#endif

enum custom_keycodes {
  RGB_SLD = ZSA_SAFE_RANGE,
  HSV_0_255_255,
  HSV_74_255_255,
  HSV_169_255_255,
  ST_MACRO_0,
  ST_MACRO_1,
};




const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_voyager(
    KC_EQUAL,       KC_1,           KC_2,           KC_3,           KC_4,           KC_5,                                           KC_6,           KC_7,           KC_8,           KC_9,           KC_0,           KC_MINUS,
    KC_BSPC,        KC_Q,           KC_W,           KC_E,           KC_R,           KC_T,                                           KC_Y,           KC_U,           KC_I,           KC_O,           KC_P,           KC_BSLS,
    LT(3, KC_TAB),  KC_A,           KC_S,           KC_D,           KC_F,           KC_G,                                           KC_H,           KC_J,           KC_K,           KC_L,           KC_SCLN,        KC_QUOTE,
    MT(MOD_LSFT, KC_GRAVE),MT(MOD_LCTL, KC_Z),MT(MOD_LSFT, KC_X),MT(MOD_LALT, KC_C),MT(MOD_LGUI, KC_V),KC_B,                                           KC_N,           MT(MOD_RGUI, KC_M),MT(MOD_RALT, KC_COMMA),MT(MOD_RSFT, KC_DOT),MT(MOD_RCTL, KC_SLASH),MT(MOD_RSFT, KC_EQUAL),
                                                    KC_SPACE,       KC_BSPC,                                        KC_TAB,         KC_ENTER
  ),
  [1] = LAYOUT_voyager(
    KC_ESCAPE,      KC_F1,          KC_F2,          KC_F3,          KC_F4,          KC_F5,                                          KC_F6,          KC_F7,          KC_F8,          KC_F9,          KC_F10,         KC_F11,
    KC_DELETE,      KC_TRANSPARENT, KC_TRANSPARENT, KC_LCBR,        KC_RCBR,        KC_PERC,                                        KC_SLASH,       KC_7,           KC_8,           KC_9,           KC_ASTR,        KC_F12,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_S,           KC_LPRN,        KC_RPRN,        KC_GRAVE,                                       KC_MINUS,       KC_4,           KC_5,           KC_6,           KC_PLUS,        KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_LBRC,        KC_RBRC,        KC_TILD,                                        KC_EQUAL,       KC_1,           KC_2,           KC_3,           KC_DOT,         KC_TRANSPARENT,
                                                    KC_SPACE,       KC_DELETE,                                      KC_ENTER,       KC_0
  ),
  [2] = LAYOUT_voyager(
    RGB_TOG,        TOGGLE_LAYER_COLOR,RGB_MODE_FORWARD,RGB_SLD,        KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, QK_DYNAMIC_TAPPING_TERM_DOWN,QK_DYNAMIC_TAPPING_TERM_UP,QK_DYNAMIC_TAPPING_TERM_PRINT,KC_TRANSPARENT, QK_BOOT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_BRIGHTNESS_DOWN,KC_BRIGHTNESS_UP,KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_PSCR,                                        KC_TRANSPARENT, KC_AUDIO_VOL_DOWN,KC_AUDIO_VOL_UP,KC_AUDIO_MUTE,  KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, HSV_0_255_255,  HSV_74_255_255, HSV_169_255_255,                                KC_TRANSPARENT, RGB_VAD,        RGB_VAI,        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                    KC_TRANSPARENT, KC_BSPC,                                        KC_TAB,         KC_ENTER
  ),
  [3] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, LCTL(KC_MINUS), LCTL(KC_0),     LCTL(KC_EQUAL),
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_END,         KC_HOME,        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_LEFT_CTRL,   KC_LEFT_SHIFT,  KC_LEFT_ALT,    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_LEFT,        KC_DOWN,        KC_UP,          KC_RIGHT,       KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_PGDN,        KC_PAGE_UP,     ST_MACRO_0,     ST_MACRO_1,     KC_TRANSPARENT,
                                                    KC_SPACE,       KC_BSPC,                                        KC_TAB,         KC_ENTER
  ),
  [4] = LAYOUT_voyager(
    KC_MS_ACCEL0,   KC_MS_ACCEL1,   KC_MS_ACCEL2,   KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_MS_UP,       KC_MS_BTN3,     KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_MS_LEFT,     KC_MS_DOWN,     KC_MS_RIGHT,    KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_MS_BTN1,     KC_MS_BTN2,     KC_TRANSPARENT, KC_SCLN,        KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_MS_WH_DOWN,  KC_MS_WH_UP,    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                    KC_TRANSPARENT, KC_BSPC,                                        KC_TAB,         KC_TRANSPARENT
  ),
};

const char chordal_hold_layout[MATRIX_ROWS][MATRIX_COLS] PROGMEM = LAYOUT(
  'L', 'L', 'L', 'L', 'L', 'L', 'R', 'R', 'R', 'R', 'R', 'R',
  'L', 'L', 'L', 'L', 'L', 'L', 'R', 'R', 'R', 'R', 'R', 'R',
  'L', 'L', 'L', 'L', 'L', 'L', 'R', 'R', 'R', 'R', 'R', 'R',
  'L', 'L', 'L', 'L', 'L', 'L', 'R', 'R', 'R', 'R', 'R', 'R',
  'L', 'L', 'R', 'R'
);

const uint16_t PROGMEM combo0[] = { KC_F, KC_BSPC, COMBO_END};
const uint16_t PROGMEM combo1[] = { KC_J, KC_TAB, COMBO_END};
const uint16_t PROGMEM combo2[] = { KC_D, KC_BSPC, COMBO_END};
const uint16_t PROGMEM combo3[] = { KC_K, KC_TAB, COMBO_END};
const uint16_t PROGMEM combo4[] = { KC_S, KC_BSPC, COMBO_END};
const uint16_t PROGMEM combo5[] = { KC_L, KC_TAB, COMBO_END};
const uint16_t PROGMEM combo6[] = { KC_A, KC_BSPC, COMBO_END};
const uint16_t PROGMEM combo7[] = { KC_SCLN, KC_TAB, COMBO_END};
const uint16_t PROGMEM combo8[] = { KC_G, KC_BSPC, COMBO_END};
const uint16_t PROGMEM combo9[] = { KC_H, KC_TAB, COMBO_END};
const uint16_t PROGMEM combo10[] = { MT(MOD_LSFT, KC_X), MT(MOD_RSFT, KC_DOT), COMBO_END};

combo_t key_combos[COMBO_COUNT] = {
    COMBO(combo0, MO(1)),
    COMBO(combo1, MO(1)),
    COMBO(combo2, MO(2)),
    COMBO(combo3, MO(2)),
    COMBO(combo4, MO(3)),
    COMBO(combo5, MO(3)),
    COMBO(combo6, MO(4)),
    COMBO(combo7, MO(4)),
    COMBO(combo8, KC_ESCAPE),
    COMBO(combo9, KC_ESCAPE),
    COMBO(combo10, KC_CAPS),
};

uint16_t get_tapping_term(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case LT(3, KC_TAB):
            return g_tapping_term -100;
        case MT(MOD_LSFT, KC_GRAVE):
            return g_tapping_term -100;
        case MT(MOD_LCTL, KC_Z):
            return g_tapping_term -100;
        case MT(MOD_LSFT, KC_X):
            return g_tapping_term -100;
        case MT(MOD_RSFT, KC_DOT):
            return g_tapping_term -100;
        case MT(MOD_RCTL, KC_SLASH):
            return g_tapping_term -100;
        case MT(MOD_RSFT, KC_EQUAL):
            return g_tapping_term -100;
        default:
            return g_tapping_term;
    }
}







bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case ST_MACRO_0:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_A))SS_DELAY(100)  SS_TAP(X_LBRC));
    }
    break;
    case ST_MACRO_1:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_A))SS_DELAY(100)  SS_TAP(X_RBRC));
    }
    break;

    case RGB_SLD:
      if (record->event.pressed) {
        rgblight_mode(1);
      }
      return false;
    case HSV_0_255_255:
      if (record->event.pressed) {
        rgblight_mode(1);
        rgblight_sethsv(0,255,255);
      }
      return false;
    case HSV_74_255_255:
      if (record->event.pressed) {
        rgblight_mode(1);
        rgblight_sethsv(74,255,255);
      }
      return false;
    case HSV_169_255_255:
      if (record->event.pressed) {
        rgblight_mode(1);
        rgblight_sethsv(169,255,255);
      }
      return false;
  }
  return true;
}
