#include <spc_ard_plc.h>

SPC_ARD_PLC plc(ARD_PLC_A10);   // declare plc as SPC_ARD_PLC class and config to use A10 board 

#define LED RL1                 // define LED macro as RL1

void setup() {
  // ...
}

void loop() {
  _ON(LED);                     // turn the LED on (HIGH is the voltage level)
  delay(100);                   // wait for 100 milliseconds which is 1/10 of a second 
  _OFF(LED);                    // turn the LED off by making the voltage LOW
  delay(100);                   // wait for 100 milliseconds which is 1/10 of a second 
}