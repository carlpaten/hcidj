/*

#include "types.h"
#include <Wire.h>
#include "Adafruit_Trellis.h"

//TODO skip non-existent buttons
class Trellis {
  private:
    static const int numKeys = 4 * 16;
    const pin int_pin;
    Adafruit_TrellisSet *trellis;
  
  protected:
    virtual void send_cc(int index, int value);
  
  public:
    Trellis(pin _int_pin) : int_pin(_int_pin) {
      *trellis = Adafruit_TrellisSet(
        &(Adafruit_Trellis()),
        &(Adafruit_Trellis()),
        &(Adafruit_Trellis()),
        &(Adafruit_Trellis())
      );
      
      pinMode(int_pin, INPUT_PULLUP);
      
      //TODO trellis.begin(0x70) x4
    }
  
    void updateInputs() {
      if(trellis->readSwitches()) {
        //to make faster, skip reading non-existent buttons
        for(int i = 0; i < numKeys; i++) {
          if(trellis->justPressed(i)) {
            send_cc(i, 1);
          } else if(trellis->justReleased(i)) {
            send_cc(i, 0);
          }
        }
      }
    };
    
    void updateLED(int index, bool high) {
      if(high) trellis->setLED(index); else trellis->clrLED(index);
      trellis->writeDisplay();
    };
    
    void updateLEDs(bool values[numKeys]) {
      for(int i = 0; i < numKeys; i++) {
        if(values[i]) trellis->setLED(i); else trellis->clrLED(i);
      }
      trellis->writeDisplay();
    };
};

*/
