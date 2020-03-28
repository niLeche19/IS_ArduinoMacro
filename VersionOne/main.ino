
//#include "Keyboard.h"
#include "keys.h"

int zdown = 0;
int xdown = 0;
int debounce = 10;
int klen = sizeof(KEYS)/4;

void setup() {
  for(int i = klen - 1; i >= 0; i --){
    pinMode(KEYS[i][0], INPUT_PULLUP);
  }
  pinMode(5, OUTPUT);
  Keyboard.begin();
  Serial.begin(9600);
}
// This check if the key pressed is a consumer code; returns true or false accordingly
/*
bool isCons(int key){
  for(int l = (sizeof(CONS) / 4) - 1; l >= 0; l --){
    if(key == CONS[l]){
      return(true);
    }
  }
  return(false);
}
// 
*/
void keyAction(int k, bool pr){
  for(int i = 0; i < 10; i ++){
    int kc = ASSMENTS[k][i];
    if(pr == 1){
      Keyboard.press(kc);
    }else{
      Keyboard.release(kc);
    }
  }
}

void loop() {  
  for(int i = klen - 1; i >= 0; i --){
    if(digitalRead(KEYS[i][0]) == LOW and KEYS[i][1] == 0){
      KEYS[i][1] = 1;
      keyAction(i, true);
      delay(debounce);
    }else if(digitalRead(KEYS[i][0]) == HIGH and KEYS[i][1] == 1){
      KEYS[i][1] = 0;
      keyAction(i, false);
    }
  }
}
