#include "types.h"

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
