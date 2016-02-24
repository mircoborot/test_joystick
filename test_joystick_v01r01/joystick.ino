/* ---------------------------------------------------------
Package     :  wsn v.1
Module      :  joystick
Copyright   :  (c) 2016 by Antonio Curci 

Copyright 2014-2016 by Antonio Curci. All rights reserved.
Redistribution and use in source and binary forms,
with or without modification, are not permitted.
-------------------------------------------------------- */

// ******************** WARNINGS

// ******************** LIBRARIES
 
// ******************** DEFINES

// ******************** CONSTANTS
// PIN
const byte 
  PIN_X=A0,
  PIN_Y=A1,
  PIN_S=8;    // use PULLUP resistor (inverted logic)

// ******************** VARIABLES
boolean jen;    // enabled

// ******************** FUNCTIONS
void joysetup() {pinMode(PIN_S,INPUT_PULLUP);joyen(true);}
void joyen(bool f) {jen=f;}  
bool joyena()  {return jen;}  
byte joyinx() {return analogRead(PIN_X)/10.23;}
byte joyiny() {return analogRead(PIN_Y)/10.23;}
bool joyins() {return !digitalRead(PIN_S);}

