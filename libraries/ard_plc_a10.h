/*
  ard_plc_a10.h - Library for .....
  Created by h.bendali, ... 4, 2020.
  Released into the public domain.
*/
#ifndef ARD_PLC_A10_h
#define ARD_PLC_A10_h

#include "Arduino.h"

class ARD_PLC_A10
{
  public:
    int  extAdr[];
    int  extReg[];
    int  extRead(int i);
    void extWrite(int i, int value);
    void extRef();
    void setup(int pin, int mode);
  private:
    int _extAdr=0;
};

#endif
