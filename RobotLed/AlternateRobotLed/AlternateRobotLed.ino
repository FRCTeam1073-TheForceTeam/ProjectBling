#define GREEN 5
#define BLUE 3
#define RED 6
#define delayTime 20

void setup() {
  Serial.begin(9600);
  pinMode(GREEN, OUTPUT);
  pinMode(BLUE, OUTPUT);
  pinMode(RED, OUTPUT);
  digitalWrite(GREEN, HIGH);
  digitalWrite(BLUE, HIGH);
  digitalWrite(RED, HIGH);
}

int redVal;
int blueVal;
int greenVal;
void loop() {
    redVal = 254;
    blueVal = 1;
    greenVal = 1;
    
    
    for(int i = 1; i <= 254; i += 1) {
       greenVal += 1;
      redVal -= 1;
      analogWrite(GREEN, 255 - greenVal);
      analogWrite(RED, 255 - redVal);
      delay(delayTime);
      Serial.println(i);
      }
      

    
    for(int i = 1; i <= 254; i += 1) {
      blueVal += 1;
      greenVal -= 1;
      analogWrite(BLUE, 255 - blueVal);
      analogWrite(GREEN, 255 - greenVal);
      delay(delayTime);
    }
    

    for(int i = 1; i <= 254; i += 1) {
      redVal += 1;
      blueVal -= 1;
      
      analogWrite(RED, 255 - redVal);
      analogWrite(BLUE, 255 - blueVal);
      delay(delayTime);
    }
    
   
    
  }

