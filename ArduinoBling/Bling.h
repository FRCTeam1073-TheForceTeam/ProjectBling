#include <SPI.h>

class Bling {
public:
  Bling();
  void dispClear();
  void TurnMeOn();
  void rainbowColor(int pos);
  void rainbowExplosion();
private:
  int forCounter;
  int iCounter;
  void lightNth(int ledNumber, int red, int green, int blue);
  void clearStrip();
  void dispColor(int R, int G, int B);
  int R, G, B;
  void magicFunction();
  const static int num_pixels = 64;
};


