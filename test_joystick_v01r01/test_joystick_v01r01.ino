/* ---------------------------------------------------------
Package     :  wsn v.1
Module      :  main
Copyright   :  (c) 2016 by Antonio Curci 

Copyright 2014-2016 by Antonio Curci. All rights reserved.
Redistribution and use in source and binary forms,
with or without modification, are not permitted.


-------------------------------------------------------- */
// ******************** DEFINES
#define sersetup()  Serial.begin(9600)
#define pr(x)  Serial.print(x)
#define prln(x)  Serial.println(x)
#define prf(x)  Serial.print(F(x))
#define prfln(x)  Serial.println(F(x))

// ******************** WARNINGS
// ******************** CONSTANTS
// ******************** VARIABLES
// ******************** FUNCTIONS

// ******************** ARDUINO
void setup() {
  sersetup();
  joysetup();
  prf("\r\ntest joystick v.01.01 (C) Copyright 2016 by Antonio Curci\r\n");
}

void loop() {
  prf("  x=");pr(joyinx());
  prf("  y=");pr(joyiny());
  prf("  s=");pr(joyins());
  prln();
  delay(20);
}
