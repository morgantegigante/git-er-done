import processing.serial.*;

Serial port;
String PreconReadings;
Date StartingTimeStamp = new Date();
Date AnyTimeStamp = new Date();
Date EndingTimeStamp = new Date();
PrintWriter PreconReadingsFile;
Calendar Timing = Calendar.getInstance();
float numberofreadings = 0;
 
void setup() {
  size(100,100);
  println(Serial.list());
  port = new Serial(this, Serial.list()[1], 9600); 
  PreconReadingsFile = createWriter("PreconReadingFile.txt");
  PreconReadingsFile.flush();
  StartingTimeStamp = Timing.getTime();
  println("Now writing data to file!  Starting time is: " + StartingTimeStamp);
  
}

void draw() {
}

void serialEvent(Serial port) {
   PreconReadings = port.readString();
   if(PreconReadings != null) {
     PreconReadingsFile.print(PreconReadings);
     PreconReadingsFile.flush();
   }
   if(PreconReadings.equals("*")) {
     Timing = Calendar.getInstance();
     AnyTimeStamp = Timing.getTime();
     PreconReadingsFile.print(" " + AnyTimeStamp);
     PreconReadingsFile.flush();
     println("Number of readings: " + numberofreadings);
     ++numberofreadings;
   }
}
