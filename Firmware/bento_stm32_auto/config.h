
//#define NO_ACTION_ONESHOT


/* key matrix size */
#define MATRIX_ROWS 2
#define MATRIX_COLS 4

/* Keyboard Matrix Assignments */
#define DIRECT_PINS { \
    { B9, B8, B7, B3}, \
    { B6, B5, B4, A7} \
}
/* Debounce reduces chatter (unintended double-presses) - set 0 if debouncing is not needed */
#define DEBOUNCE 5

#define ENCODERS_PAD_A {B1}
#define ENCODERS_PAD_B {B0}
//#define ENCODER_DIRECTION_FLIP
#define ENCODER_RESOLUTIONS {4}



/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
//#define LOCKING_SUPPORT_ENABLE
/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE
#define WS2812_DI_PIN B10
#ifdef WS2812_DI_PIN
  #define RGBLED_NUM 1


#endif
#define FORCE_NKRO

