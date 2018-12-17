#ifndef KEYPAD25_H
#define KEYPAD25_H

#include "quantum.h"

#define LAYOUT( \
    K00, K01, K02, K03, K04, \
    K10, K11, K12, K13, K14, \
    K20, K21, K22, K23, K24, \
    K30, K31, K32, K33, K34, \
    K40, K41, K42, K43, K44 \
    ) { \
  { K40, K30, K20, K10, K00 },  \
  { K41, K31, K21, K11, K01 },  \
  { K42, K32, K22, K12, K02 },  \
  { K43, K33, K23, K13, K03 },  \
  { K44, K34, K24, K14, K04 }   \
}

#define LAYOUT_STD( \
    K00, K01, K02, K03, K04, \
    K10, K11, K12, K13, K14, \
    K20, K21, K22, K23, K24, \
    K30, K31, K32, K33, K34, \
    K40, K41, K42, K43, K44 \
    ) { \
  { K00, K01, K02, K03, K04 } \
  { K10, K11, K12, K13, K14 } \
  { K20, K21, K22, K23, K24 } \
  { K30, K31, K32, K33, K34 ) \
  { K40, K41, K42, K43, K44 }  \
}

#endif

//#define _KEYS 25
//#define _LAYERS 2

#define _BASE 0
#define _APP  1

//class hsv_color
//{
//  public:
//  
//  set_hsv_color( uint8_t h, uint8_t s, uint8_t v) {
//	  hue = h;
//	  sat = s;
//	  val = v;
//  };
//   uint8_t hue;
//   uint8_t sat;
//   uint8_t val;
//};
//
//uint8_t ledmap[_KEYS] = {
//5,4,3,2,1,
//6,7,8,9,10,
//15,14,13,12,11,
//16,17,18,19,20,
//25,24,23,22,21
//};

//hsv_color[_LAYERS][_KEYS];

//void rgblight_effect_localized_fade(uint8_t interval);
//void rgblight_effect_localised(uint8_t leds[]);
