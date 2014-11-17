#include "types.h"

/*
class ic4021 {
  public: 
    static const int inputs = 8;
    
  private:
    const pin input_pin, shift_pin, load_pin; //Q7, CP, PL
    int state[inputs];
    
  protected:
    virtual void send_cc(int index, int value);
    
  public:
    //must attach interrupts after constructing
    ic4021(pin _input_pin, pin _shift_pin, pin _load_pin) : input_pin(_input_pin), shift_pin(_shift_pin), load_pin(_load_pin) {
      pinMode(input_pin, INPUT);
      pinMode(shift_pin, OUTPUT);
      pinMode(load_pin, OUTPUT);
    };
    
    void update() {
      digitalWrite(load_pin, HIGH);
      digitalWrite(load_pin, LOW);
      for(int i = 0; i < inputs; i++) {
        int v = digitalRead(input_pin);
        if(state[i] != v) {
          state[i] = v;
          send_cc(i, v);
        }
        digitalWrite(shift_pin, HIGH);
        digitalWrite(shift_pin, LOW);
      }
    }
};

*/
