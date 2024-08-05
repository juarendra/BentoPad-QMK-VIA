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
        TO(1),KC_B, KC_C, KC_X,
        KC_E, KC_F, KC_G, KC_X
    ),
    /*
        |                  |                     |  Knob : Desktops  |
        |       Back       |   Fwd               |    Press: Stop    |
        |     PrevTab      | NextTab             |   Cycle Layers    |
     */
    [_BROWSER] = LAYOUT_via(
        TO(2), KC_A, KC_A, KC_X,
        KC_A, KC_A, KC_A, KC_X
    ),
    /*
        |               |                        |  Knob : Windows    |
        | Slack Status  |    Zoom Toggle Mute    |     Enter          |
        |  WinScrnSht   |        Task View       |  Cycle Layers      |
     */
    [_MACRO] = LAYOUT_via(
        TO(3), KC_A, KC_A, KC_X,
        KC_A, KC_A, KC_A, KC_X
    ),
    /*
        |               |                        | Knob : Saturation Up/Dn |
        | RGB MOD Cycle |   Right Shift          |     Toggle RGB          |
        |    Hue Cycle  |   Increase Brightness  |  Cycle Layers           |
     */
    [_RGBLIGHTS] = LAYOUT_via(
        TO(0), KC_A, KC_A, KC_X,
        KC_A, KC_A, KC_A, KC_X
    ),

};
#ifdef ENCODER_MAP_ENABLE
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {
    [_MEDIA] = { ENCODER_CCW_CW(KC_MPRV, KC_MNXT)},
    [_BROWSER]   = { ENCODER_CCW_CW(KC_TRNS, KC_TRNS)},
    [_MACRO]  = { ENCODER_CCW_CW(KC_TRNS, KC_TRNS)},
    [_RGBLIGHTS]  = { ENCODER_CCW_CW(KC_TRNS, KC_TRNS)},
};
#endif

void keyboard_post_init_user(void) {
    rgblight_sethsv_noeeprom(180,255,175);
}

layer_state_t layer_state_set_user(layer_state_t state) {
    switch (get_highest_layer(state)) {
        case _MEDIA:
            rgblight_sethsv_noeeprom(180,255,175);
            break;
        case _BROWSER:
            rgblight_sethsv_noeeprom(215,255,175);
            break;
        case _MACRO:
            rgblight_sethsv_noeeprom(255,255,175);
            break;
        case _RGBLIGHTS:
	    rgblight_sethsv_noeeprom(35,255,175);
            break;
        default: // for any other layers, or4242 the default layer
            rgblight_sethsv_noeeprom(180,255,175);
            break;
    }
  return state;
}