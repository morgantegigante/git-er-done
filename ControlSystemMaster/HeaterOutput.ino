unsigned long setSetpoints()
{
  unsigned long currentTime = TimeNow/1000;
  unsigned long _TimeRemaining = TimeRemaining/1000;
  currentTemp = TemperatureReading();
  unsigned long SetSlope = 0;
  unsigned long _SysStartTime = SysStartTime/1000;
  unsigned long _Setpoint = 0;
  
  if ((_TimeRemaining) > (STIME+RTIME+CTIME))
  {
    stage = 1;
    SetSlope = (150 - startTemp)/(PTIME);
    _Setpoint = startTemp + (currentTime*SetSlope);
  }
  else if ((_TimeRemaining) > (STIME+RTIME))
  {
    stage = 2;
    _Setpoint = 150;
  }
  else if ((_TimeRemaining) > (STIME))
  {
    stage = 3;
    SetSlope = (RTEMP-150)/(RTIME-STIME);
    _Setpoint = 150 + (currentTime*SetSlope);
  }
  else if ((_TimeRemaining) > (0))
  {
    stage = 4;
    _Setpoint = 0;
  }
  return _Setpoint;
}

void HeaterOutput()
{  
   int Input = currentTemp;
   int now = TimeNow;
   myPID.Compute();
   
    
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
