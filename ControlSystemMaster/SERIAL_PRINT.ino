// Print to Serial Monitor in a useful way
void monitor_printout(){
  unsigned long Times;
  unsigned long Error;
  unsigned long TimeNow;
  TimeNow = millis();
  Times = TimeNow - SysStartTime;
  Error = TemperatureReading() - setSetpoints();
  Error = abs(Error);
  
  Serial.print(Times, DEC);
  Serial.print("\t");
  Serial.print(TemperatureReading(), DEC);
  Serial.print("\t");
  Serial.print(Error, DEC);
  Serial.print("\t");
  Serial.println();

  if (mode == 9)
  {
    Serial.print("Max Temp");
    Serial.print("\t");
    Serial.print(maxTemp, DEC);
    Serial.println();
      
    Serial.print("Avg Temp Overall");
    Serial.print("\t");
    Serial.print(avg, DEC);
    Serial.println();
    
    Serial.print("Avg Temp for preheat");
    Serial.print("\t");
    Serial.print(avg_p, DEC);
    Serial.println();
      
    Serial.print("Avg Temp for soak");
    Serial.print("\t");
    Serial.print(avg_s, DEC);
    Serial.println();
      
    Serial.print("Avg Temp for reflow");
    Serial.print("\t");
    Serial.print(avg_r, DEC);
    Serial.println();
      
    Serial.print("Avg Temp for cooling");
    Serial.print("\t");
    Serial.print(avg_c, DEC);
    Serial.println();
      
    Serial.print("RMS error");
    Serial.print("\t");
    Serial.print(rms_error, DEC);
    Serial.println();
  }
}
