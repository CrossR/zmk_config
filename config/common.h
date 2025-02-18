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

