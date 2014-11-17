const int INTERNAL_LED_PIN = 6;
const int LED_SHIFT_PIN = 15;
const int LED_APPLY_PIN = 16;
const int LED_SEND_PIN  = 17;
const int NUMBER_OF_LEDS = 32;

bool LEDsState[NUMBER_OF_LEDS] = { 0 };

void setup() {
  pinMode(LED_SHIFT_PIN, OUTPUT);
  pinMode(LED_APPLY_PIN, OUTPUT);
  pinMode(LED_SEND_PIN,  OUTPUT);
  
  digitalWrite(LED_SEND_PIN, HIGH);
  for(int i = 0; i < NUMBER_OF_LEDS; i++) {
    digitalWrite(LED_SHIFT_PIN, HIGH);
    digitalWrite(LED_SHIFT_PIN, LOW);
  }
  
  digitalWrite(LED_APPLY_PIN, HIGH);
  pinMode(INTERNAL_LED_PIN, OUTPUT);
}

void loop() {
  digitalWrite(INTERNAL_LED_PIN, HIGH);
  delay(500);
  digitalWrite(INTERNAL_LED_PIN, LOW);
  delay(500);
}
