#include "types.h"

RotaryEncoder::RotaryEncoder(int int1, int int2) : p1(interrupt_pins[int1]), p2(interrupt_pins[int2]) {
  value = 0;
  pinMode(p1, INPUT_PULLUP);
  pinMode(p2, INPUT_PULLUP);
}
    
void RotaryEncoder::read1() {
  if(v1 ^ v2) value++; else value--;
}
    
void RotaryEncoder::read2() {
  if(v1 ^ v2) value--; else value++;
}
    
int RotaryEncoder::poll() {
  int v = value;
  value = 0;
  return v;
}
