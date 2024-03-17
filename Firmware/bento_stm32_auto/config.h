
//#define NO_ACTION_ONESHOT


/* key matrix size */
#define MATRIX_ROWS 2
#define MATRIX_COLS 4

/* Keyboard Matrix Assignments */
#define DIRECT_PINS { \
    { B6, B7, B8, B9}, \
    { B5, B4, B3, A7} \
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

#define FORCE_NKRO

