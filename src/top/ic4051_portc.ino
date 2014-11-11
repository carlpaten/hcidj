
class ic4051_portc : public ic4051 {
  //Not sure what pins this writes to?
  void write_address(int addr) {
    PORTC &= B00011111;
    PORTC |= (addr << 5);
  }
  
  virtual void send_cc(int index, int value);
  
  protected:
    ic4051_portc(pin _input_pin) : ic4051(_input_pin) {
      DDRC |= B11100000;
    }
};
