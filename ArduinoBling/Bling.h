#include <SPI.h>

class Bling {
public:
  Bling();
  void dispClear();
  void TurnMeOn();
  void rainbowColor(int pos);
  void rainbowExplosion();
  void slowEmpty(int r, int g, int b);
  void strange(int r, int g, int b);
  void slowFill(int r, int g, int b);
  void rainbowFade();
  void rainbowTheater();
  void theaterr(int r, int g, int b);
  void theater(int r, int g, int b);
  void rainbowFill();
  void opposite(int r, int g, int b);
  void fill(int r, int g, int b);
  void chase(int r, int g, int b);
  void chaser(int r, int g, int b);
  void fillr(int r, int g, int b);
  void travelr(int r, int g, int b);
  void travel(int r, int g, int b);
private:
  int forCounter;
  int iCounter;
  void lightNth(int ledNumber, int red, int green, int blue);
  void clearStrip();
  void dispColor(int R, int G, int B);
  int R, G, B;
  void setStrip();
  const static int num_pixels = 64;
};


