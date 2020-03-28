#include "HID-Project.h"
//#include "Keyboard.h"
//================================================================================
//================================================================================
// Key assignments are stored here:
int ASSMENTS[][10] =
{
  //KEY_1 on top
  {KEY_F4}, //1
  {'q'}, //2
  {'w'}, //3
  {}, //4
  {}, //5
  {'a'}, //6
  {'s'}, //7
  {'d'}, //8
  {}, //9
  {'z'}, //10
  {'x'}, //11
  {' '} //12
  //KEY_12 on bottom
};

//================================================================================
//================================================================================
// Pin assignments for each key are stored here
#define KEY_1 2
#define KEY_2 3
#define KEY_3 4
#define KEY_4 5
#define KEY_5 6
#define KEY_6 7
#define KEY_7 8
#define KEY_8 9
#define KEY_9 10
#define KEY_10 11
#define KEY_11 12
#define KEY_12 13

// Array holding all of the pins; if they are on/off.
int KEYS[][2] = {{KEY_1, 0}, {KEY_2, 0}, {KEY_3, 0}, {KEY_4, 0},{KEY_5, 0}, {KEY_6, 0}, {KEY_7, 0}, {KEY_8, 0},{KEY_9, 0}, {KEY_10, 0}, {KEY_11, 0}, {KEY_12, 0}};
/*
// Consumer key codes.
int CONS[] = {0xB3, 0xB4, 0xB5, 0xB6, 0xB7, 0xCD, 0xE2, 0xE9, 0xEA, 0x18A, 0x192, 0x194, 0x224, 0x225, 0x227, 0xed};
*/
