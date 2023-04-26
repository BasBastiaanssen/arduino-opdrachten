void setup() {
  pinMode(A0, INPUT);
  
  for (int pin = 2; pin <= 10; pin++) {
    pinMode(pin, OUTPUT);
  }
}

void loop() {
int potValue = analogRead(A0);
  int ledNumber = map(potValue, 0, 1023, 0, 8);
  
  for (int x = 0; x <= 8; x++) {
    digitalWrite(x + 3, x < ledNumber);
  }
}