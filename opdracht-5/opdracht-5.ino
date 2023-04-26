void setup()
{
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
}

void loop()
{
  
  int x = 0;
  int y = 0;
  int z = 0;
  
  for (x = 0; x < 255; x++) {
    for (y = 0; y < 255; y++)
    {
      for (z = 0; z < 255; z++)
      {
        analogWrite(2, x);
        analogWrite(3, y);
        analogWrite(4, z);
      }
    }
  }
}