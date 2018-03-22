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
#include "led.h"
//#include <print.h>
int huey;
int stepper;
bool backwards;
void matrix_init_kb(void) {
	// put your keyboard start-up code here
	// runs once when the firmware starts up
  huey = 0;
  stepper = 0;
  backwards = false;
	matrix_init_user();
}

void matrix_scan_kb(void) {
	// put your looping keyboard code here
	// runs every cycle (a lot)
  //print("Working");
  
	matrix_scan_user();
  rgblight_sethsv(huey, 255, 100);
  if (stepper >= 3)
  {
    stepper = 0;
 
    //if (!backwards)
      huey++;
    //else
      //huey--;

  }
  
  stepper++;
  if (huey > 360)
  {
    huey = 0;
    //backwards = true;
  }
  if (huey < 1)
  {
    //backwards = false;
  }
}

bool process_record_kb(uint16_t keycode, keyrecord_t *record) {
	// put your per-action keyboard code here
	// runs for every action, just before processing by the firmware

	return process_record_user(keycode, record);
}

void led_set_kb(uint8_t usb_led) {
	// put your keyboard LED indicator (ex: Caps Lock LED) toggling code here

	led_set_user(usb_led);
}
