#include "HID-Project.h"
#include "keys.h"

int debounce = 10;
int klen = sizeof(KEYS)/4;

void setup() {
  for(int i = klen - 1; i >= 0; i --){
    pinMode(KEYS[i][0], INPUT_PULLUP);
  }
  pinMode(5, OUTPUT);
  Keyboard.begin();
  Consumer.begin();
  Serial.begin(9600);
}

//================================================================================
// This check if the key pressed is a consumer code; returns true or false accordingly
bool isCons(int key){
  for(int l = (sizeof(CONS) / 2) - 1; l >= 0; l --){
    if(key == CONS[l]){
      return(true);
    }
  }
  return(false);
}

//================================================================================
// This either presses or releases the key 'k' depending on the value of 'pr'
void keyAction(int k, bool pr){
  for(int i = 0; i < 10; i ++){
    int kc = ASSMENTS[k][i];
    if(pr == 1 and kc != 0){
      if(isCons(kc)){
        Consumer.press(kc);
      }else{
        Keyboard.press(KeyboardKeycode(kc));
      }
    }else{
      if(isCons(kc)){
        Consumer.release(kc);
      }else{
        Keyboard.release(KeyboardKeycode(kc));
      }
    }
  }
}

void loop() {
  for(int i = klen - 1; i >= 0; i --){
    if(digitalRead(KEYS[i][0]) == LOW and KEYS[i][1] == 0){
      //Serial.println((sizeof(CONS) / 4) - 1);
      KEYS[i][1] = 1;
      keyAction(i, true);
      delay(debounce);
    }else if(digitalRead(KEYS[i][0]) == HIGH and KEYS[i][1] == 1){
      KEYS[i][1] = 0;
      keyAction(i, false);
    }
  }
}
