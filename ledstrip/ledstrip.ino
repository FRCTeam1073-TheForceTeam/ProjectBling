/*
This code is used to control the rgb LED strip with adressable leds. 

GLOBAL VARIABLES:
  num_pixels: the number of pixels in the LED strip (there are 32 per meter)
  R, G, B: hold the color used for the rainbow effects. Be careful using these.

FUNCTIONS WRITTEN:
Effects:
  travel(r,g,b): a single led of specified color travels the length of the strip
  travelr(r,g,b): signle LED goes the other way
  chase(r,g,b): one LED chases another the length of the strip
  fill(r,g,b): fill the strip one LED at a time
  fillr(r,g,b): fills backwards
  opposite(r,g,b): two pixels travel in opposite directions. the colors are compliments
  theater(r,g,b): fills every third pixel and has them travel down the strip
  theaterr(r,g,b): opposite direction of theater()
  rainbowFill(): fills the strip in with a rainbow
  rainbowTheater(): the theater effect with a rainbow
  rainbowFade(): fades the entire strip through the rainbow
Helper Functions:
  setStrip(): passes a 0 to display the colors. I think that this is needed
  clearStrip(): passes 'off' to the pixels then sets them
  lightNth(i, r,g,b): turns on the ith pixel with the given color 
  rainbowColor(i): sets global variables R, G, B to the color given by i. there are 384 colors
  dispColor(r,g,b): sets the color given
  
Questions? 
  Jeffrey Kabel
*/

#include <SPI.h>

int num_pixels = 64;
int R, G, B;

void setup() {
  SPI.begin();
  SPI.setBitOrder(MSBFIRST);
  clearStrip();
}

void loop() {
  
  clearStrip();
  travel(127,0,0);
  travelr(0,127,127);
  chase(0,127,0);
  chaser(127,0,127);
  fill(0,0,127);
  fillr(127,127,0);
  
  for (int i=0; i<2; i++) {
    opposite(127,0,127);
    opposite(0,127,0);
  }
  rainbowFill();
  
  for( int i=0; i<15; i++) {
    theater(0,127,127);
  }
  for (int j=0; j<15; j++) {
    theaterr(0,127,127);
  }
  
  rainbowTheater();
  rainbowFade();
  strange(0, 127,127);
  slowFill(127,0,127);
  
  //slowEmpty(127,0,127);
}

void slowEmpty(int r, int g, int b){
  for(int i = 0; i < 65; i++){
    dispColor(r,g,b);
    
}
for(int j= 64; j >-1; j--){
      lightNth(j, 0,0,0);
      delay(50);
  }
}

void strange(int r, int g, int b) {
  for(int i = 0; i <65; i++){
    dispColor(r, g, b);
    //delay(50);
  }
  for(int i = 0; i < 65; i++){
    for(int j=i; j>=0; j--) {
      clearStrip();
      
      lightNth(j,r,g,b);
      for(int k = 0; k < num_pixels -i; k++){
        dispColor(r,g,b);
    
  }
  delay(10);
  //clearStrip();
  }
}
}

void slowFill(int r, int g, int b) {
  for (int j=0; j<=num_pixels; j++) {
    for(int i=0; i<=num_pixels-j; i++) {
      lightNth(i, r, g, b);
      
        delay(j);
   
    }
    for(int i=num_pixels; i>=num_pixels-j; i--) {
      lightNth(i, r, g, b);
      //delay(50);
    }
  }
  clearStrip();
}

void rainbowFade() {
  for (int j=0; j<384; j++) {
    for(int i=0; i<num_pixels; i++) {
      rainbowColor(i+j);
      dispColor(R,G,B);
      delayMicroseconds(200);
    }
    clearStrip();
  }
}

void rainbowTheater() {
  for (int i=0; i<=384; i++) {
    rainbowColor(i);
    theater(R, G, B);
    clearStrip();
  }
  //clearStrip();
}

void theaterr(int r, int g, int b) {
  for (int i=0; i<3; i++) {
    for (int j=num_pixels; j>=0; j=j-3) {
      lightNth(j-i, r,g,b);
    }
    delay(50);
  }
  clearStrip();
}

void theater(int r, int g, int b) {
  for (int i=0; i<3; i++) {
    for (int j=num_pixels; j>=0; j=j-3) {
      lightNth(i+j, r,g,b);
    }
    delay(50);
  }
  clearStrip();
}
  

void rainbowFill() {
  //fills in the strip with a rainbow!!!
  int numColors = 384/num_pixels;
  for (int i=0; i<=num_pixels; i++) {
    rainbowColor(i*numColors);
    dispColor(R,G,B);
    delay(50);
  }
  clearStrip();
}

void opposite(int r, int g, int b) {
  int half = num_pixels/2;
  for (int i=0; i<=half; i++) {
    clearStrip();
    lightNth(num_pixels-i, 127-r, 127-g, 127-b);
    lightNth(i, r,g,b);
    delay(50);
  }
  for(int i=half; i<=num_pixels; i++) {
    clearStrip();
    lightNth(i, r,g,b);
    lightNth(num_pixels-i, 127-r, 127-g, 127-b);
    delay(50);
  }
  clearStrip();
}

void fill(int r, int g, int b) {
  for(int i=0; i<=num_pixels; i++) {
    dispColor(r, g, b);
    delay(50);
  }
  clearStrip();
}

void chase(int r, int g, int b) {
  //one pixel chases another, on pixel inbetween
  //clearStrip();
  for(int i=0; i<=num_pixels; i++) {
    lightNth(i+2, r, g, b);
    lightNth(i, r, g, b);
    delay(50);
  }
  clearStrip();
}

void chaser(int r, int g, int b) {
  for(int i=num_pixels; i>=0; i--) {
    clearStrip();
    lightNth(i, r,g,b);
    lightNth(i-2, r,g,b);
    delay(50);
  }
}

void fillr(int r, int g, int b) {
  for(int i=num_pixels; i>=0; i--) {
    lightNth(i, r, g, b);
    delay(50);
  }
  clearStrip();
}

void travelr(int r, int g, int b) {
  for(int i=num_pixels; i>=0; i--) {
    clearStrip();
    lightNth(i,r,g,b);
    delay(50);
  }
  clearStrip();
}

void travel(int r, int g, int b) {
  for(int i=0; i<=num_pixels; i++) {
    lightNth(i, r, g, b);
    delay(50);
  }
  clearStrip();  
}

void setStrip() {
  SPI.transfer(0);
}

void clearStrip() {
  for(int i=0; i<=num_pixels; i++) {
    dispClear();
  }
  setStrip();
}

void dispColor(int red, int green, int blue) {
  if (red>127 || green>127 || blue>127) {
    return;
  }
  SPI.transfer(128+green);
  SPI.transfer(128+red);
  SPI.transfer(128+blue);
}

void dispClear() {
  SPI.transfer(128);
  SPI.transfer(128);
  SPI.transfer(128);
}

void lightNth(int n, int r, int g, int b) {
  if (n > num_pixels) {
    return;
  }

  for(int i=0; i<n-1; i++) {
    dispClear();
  }
  dispColor(r, g, b);
  
  setStrip();
}

void rainbowColor(int pos) {
  //pos is the position on the rainbow
  //There are 384 colors
  switch(pos / 128) {
    case 0:
      R = 127 - (pos%128);
      G = pos%128;
      B = 0;
      break;
    case 1:
      G = 127 - (pos%128);
      B = pos%128;
      R = 0;
      break;
    case 2:
      B = 127 - (pos%128);
      R = pos%128;
      G = 0;
      break;
  }
}

