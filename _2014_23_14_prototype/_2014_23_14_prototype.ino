const int DIGITAL_START = 0;
const int DIGITAL_END   = 10;
const int LED_START     = 18;
const int LED_END       = 26;
const int ANALOG_START  = 42;
const int ANALOG_END    = 44;
const int INPUT_PIN_4051 = 45;
const int INPUT_4051_START = 45;
const int INPUT_4051_END = 52;
const int LED_PIN = 6;

const int PIN_TOTAL = 53;
int state[PIN_TOTAL];

void onControlChange(byte channel, byte control, byte value) {
  Serial.print("Received message with channel ");
  Serial.print(channel);
  Serial.print(", control ");
  Serial.print(control);
  Serial.print(", value ");
  Serial.print(value);
  Serial.println();
  if(channel == 1) {
    if(control >= LED_START && control <= LED_END) {
      digitalWrite(control, value);
    } else {
      //debug
    }
  }
}

void setup() {
  usbMIDI.setHandleControlChange(onControlChange);
  //Digital
  for(int i = DIGITAL_START; i <= DIGITAL_END; i++) {
    if(i == LED_PIN) continue;
    pinMode(i, INPUT_PULLUP);
  }
  
  //Digital
  for(int i = ANALOG_START; i <= ANALOG_END; i++) {
    pinMode(i, INPUT);
  }
  
  //LED
  for(int i = LED_START; i <= LED_END; i++) {
    pinMode(i, OUTPUT);
  }
  
  //4051 addressing
  DDRC = B11100000 | DDRC;
}
 
void loop() {
  for(int cnt = 0; cnt < 5000; cnt++) {
    for(int i = DIGITAL_START; i <= DIGITAL_END; i++) {
      if(i == LED_PIN) continue; //The LED pin does not read prope
      int v = !digitalRead(i);
      if(state[i] != v) {
        state[i] = v;
        //Serial.print("Read digital control ");
        //Serial.print(i);
        //Serial.print(" with value ");
        //Serial.print(v);
        //Serial.println();
        usbMIDI.sendControlChange(i, v, 1);
      }
    }
    
    //analog pins
    for(int i = ANALOG_START; i <= ANALOG_END; i++){
      int v = 127 - (analogRead(i) >> 3);
      if(state[i] != v) {
        state[i] = v;
        //Serial.print("Read analog control ");
        //Serial.print(i);
        //Serial.print(" with value ");
        //Serial.print(v);
        //Serial.println();
        usbMIDI.sendControlChange(i, v, 1);
      }
    }
    
    //4051 multiplexing
    for(int i = 0; i < 8; i++) {
      PORTC = (i << 5) | (PORTC & B00011111);
      delayMicroseconds(100); //tweak this
      int v = 127 - (analogRead(INPUT_PIN_4051) >> 3);
      if(state[i + INPUT_4051_START] != v) {
        state[i + INPUT_4051_START] = v;
        //Serial.print("Read 4051 analog control ");
        //Serial.print(i);
        //Serial.print(" with value ");
        //Serial.print(v);
        //Serial.println();
        usbMIDI.sendControlChange(i + INPUT_4051_START, v, 1);
      }
    }
  }
  
  //clear analog state every hundred iterations
  for(int i = ANALOG_START; i < ANALOG_END; i++) {
    state[i] = -1;
  }
  for(int i = INPUT_4051_START; i < INPUT_4051_END; i++) {
    state[i] = -1;
  }
}
