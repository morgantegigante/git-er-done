int TemperatureReading()
{
  int CurrentTempVolts = analogRead(TempReadPin);
  int CurrentTempDegrees = CurrentTempVolts/5 + 25;
  return CurrentTempDegrees;
}


