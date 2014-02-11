/* Ported from Jeffrey Kabel's ledstrip.ino program. Moves LED code
 * into a Bling class to match the 2014 1073 Robot and allow
 * portability of algorithms between the robot and the arduino.
 * 
 * Wire Red->5V, Green/Blk->Ground
 * White->Pin13, Blue->Pin11 
 */

#include <SPI.h>
#include "Bling.h"

Bling blingy;

void setup() {
  // put your setup code here, to run once:
  SPI.begin();
  SPI.setBitOrder(MSBFIRST);
  blingy.dispClear();
}

void loop() {
  blingy.dispClear();
  blingy.rainbowExplosion();
}

Bling::Bling() {
  R = 128;
  G = 128;
  B = 128;
  forCounter = 0;
  iCounter = 0;
}

void Bling::dispClear() {
  dispColor(0, 0, 0);
}

void Bling::dispColor(int R, int G, int B) {
  if (R < 128 && G < 128 && B < 128) {
    SPI.transfer(128+G);
    SPI.transfer(128+R);
    SPI.transfer(128+B);
  }
}

// Don't know why but this function has to be called after certain
// actions to get the overall SPI transfer to work correctly.
void Bling::setStrip(){
  SPI.transfer(0);
}

void Bling::slowEmpty(int r, int g, int b){
  for(int i = 0; i < 65; i++){
    dispColor(r,g,b);
  }
  for(int j= 64; j >-1; j--){
    lightNth(j, 0,0,0);
    delay(50);
  }
}

void Bling::strange(int r, int g, int b) {
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

void Bling::slowFill(int r, int g, int b) {
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

void Bling::rainbowFade() {
  for (int j=0; j<384; j++) {
    for(int i=0; i<num_pixels; i++) {
      rainbowColor(i+j);
      dispColor(R,G,B);
      delayMicroseconds(200);
    }
    clearStrip();
  }
}

void Bling::rainbowTheater() {
  for (int i=0; i<=384; i++) {
    rainbowColor(i);
    theater(R, G, B);
    clearStrip();
  }
  //clearStrip();
}

void Bling::theaterr(int r, int g, int b) {
  for (int i=0; i<3; i++) {
    for (int j=num_pixels; j>=0; j=j-3) {
      lightNth(j-i, r,g,b);
    }
    delay(50);
  }
  clearStrip();
}

void Bling::theater(int r, int g, int b) {
  for (int i=0; i<3; i++) {
    for (int j=num_pixels; j>=0; j=j-3) {
      lightNth(i+j, r,g,b);
    }
    delay(50);
  }
  clearStrip();
}
  
void Bling::opposite(int r, int g, int b) {
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

void Bling::fill(int r, int g, int b) {
  for(int i=0; i<=num_pixels; i++) {
    dispColor(r, g, b);
    delay(50);
  }
  clearStrip();
}

void Bling::chase(int r, int g, int b) {
  //one pixel chases another, on pixel inbetween
  //clearStrip();
  for(int i=0; i<=num_pixels; i++) {
    lightNth(i+2, r, g, b);
    lightNth(i, r, g, b);
    delay(50);
  }
  clearStrip();
}

void Bling::chaser(int r, int g, int b) {
  for(int i=num_pixels; i>=0; i--) {
    clearStrip();
    lightNth(i, r,g,b);
    lightNth(i-2, r,g,b);
    delay(50);
  }
}

void Bling::fillr(int r, int g, int b) {
  for(int i=num_pixels; i>=0; i--) {
    lightNth(i, r, g, b);
    delay(50);
  }
  clearStrip();
}

void Bling::travelr(int r, int g, int b) {
  for(int i=num_pixels; i>=0; i--) {
    clearStrip();
    lightNth(i,r,g,b);
    delay(50);
  }
  clearStrip();
}

void Bling::travel(int r, int g, int b) {
  for(int i=0; i<=num_pixels; i++) {
    lightNth(i, r, g, b);
    delay(50);
  }
  clearStrip();  
}

void Bling::rainbowExplosion(){
  for(int i = 0; i<33; i++){
    clearStrip();
    lightNth(64 -i, 0, 127, 0);
    lightNth(i, 127, 0, 0);
    delay(20);
  }

  for (int i=0; i<=24; i++) {
    dispClear();
  }
  for (int i=0; i<=14; i++) {
    dispColor(127, 127, 127);
  }

  for(int i=0;i<=33;i++){ 
    for(int j=0;j<=32-i;j++){
      dispClear();
    }
    for(int k=0;k<i;k++){
      rainbowColor((i -k)*11);
      dispColor(R, G, B);
    }
    for(int l=0;l<i;l++){
      rainbowColor((i + l)*3);
      dispColor(R, G, B);
    }
    delay(20);
    clearStrip();
  }
  delay(500);
}

void Bling::rainbowColor(int pos) {
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

void Bling::lightNth(int n, int r, int g, int b) {
  if (n > num_pixels) {
    return;
  }

  for(int i=0; i<=n-1; i++) {
    dispClear();
  }

  dispColor(r, g, b);

  setStrip();
}

void Bling::clearStrip() {
  for(int i=0; i<=num_pixels; i++) {
    dispClear();
  }
  setStrip();
}



