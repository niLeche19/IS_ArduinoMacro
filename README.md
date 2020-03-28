# IS_ArduinoMacro
Current issue:
-The library being used to press consumer keys (aka media keys) is broken. Most ASCII keys work as intended, F keys do not work even though they are listed as Keyboard keycodes (F3 for instance prints equals). 

-Some media keys work and others are nonfunctional (PLAY_PAUSE works but NEXT does not).

-Modifiers do not work (KEY_LEFT_SHIFT is nonfunctional)


https://github.com/NicoHood/HID \n
This is the lib being used. 

https://github.com/NicoHood/HID/blob/master/examples/Keyboard/ImprovedKeyboard/ImprovedKeyboard.ino
Here is an .ino(arduino sketch extension) example of a functional project. 
