#include <Encoder.h>
#include <Adafruit_NeoPixel.h>
#include "ic595.h"

typedef int pin;

/*

Encoder encoders[4] = { 
  Encoder(INT0, INT1),
  Encoder(INT2, INT3),
  Encoder(INT4, INT5),
  Encoder(INT6, INT7),
};

Adafruit_NeoPixel pixels = {
  Adafruit_NeoPixel(16, 16, NEO_GRB + NEO_KHZ800)
};



ic595 ic595_1 = ic595(15, 16, 17);

long oldPosition  = -999;

void routeControlChange(uint8_t channel, uint8_t control, uint8_t value) {
  switch(control) {
    case 0: ic595_1.update(0, value); break;
    case 1: ic595_1.update(1, value); break;
    case 2: ic595_1.update(2, value); break;
    case 3: ic595_1.update(3, value); break;
    case 4: ic595_1.update(4, value); break;
    case 5: ic595_1.update(5, value); break;
    case 6: ic595_1.update(6, value); break;
    case 7: ic595_1.update(7, value); break;
    default: break;
  }
}

*/

class ic595 {
  public:
    static const int outputs = 8;
    
  private:
    const pin send_pin, shift_pin, apply_pin;
    bool state[outputs];
    
    void applyUpdate() {
      for(int i = 0; i < outputs; i++) {
        digitalWrite(send_pin, state[i]);
        digitalWrite(shift_pin, HIGH);
        delay(500);
        digitalWrite(shift_pin, LOW);
      }
      digitalWrite(apply_pin, HIGH);
      digitalWrite(apply_pin, LOW);
    };
    
  public:
    ic595(pin _send_pin, pin _shift_pin, pin _apply_pin) : send_pin(_send_pin), shift_pin(_shift_pin), apply_pin(_apply_pin) {
      pinMode(send_pin, OUTPUT);
      pinMode(shift_pin, OUTPUT);
      pinMode(apply_pin, OUTPUT);
    };
    
    void update(int index, bool high) {
      if(state[index] != high) {
        state[index] = high;
        applyUpdate();
      }
    };
    
    void update(bool newState[outputs]){
      bool shouldUpdate = false;
      for(int i = 0; i < outputs; i++) {
        if(state[i] != newState[i]) {
          state[i] = newState[i];
          shouldUpdate = true;
        }
      }
      if(shouldUpdate) applyUpdate();
    };
};

void setup() {
  //usbMIDI.setHandleControlChange(routeControlChange);
  //pixels.begin();
}



ic595 i(17, 15, 16);

bool vals[32] = {
    true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, 
    true, true, true, true, true, true, true, true, 
    true, true, true, true, true, true, true, true};

void loop() {
  i.update(vals);
  
  /*
  //usbMIDI.read(1);
  
  for(int i = 0; i < 16; i++) {
    pixels.setPixelColor(i, pixels.Color(0, 150, 0)); // Moderately bright green color.
    pixels.show(); // This sends the updated pixel color to the hardware.
    delay(500); // Delay for a period of time (in milliseconds).
  }
  
  for(int i = 0; i < 16; i++) {
    pixels.setPixelColor(i, pixels.Color(150, 0, 0)); // Moderately bright green color.
    pixels.show(); // This sends the updated pixel color to the hardware.
    delay(500); // Delay for a period of time (in milliseconds).
  }
  
  
  long newPosition = encoders[0].read();
  if ((newPosition - oldPosition >= 4) || (oldPosition - newPosition >= 4)) {
    int v = (newPosition - oldPosition) >> 2;
    oldPosition = newPosition;
    Serial.println(v);
    usbMIDI.sendControlChange(1, v, 1);
  }
  */
}

