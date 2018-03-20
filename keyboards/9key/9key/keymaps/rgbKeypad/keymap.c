#include "9key.h"
#define _MAIN 0
#define _FN 1
// Tap Dance Declarations
enum {
  ENT_5 = 0,
  ZERO_7
};

// Macro Declarations
enum {
  DBL_0 = 0
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

/* LAYER 0
 * ,-----------------------.
 * |   1   |   2   |   3   |
 * |-------+-------+-------|
 * |   4   | 5/ENT |   6   | Dbl Tap 5 for Enter
 * |-------+-------+-------|
 * |  7/0  |   8   | 9/FN  | 7/0 = Dbl Tap 7 for 0  -  9/FN = Hold 9 for FN
 * `-----------------------'
 */
[_MAIN] = KEYMAP(
  KC_NLCK,    KC_MPLY,     KC_MNXT, LT(4, KC_PSLS),  \
  KC_1,       KC_2,        KC_3,    LT(3, KC_PAST),  \
  KC_4,       KC_5,        KC_6,    LT(2, KC_PMNS),  \
  KC_7,       KC_8,        KC_9,    LT(1, KC_PPLS),  \
  KC_0,       KC_PDOT,     KC_PENT, RESET  \
)//,

/* LAYER 1
 * ,-----------------------.
 * |  ESC  |   +   |   -   |
 * |-------+-------+-------|
 * |  BSPC |   *   |   /   |
 * |-------+-------+-------|
 * |  00   |   .   |       |
 * `-----------------------'
 */
  /*
[1] = KC_KEYMAP( \
  KC_ESC,   KC_PLUS, KC_MINS, \
  KC_BSPC,  KC_ASTR, KC_SLSH, \
  M(DBL_0), KC_DOT,  KC_TRNS  \
)*/

};

qk_tap_dance_action_t tap_dance_actions[] = {
  [ENT_5] = ACTION_TAP_DANCE_DOUBLE(KC_5, KC_ENT),
  [ZERO_7] = ACTION_TAP_DANCE_DOUBLE(KC_7, KC_0)
};

const macro_t *action_get_macro(keyrecord_t *record, uint8_t id, uint8_t opt) {
  if (record->event.pressed) {
      switch(id) {
          case DBL_0:
              SEND_STRING("00");
              return false;
      }
  }
  return MACRO_NONE;
};

void matrix_init_user(void) {
}
