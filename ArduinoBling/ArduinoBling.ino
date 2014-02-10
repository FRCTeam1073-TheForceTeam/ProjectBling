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
void Bling::magicFunction(){
  SPI.transfer(0);
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
    //dispColor(0,127,127);
  }
  dispColor(r, g, b);

  magicFunction();
}

void Bling::clearStrip() {
  for(int i=0; i<=num_pixels; i++) {
    dispClear();
  }
  magicFunction();
}

