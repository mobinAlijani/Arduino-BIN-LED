uint8_t x; 

const int LEDpin[8] = {11, 9, 3, 18, 16, 7, 5, 4};

void setup() {
  Serial.begin(115200);
  for (int i = 0; i < 8; i++) {
    pinMode(LEDpin[i], OUTPUT);
  }
}

void loop() {
  if (Serial.available()) {
    x = Serial.parseInt();
    for (int i = 0; i < 8; i++) {
      digitalWrite(LEDpin[i], bitRead(x, i));
    }
  }
}
