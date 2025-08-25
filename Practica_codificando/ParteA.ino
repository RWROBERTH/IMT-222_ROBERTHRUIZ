int leds[N] = {2,3,4,5,6,7,8,9,10,11,12,13,14,15};

void setup() {
  //Salida de LED´s
  for (int i = 0; i < 15; i++) {
    pinMode(leds[i], OUTPUT);
  }
}

void loop() {
  //Encender los LED`s
  for (int i = 0; i < 15; i++) {
    digitalWrite(leds[i], HIGH);
    delay(500);
    digitalWrite(leds[i], LOW);
  }
}
