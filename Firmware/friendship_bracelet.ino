#include <Adafruit_NeoPixel.h>
# define ButtonPin D0
# define LEDPin D1
# define LEDCount 6
Adafruit_NeoPixel leds(LEDCount, LEDPin, NEO_RGB + NEO_KHZ800);

void setup() {
  pinMode(ButtonPin, INPUT_PULLUP);
  leds.begin();
  leds.setBrightness(30);
  leds.clear();
  leds.show();
}

void loop() {
  if (digitalRead(ButtonPin) == LOW) {
    
    for (int i = 0; i < LEDCount; i++) {
      leds.setPixelColor(i, leds.ColorHSV(i * 10922, 255, 255));
    }
    leds.show();
    
    delay(500);
    
    leds.clear();
    leds.show();
    
    while (digitalRead(ButtonPin) == LOW) {
      delay(10);
    }
  }
}