void setup()
{
  pinMode(A5, INPUT);
  Serial.begin(9600);
}

void loop()
{
  int reading = analogRead(A5);
  
  String tekst = "Temperatuur in graden C = ";
  int temperature = map(reading, 0, 1023, 0, 500);
  
  String finalOutput = tekst + temperature;
  Serial.println(finalOutput);
}