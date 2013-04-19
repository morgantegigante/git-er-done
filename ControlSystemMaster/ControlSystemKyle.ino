int TemperatureReading()
{
  int CurrentTempVolts = analogRead(TempReadPin);
  int CurrentTempDegrees = CurrentTempVolts*200 + 25;
  return CurrentTempDegrees;
}



