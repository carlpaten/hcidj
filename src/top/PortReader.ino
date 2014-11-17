/*

#include "types.h"

/*
n is number of pins, k is offset

template<int n, int k>
class PortC {
  private:
    uint8_t mask, negmask;
  
  public:
    PortC() {
      mask = 0;
      for(int i = 0; i < n; i++) {
        mask |= 1 << (7 - i - k);
      }
      negmask = ~mask;
    };
    
    void makeInput() {
      DDRC &= negmask;
    };

    void makeOutput() {
      DDRC |= mask;
    };
    
    int read() {
      
    };
    
    void write(int val) {
    };
};

*/
