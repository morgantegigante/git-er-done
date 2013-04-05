//Ali, Kyle, Lauren, Morganne

//Define Pins
int sensePin = 0;
int ledPin = 9;
int lightpin = 1;

//Distance Variables
int lastDist =0;
int currentDist = 0;

//Threshold for Movement
int thresh = 200;


void setup()
{  
  //The LED pin needs to be set as output
  pinMode(ledPin, OUTPUT);
}

// Didn't have a photoresistor, used potentiometer
// range changed as a result
void loop()
{
  //read the sensor
  int lightVal = analogRead(lightPin);
  currentDist = analogRead(sensePin);
 
  //Does the current distance deviate from the 
  //last distance by more than the threshold 
  if((currentDist > lastDist+thresh || currentDist < lastDist -thresh) && lightVal >0)
  {
    digitalWrite(ledPin, HIGH);
    delay(2000);
  }
  else
  {
    digitalWrite(ledPin, LOW);
  }
  
  lastDist = currentDist;
  
}
