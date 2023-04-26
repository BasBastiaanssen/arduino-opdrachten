void setup() {
  pinMode (7, INPUT);
  pinMode (11, OUTPUT);
}

void loop() {
  if (digitalRead(7) == true) {
    if (digitalRead(11) == false) {
      digitalWrite(11, HIGH);
    } else {
      digitalWrite(11, LOW);
    }
    delay(500);
  }
}