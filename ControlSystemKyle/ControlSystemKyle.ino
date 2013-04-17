int TemperatureReading(int TempReadPin = 1, int HeaterPin = 13)
{
  pinMode(TempReadPin,INPUT);
  pinMode(HeaterPin,OUTPUT);
  int CurrentTempVolts = analogRead(TempReadPin);
  int CurrentTempDegrees = CurrentTempVolts*200 + 25;
  return CurrentTempDegrees;
}

void setup()
{
}

void loop()
{
  int currenttemp = TemperatureReading();
}


