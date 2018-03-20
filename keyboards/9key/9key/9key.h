#ifndef NINEKEY_H
#define NINEKEY_H

#include "quantum.h"

#define KEYMAP( \
      k00, k01, k02, k03,\
      k04, k05, k06, k07, \
      k08, k09, k10, k11,  \
      k12, k13, k14, k15,\
      k16, k17, k18, k19 ) { \
    { k00, k01, k02, k03 }, \
    { k04, k05, k06, k07 }, \
    { k08, k09, k10, k11 }, \
    { k12, k13, k14, k15 }, \
    { k16, k17, k18, k19 } \
} 

#define KC_KEYMAP(k00, k01, k02, k03, k04, k05, k06, k07, k08, k09, k10, k11, k12, k13, k14, k15, k16, k17, k18, k19) \
  KEYMAP(KC_##k00, KC_##k01, KC_##k02, KC_##k03, KC_##k04, KC_##k05, KC_##k06\
    KC_##k07, KC_##k08, KC_##k09, KC_##k10, KC_##k11, KC_##k12\
    KC_##k13, KC_##k14, KC_##k15, KC_##k16, KC_##k17, KC_##k18, KC_##k19)

#endif
