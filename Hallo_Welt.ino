uint8_t Zahl = 0;

void setup()
{
  Serial.begin(115200);
}

void loop()
{
  Serial.println(Zahl);
  Zahl++ ;
  delay(100);
}
