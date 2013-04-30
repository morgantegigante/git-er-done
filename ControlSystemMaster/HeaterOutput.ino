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
  
  if (currentTime - SysStartTime) < PTIME
  {
    stage = 1;
    SetSlope = (150 - startTemp)/(PTIME-SysStartTime);
    Setpoint = startTemp + (currentTime*SetSlope);
  }
  if (currentTime - SysStartTime) < STIME
  {
    stage = 2;
    Setpoint = 150;
  }
  if (currentTime - SysStartTime) < RTIME
  {
    stage = 3;
    SetSlope = (RTEMP-150)/(RTIME-STIME);
    Setpoint = 150 + (currentTime*SetSlope);
  }
  if (currentTime - SysStartTime) < CTIME
  {
    stage = 4;
    Setpoint = 0;
  }
}

void HeaterOutput()
{  
   int Input = currentTemp;
   myPID.Compute();
   
    checktime();
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
