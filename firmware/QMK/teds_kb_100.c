/*
Copyright 2026 DovydasTEDS

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.*/

#include "quantum.h"

#ifdef RGB_MATRIX_ENABLE
led_config_t g_led_config = { {
  // Key Matrix to LED Index

        // {0   , 1     , 2     , 3     , 4     , 5     , 6     , 7     , 8     , 9     , 10    , 11    , 12    ,                 13    , 14    , 15    ,       NO_LED},
        // {36  , 35    , 34    , 33    , 32    , 31    , 30    , 29    , 28    , 27    , 26    , 25    , 24    , 23    ,         22    , 21    , 20    ,       19    , 18    , 17    , 16    },
        // {37  , 38    , 39    , 40    , 41    , 42    , 43    , 44    , 45    , 46    , 47    , 48    , 49    , 50    ,         51    , 52    , 53    ,       54    , 55    , 56    , 57    },
        // {73  , 72    , 71    , 70    , 69    , 68    , 67    , 66    , 65    , 64    , 63    , 62    , 61    ,                                               60    , 59    , 58            },
        // {74  , 75    , 76    , 77    , 78    , 79    , 80    , 81    , 82    , 83    , 84    , 85    , 86    ,                         87    ,               88    , 89    , 90    , 91    },
        // {104 , 103   , 102 ,                    101  ,                                 100   , 99    , 98    , 97    ,         96    , 95    , 94    ,       93    , 92},

        { 0, 1, 3, NO_LED, 6, 8, 9, 11, 13, NO_LED, NO_LED },
        { NO_LED, 2, 4, 5, 7, NO_LED, 10, NO_LED, 14, NO_LED, NO_LED },
        { 36, 34, 32, 30, 28, 26, 24, 23, 21, 19, 17 },
        { 35, 33, 31, 29, 27, 25, NO_LED, 22, 20, 18, 16 },
        { 37, 39, 41, 43, 45, 47, 49, 50, 52, 54, 56 },
        { 38, 40, 42, 44, 46, 48, NO_LED, 51, 53, 55, 57 },
        { 73, 71, 69, 67, 65, 63, 61, 12, NO_LED, 60, 58 },
        { 72, 70, 68, 66, 64, 62, NO_LED, NO_LED, 15, 59, NO_LED },
        { 74, 76, 78, 80, 82, 84, NO_LED, 86, 87, 88, 90 },
        { 75, 77, 79, 81, 83, 85, NO_LED, NO_LED, NO_LED, 89, 91 },
        { 104, 102, NO_LED, 101, NO_LED, NO_LED, 99, 97, 95, NO_LED, 92 },
        { 103, NO_LED, NO_LED, NO_LED, NO_LED, 100, 98, 96, 94, 93, NO_LED }
}, {
  // LED Index to Physical Position
  { 0, 0 }, { 21, 0 }, { 31, 0 }, { 42, 0 }, { 52, 0 }, { 68, 0 }, { 78, 0 }, { 89, 0 }, { 99, 0 }, { 115, 0 }, { 125, 0 }, { 135, 0 }, { 146, 0 }, { 159, 0 }, { 169, 0 }, { 180, 0 }, { 224, 17 }, { 214, 17 }, { 203, 17 }, { 193, 17 }, { 180, 17 }, { 169, 17 }, { 159, 17 }, { 141, 17 }, { 125, 17 }, { 115, 17 }, { 104, 17 }, { 94, 17 }, { 83, 17 }, { 73, 17 }, { 63, 17 }, { 52, 17 }, { 42, 17 }, { 31, 17 }, { 21, 17 }, { 10, 17 }, { 0, 17 }, { 3, 29 }, { 16, 29 }, { 26, 29 }, { 36, 29 }, { 47, 29 }, { 57, 29 }, { 68, 29 }, { 78, 29 }, { 89, 29 }, { 99, 29 }, { 109, 29 }, { 120, 29 }, { 130, 29 }, { 145, 35 }, { 159, 29 }, { 169, 29 }, { 180, 29 }, { 193, 29 }, { 203, 29 }, { 214, 29 }, { 224, 35 }, { 214, 41 }, { 203, 41 }, { 193, 41 }, { 133, 41 }, { 122, 41 }, { 112, 41 }, { 102, 41 }, { 91, 41 }, { 81, 41 }, { 70, 41 }, { 60, 41 }, { 49, 41 }, { 39, 41 }, { 29, 41 }, { 18, 41 }, { 4, 41 }, { 1, 52 }, { 13, 52 }, { 23, 52 }, { 34, 52 }, { 44, 52 }, { 55, 52 }, { 65, 52 }, { 76, 52 }, { 86, 52 }, { 96, 52 }, { 107, 52 }, { 117, 52 }, { 137, 52 }, { 137, 52 }, { 193, 52 }, { 203, 52 }, { 214, 52 }, { 224, 58 }, { 214, 64 }, { 198, 64 }, { 180, 64 }, { 169, 64 }, { 159, 64 }, { 145, 64 }, { 132, 64 }, { 119, 64 }, { 105, 64 }, { 66, 64 }, { 27, 64 }, { 14, 64 }, { 1, 64 } 
}, {
  // LED Index to Flag
  4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 1, 4,
  4, 4, 4, 1, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 
  4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
  4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 1, 4, 4,
  4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
  4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 
} };
#endif

#ifdef RGB_MATRIX_INDICATOR_ENABLE
bool rgb_matrix_indicators_kb(void) {
    if (!rgb_matrix_indicators_user()) {
        return false;
    }

    // Get current LED state
    led_t led_state = host_keyboard_led_state();

    // Yellow color (HSV: 43, 255, 255) - roughly H=60°
    // For RGB mode, use RGB(255, 255, 0)
    // uint8_t hue = 43;    // Yellow hue
    // uint8_t sat = 255;   // Full saturation
    // uint8_t val = 255;   // Full brightness

    // Caps Lock indicator
    if (led_state.caps_lock) {
        rgb_matrix_set_color(CAPSLOCK_INDICATOR_LED_INDEX, HSV_WHITE);
    }

    // Num Lock indicator
    if (led_state.num_lock) {
        rgb_matrix_set_color(NUMLOCK_INDICATOR_LED_INDEX, HSV_WHITE);
    }

    // Scroll Lock indicator
    if (led_state.scroll_lock) {
        rgb_matrix_set_color(SCROLLLOCK_INDICATOR_LED_INDEX, HSV_WHITE);
    }

    return true;
}
#endif

