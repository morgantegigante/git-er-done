#include <PID_v1.h>

//Define Variables we'll be connecting to
double CurrentTemp, SetTemp, Output;

/Specify the links and initial tuning parameters
PID myPID(&CurrentTemp, &Output, &SetTemp,2,0.1,5, DIRECT);

int WindowSize = 5000;
unsigned long windowStartTime;
void setup()
{
  windowStartTime = millis();

  //initialize the variables we're linked to
  Setpoint = 100;

  //tell the PID to range between 0 and the full window size
  myPID.SetOutputLimits(0, WindowSize);

  //turn the PID on
  myPID.SetMode(AUTOMATIC);
}

void loop()
{
  Input = analogRead(0);
  myPID.Compute();

  /************************************************
   * turn the output pin on/off based on pid output
   ************************************************/
  unsigned long now = millis();
  if(now - windowStartTime>WindowSize)
  { //time to shift the Relay Window
    windowStartTime += WindowSize;
  }
  if(Output > now - windowStartTime) digitalWrite(HeaterPin,HIGH);
  else digitalWrite(RelayPin,LOW);
}

