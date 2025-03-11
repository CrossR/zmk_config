// Common and base level macros.

// Convenient macros to make keymaps easier to read.
#define XXXXX &none
#define XXXXXX &none
#define ______ &trans

// Layer names
#define BASE 0
#define RAISE 1
#define LOWER 2
#define GAME 3
#define GAME_ALT 4
#define MAC 5
#define MAC_RAISE 6
#define MAC_LOWER 7

// Bluetooth Profile Management
#define BTCLR     &bt  BT_CLR
#define PC_BT     &bt  BT_SEL 0
#define MAC_BT    &bt  BT_SEL 1
#define PHONE_BT  &bt  BT_SEL 2
#define TAB_BT    &bt  BT_SEL 3
#define BT5       &bt  BT_SEL 4

#define TOG_OUT   &out OUT_TOG
#define TOG_BLE   &out OUT_BLE
#define TOG_USB   &out OUT_USB

// Shift on Hold / Parenthesis on Tap
#define SPCCDT_L &mt LSFT LPAR
#define SPCCDT_R &mt RSFT RPAR

// Layer on Hold / Key on Tap
#define DEL_L1  &lt RAISE DEL
#define A_L1    &lt RAISE A

#define RET_L2  &lt LOWER RET
#define SCLN_L2 &lt LOWER SCLN

#define RET_L4  &lt GAME_ALT RET

#define DEL_L6  &lt MAC_RAISE DEL
#define A_L6    &lt MAC_RAISE A

#define RET_L7  &lt MAC_LOWER RET
#define SCLN_L7 &lt MAC_LOWER SCLN

// Short numpad keys
#define KP_1 &kp KP_N1
#define KP_2 &kp KP_N2
#define KP_3 &kp KP_N3
#define KP_4 &kp KP_N4
#define KP_5 &kp KP_N5
#define KP_6 &kp KP_N6
#define KP_7 &kp KP_N7
#define KP_8 &kp KP_N8
#define KP_9 &kp KP_N9
#define KP_0 &kp KP_N0

// Media Keys
#define PREVI &kp C_PREV
#define PLAY  &kp C_PLAY
#define NEXT  &kp C_NEXT

// Game keys
// Random-ish unused buttons for binding
#define GAME_1 LS(LC(LA(N1)))
#define GAME_2 LS(LC(LA(N2)))
#define GAME_3 LS(LC(LA(N3)))

// ZMK Studio
#define UNLCK &studio_unlock