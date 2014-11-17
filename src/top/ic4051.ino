#include "types.h"

/*
class ic4051 {
  public:
    static const int inputs = 8;
  
  private:
    const pin input_pin;
    int state[inputs];
  
  protected:
    ic4051(pin _input_pin) : input_pin(_input_pin) {
      pinMode(input_pin, INPUT);
    };
    
    virtual void write_address(int addr);
    virtual void send_cc(int index, int value);

  public:
    void update() {
      for(int i = 0; i < 8; i++) {
        write_address(i);
        //insert delay?
        int v = 127 - (analogRead(input_pin) >> 3);
        if(state[i] != v) {
          state[i] = v;
          send_cc(i, v);
        }
      }
    }
};

*/
