void setSetpoints()
{
   if (stage == 1)
  ( 
  int temp1 = LCDFunctions();
  )
  if (stage == 2)
  ( 
  int temp2 = LCDFunctions();
  )
  if (stage == 3)
  ( 
  int temp3 = LCDFunctions();
  )
  if (stage == 4)
  ( 
  int temp4 = LCDFunctions();
  )
  int Setpoint = temp1;
}

void HeaterOutput()
{  
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
