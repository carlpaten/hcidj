#include "types.h"

const int interrupt_pins[8] = { 0, 1, 2, 3, 36, 37, 18, 19 };

class RotaryEncoder {
  
  protected:
    virtual void send_cc(int value);
  
  private:
    const pin p1, p2;
    bool v1, v2;
    int value;
    
  public:
    RotaryEncoder(int int1, int int2) : p1(interrupt_pins[int1]), p2(interrupt_pins[int2]) {
      value = 64;
      pinMode(p1, INPUT_PULLUP);
      pinMode(p2, INPUT_PULLUP);
    };
    
    void read1() {
      if(v1 ^ v2) value++; else value--;
      send_cc(value);
      value = 64;
    };
    
    void read2() {
      if(v1 ^ v2) value--; else value++;
      send_cc(value);
      value = 64;
    };
};
