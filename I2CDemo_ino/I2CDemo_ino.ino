#include <Wire.h>
void setup() 
{
  Wire.begin(4);
  Wire.onReceive(receiveEvent); // register event
  Serial.begin(9600);           // start serial for output
  Serial.print("Start up");
}

void loop()
{
  delay(100);
}

void receiveEvent(int howMany)
{
  Serial.print("in receive event with ");
  int x = Wire.read();
  Serial.println(x);
}
