// C++ code
//
void setup()
{
  pinMode(7, OUTPUT);
}

void loop()
{
  digitalWrite(7, HIGH);
  delay(1000); // ligado por 1000 millisecond(s)
  digitalWrite(7, LOW);
  delay(1000); // desligado por 1000 millisecond(s)
}