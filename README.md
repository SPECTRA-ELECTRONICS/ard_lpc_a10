# SPECTRA Arduino PLC

## A10

* Microcontroller: ATmega328
* Atmel Clock Speed: 16 MHz
* RTC
* 1x serial Interface
* 1x I2C Interface
* Input current Max. 8A
* 4x Relays Outputs – 230V / 6A
* 2x Analog/Digital Inputs
* 6x Digital Inputs

## Installation guide

- General requirements
    * PC with Arduino IDE (1.6.4 or newer) (Windows, Linux, MAC)
    * Internet connection

- CONTROLLINO library
    * Start Arduino IDE, navigate to Sketch–>Include Library–>Manage Libraries
    * In the Library Manager type CONTROLLINO into the filter text box and search for CONTROLLINO library
    * When found, select the latest version and install it. The installation process should be fully automated
    * When finished - check in Sketch–>Include Library menu that you can see the CONTROLLINO library there
    * You can also check if you can see the set of CONTROLLINO examples in File->Examples->CONTROLLINO

- CONTROLLINO boards hardware definition
    * Navigate to File–>Preferences
    * Copy-paste the following link to the Additional Boards Manager URLs: https://raw.githubusercontent.com/SPECTRA-ELECTRONICS/arduino_plc/master/package_SpcArdPlcHardware.json
    * Press OK button
    * Then navigate to Tools–>Board: “Foo“–>Boards Manager
    * In the Boards Manager type CONTROLLINO into the filter text box and search for CONTROLLINO boards
    * When found, select the latest version and install it. The installation process should be fully automated
    * When finished - check in Tools–>Board: “Foo“–> menu that you can see the CONTROLLINO boards there