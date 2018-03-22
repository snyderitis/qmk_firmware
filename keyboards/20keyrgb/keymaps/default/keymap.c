/* Copyright 2017 REPLACE_WITH_YOUR_NAME
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#include "20keyrgb.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
//[0] = KEYMAP( /* Base */
  /*KC_NLCK, KC_F1,    KC_F2,  KC_F3,
  KC_PSLS, KC_PAST, KC_PMNS, KC_PPLS,
  KC_PGUP, KC_3,    KC_2,      KC_1,
  KC_PGDN, KC_6,    KC_5,     KC_4,
  KC_PENT, KC_9,    KC_8,     KC_7
),
};*/
  [0] = KEYMAP( /* Base */
    KC_A, KC_B,    KC_C,  KC_D,
    KC_E, KC_F, KC_G, KC_H,
    KC_I, KC_J,    KC_K,      KC_L,
    KC_M, KC_N,    KC_O,     KC_P,
    KC_Q, KC_R,    KC_S,     KC_T
),
};
const uint16_t PROGMEM fn_actions[] = {

};

const macro_t *action_get_macro(keyrecord_t *record, uint8_t id, uint8_t opt)
{
  // MACRODOWN only works in this function
      switch(id) {
        case 0:
          if (record->event.pressed) {
            register_code(KC_RSFT);
          } else {
            unregister_code(KC_RSFT);
          }
        break;
      }
    return MACRO_NONE;
};


void matrix_init_user(void) {

}

void matrix_scan_user(void) {

}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  return true;
}

void led_set_user(uint8_t usb_led) {

}
