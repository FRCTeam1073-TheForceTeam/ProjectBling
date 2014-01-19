int greenLED = 5;
int blueLED = 3;
int redLED = 6;
#define ONBOARD_LED 13

void setupLed(int whichLed) {
  pinMode(whichLed, OUTPUT);
}
void flashLed(int led,int dtime) {
  digitalWrite(led, HIGH);
  delay(dtime);
  digitalWrite(led, LOW);
  delay(dtime);
}

void fade2Led(int led1, int led2, int dtime) {
  for(int fadeValue = 0 ; fadeValue <= 255; fadeValue +=5) { 
    // sets the value (range from 0 to 255):
    analogWrite(led1, fadeValue);
    analogWrite(led2, fadeValue);    
    // wait for 30 milliseconds to see the dimming effect    
    delay(30);                            
  } 
 delay(dtime);

  // fade out from max to min in increments of 5 points:
  for(int fadeValue = 255 ; fadeValue >= 0; fadeValue -=5) { 
    // sets the value (range from 0 to 255):
    analogWrite(led1, fadeValue);
    analogWrite(led2, fadeValue);
    // wait for 30 milliseconds to see the dimming effect    
    delay(30);                            
  } 
}
  
/*void flash2Led(int led1,int led2,int dtime) {
  int i = 0;
  while(i < 5000)
  {
  digitalWrite(led1, HIGH);
  digitalWrite(led2, LOW);
  //delay(dtime);
  digitalWrite(led1, LOW);
  digitalWrite(led2, HIGH);
  i++;
  }
  digitalWrite(led1,LOW);
  digitalWrite(led2, LOW);
  delay(dtime);
  i = 0;
}*/
void solidLed(int led1) {
  digitalWrite(led1, HIGH);
}
void flash2Led(int led1, int led2, int dtime) {
  digitalWrite(led1, HIGH);
  digitalWrite(led2, HIGH);
  delay(dtime);
  digitalWrite(led1, LOW);
  digitalWrite(led2, LOW);
  delay(dtime);
}
void flashYellow(int dtime) {
  analogWrite(redLED, 255);
  analogWrite(greenLED, 30);
  delay(dtime);
  analogWrite(redLED, 0);
  analogWrite(greenLED, 0);
  delay(dtime);
}
void flashWhite(int dtime) {
  analogWrite(redLED, 255);
  analogWrite(greenLED, 140);
  analogWrite(blueLED, 150);
  delay(dtime);
  analogWrite(redLED, 0);
  analogWrite(greenLED, 0);
  analogWrite(blueLED, 0);
  delay(dtime);
}
void flash3Led(int led1, int led2,int led3, int dtime) {
  digitalWrite(led1, HIGH);
  digitalWrite(led2, HIGH);
  digitalWrite(led3, HIGH);
  delay(dtime);
  digitalWrite(led1, LOW);
  digitalWrite(led2, LOW);
  digitalWrite(led3, LOW);
  delay(dtime);
  
}
void setup() {
    Serial.begin(9600);
      //setupLed(greenLED);
      //setupLed(blueLED);
      //setupLed(redLED);
      //digitalWrite(blueLED, HIGH);
      //digitalWrite(redLED, HIGH);
}
void loop(){
    //soliddLed(blueLED);
      flashWhite(5000);
    //flashYellow(1000);
    //flashLed(blueLED,1000);
    //flashLed(redLED,1000);
    //flashLed(greenLED, 1000);
    //flashLed(ONBOARD_LED,500);
    //flash2Led(blueLED,greenLED,1000);
    //flash2Led(redLED,blueLED,1000);
    //flash2Led(greenLED, redLED, 1000);
    //digitalWrite(redLED, HIGH);
    //digitalWrite(greenLED, HIGH);
    //flash3Led(blueLED,redLED,greenLED,1000);
}
