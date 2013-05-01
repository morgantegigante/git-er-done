int checktime()
{
  unsigned long timevalue = millis(); 
  return timevalue;
}

int setSetpoints()
{
  unsigned long currentTime = checktime()/1000;
  currentTemp = TemperatureReading();
  int SetSlope = 0;
  unsigned long _SysStartTime = SysStartTime/1000;
  int _Setpoint = 0;
  
  if ((currentTime - _SysStartTime) < PTIME)
  {
    stage = 1;
    SetSlope = (150 - startTemp)/(PTIME-_SysStartTime);
    _Setpoint = startTemp + (currentTime*SetSlope);
  }
  else if ((currentTime - _SysStartTime) < (PTIME+STIME))
  {
    stage = 2;
    _Setpoint = 150;
  }
  else if ((currentTime - _SysStartTime) < (PTIME+STIME+RTIME))
  {
    stage = 3;
    SetSlope = (RTEMP-150)/(RTIME-STIME);
    _Setpoint = 150 + (currentTime*SetSlope);
  }
  else if ((currentTime - _SysStartTime) < (PTIME+STIME+RTIME+CTIME))
  {
    stage = 4;
    _Setpoint = 0;
  }
  return _Setpoint;
}

void HeaterOutput()
{  
   Setpoint = setSetpoints();
   int Input = currentTemp;
   int now = checktime();
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
