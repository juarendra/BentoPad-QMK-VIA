#include QMK_KEYBOARD_H

enum layer_names {
  _MEDIA,
  _BROWSER,
  _MACRO,
  _RGBLIGHTS
};

#define LAYOUT_via( \
    k00, k01, k02, k03, \
    k10, k11, k12, k13\
) \
{ \
    { k00, k01, k02, k03 }, \
    { k10, k11, k12, k13 } \
}


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
        |                  |                    |  Knob : Vol Up/Dn |
        |      Mail        |         Play       |    Press: Mute    |
        |      Prev        |         Next       |  Cycle Layers     |
     */
    [_MEDIA] = LAYOUT_via(
        KC_A, KC_B, KC_C, KC_D,
        KC_E, KC_F, KC_G, KC_H
    ),
    /*
        |                  |                     |  Knob : Desktops  |
        |       Back       |   Fwd               |    Press: Stop    |
        |     PrevTab      | NextTab             |   Cycle Layers    |
     */
    [_BROWSER] = LAYOUT_via(
        KC_A, KC_A, KC_A, KC_D,
        KC_A, KC_A, KC_A, KC_D
    ),
    /*
        |               |                        |  Knob : Windows    |
        | Slack Status  |    Zoom Toggle Mute    |     Enter          |
        |  WinScrnSht   |        Task View       |  Cycle Layers      |
     */
    [_MACRO] = LAYOUT_via(
        KC_A, KC_A, KC_A, KC_D,
        KC_A, KC_A, KC_A, KC_D
    ),
    /*
        |               |                        | Knob : Saturation Up/Dn |
        | RGB MOD Cycle |   Right Shift          |     Toggle RGB          |
        |    Hue Cycle  |   Increase Brightness  |  Cycle Layers           |
     */
    [_RGBLIGHTS] = LAYOUT_via(
        KC_A, KC_A, KC_A, KC_D,
        KC_A, KC_A, KC_A, KC_D
    ),

};
#ifdef ENCODER_MAP_ENABLE
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {
    [_MEDIA] = { ENCODER_CCW_CW(KC_MPRV, KC_MNXT)},
    [_MACRO]   = { ENCODER_CCW_CW(KC_TRNS, KC_TRNS)},
    [_MACRO]  = { ENCODER_CCW_CW(KC_TRNS, KC_TRNS)},
    [_RGBLIGHTS]  = { ENCODER_CCW_CW(KC_TRNS, KC_TRNS)},
};
#endif
