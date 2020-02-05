/*
  Auto.cpp - Library for ....
  Created by h.bendali, ... 4, 2020.
  Released into the public domain.
*/
#include "Arduino.h"
#include "ard_plc_a10.h"
#include <Wire.h> // for I2C components

void ARD_PLC_A10::init()
{
  Wire.begin();
  Serial.begin(9600);
}
void ARD_PLC_A10::setup(int pin, int mode)
{
  pinMode(pin, mode);
}

void ARD_PLC_A10::extRead(int i)
{
  Wire.requestFrom(extAdr[i], 1, true);
  extReg[i] = Wire.read();             // receive a byte as character
}

void ARD_PLC_A10::extWrite(int i, int value)
{
  Wire.beginTransmission(extAdr[i]);   // transmit to device Adr
  Wire.write(value);                   // sends value byte  
  Wire.endTransmission();              // stop transmitting
}

void ARD_PLC_A10::extRef()
{
  _extI++;
  if (_extI >= (sizeof(extAdr) / sizeof(extAdr[0])))
  {
    _extI=0;
  }
  extRead(_extI);
}

