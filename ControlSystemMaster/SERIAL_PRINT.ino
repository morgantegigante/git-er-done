// Print to Serial Monitor in a useful way
void monitor_printout(){
  unsigned long Times;
  unsigned long Error;
  unsigned long TimeNow;
  TimeNow = millis();
  Times = TimeNow - SysStartTime
  Error = TemperatureReading() - setSetpoints();
  Error = abs(Error);
  
  Serial.print(Times, DEC);
  Serial.print("\t");
  Serial.print(TemperatureReading(), DEC);
  Serial.print("\t");
  Serial.print(Error, DEC);
  Serial.print("\t");
}
