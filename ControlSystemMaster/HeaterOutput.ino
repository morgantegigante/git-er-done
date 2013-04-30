void HeaterOutput()
{  
   int Setpoint = LCDFunctions();
   int Input = currentTemp;
   myPID.Compute();
   
    unsigned long now = millis();
  if(now - windowStartTime>WindowSize)
      { //time to shift the Relay Window
        windowStartTime += WindowSize;
      }
  if(Output > now - windowStartTime) 
      {
        digitalWrite(HeaterPin,HIGH);
      }
  else 
      {
        digitalWrite(HeaterPin,LOW);
      }
}
