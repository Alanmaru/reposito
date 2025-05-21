#include "MeLEDMatrix.h"
#include "MeAuriga.h"
int v1=90;
int v2=19;
int z=v1*v2;

MeLEDMatrix ledMx(PORT_6);

void pepe(){
  for (int i = 2; i <= 9999; i++) { // Cambia 10 por el límite que desees
    delay(1000); // Espera 1 segundo entre incrementos
    ledMx.showNum(i*i);
  }
}

void setup() {
  ledMx.setBrightness(6);
  ledMx.setColorIndex(1);
}

void loop() {
   pepe();
}





