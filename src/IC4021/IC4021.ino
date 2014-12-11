/*
595: Cascaded 8-bit Digital SIPO Shift Register
*/
template<int k>
class IC595 {
};

/*
4021: 8-bit Digital PISO Shift Register
- PL (pin 11): Parallel load
- CP (pin 10): Clock Input (for shifting)
- Q7 (pin 3) : Bit 7 output (for serial reading)
*/
class IC4021 {
  const int PL, CP, Q7;
  
  public: 
    IC4021(int _PL, int _CP, int _Q7) : PL(_PL), CP(_CP), Q7(_Q7) {
      pinMode(PL, OUTPUT);
      pinMode(CP, OUTPUT);
      pinMode(Q7, INPUT);
    };
    
    void read(int output[8]) {
      digitalWrite(PL, HIGH);
      digitalWrite(PL, LOW);
      for(int i = 0; i < 8; i++) {
        output[i] = digitalRead(Q7);
        digitalWrite(CP, HIGH);
        digitalWrite(CP, LOW);
      }
    };
};

/*
4051: 8-channel Analog Demultiplexer
*/

class IC4051{
  const int S1, S2, S3, Z;
  
  public:
  IC4051(int _S1, int _S2, int _S3, int _Z) : S1(_S1), S2(_S2), S3(_S3), Z(_Z) {
    pinMode(S1, OUTPUT);
    pinMode(S2, OUTPUT);
    pinMode(S3, OUTPUT);
    pinMode(Z,  INPUT);
  };
  
  void read(int output[8]) {
    for(int i = 0; i < 8; i++) {
      //write address
      digitalWrite(S1, (i & (1 << 0)) >> 0);
      digitalWrite(S2, (i & (1 << 1)) >> 1);
      digitalWrite(S3, (i & (1 << 2)) >> 2);
      
      output[i] = analogRead(Z);
    }
  };
};

IC4021 buttons1(21, 22, 23);
IC4021 buttons2(24, 25, 26);
IC4051 pots1(29, 30, 31, 44);
IC4051 pots2(33, 34, 35, 45);

void setup() {}
void loop() {
  int readings[8];
  
  pots1.read(readings);
  Serial.print("POTS1 :");
  for(int i = 0; i < 8; i++) {
    Serial.print(readings[i]);
    Serial.print(" ");
  }
  Serial.println();
  
  pots2.read(readings);
  Serial.print("POTS2 :");
  for(int i = 0; i < 8; i++) {
    Serial.print(readings[i]);
    Serial.print(" ");
  }
  Serial.println();
  
  delay(500);
}
