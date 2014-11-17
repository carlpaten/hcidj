#ifndef TYPES_H
#define TYPES_H

typedef int pin;

const int interrupt_pins[8] = { 0, 1, 2, 3, 36, 37, 18, 19 };

class RotaryEncoder {
 
  private:
    pin p1, p2;
    volatile bool v1, v2;
    int value;
    
  public:
    RotaryEncoder(int int1, int int2);
    void read1();
    void read2();
    int poll();
};

#endif
