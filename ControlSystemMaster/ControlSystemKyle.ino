int TemperatureReading()
{
  int CurrentTempDegrees = analogRead(TempReadPin);
  return CurrentTempDegrees;
}


