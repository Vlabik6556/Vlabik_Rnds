#include "Vlabik_Rnds.h"

Vlabik_Rnds rnd(0); // Create funcion and select a free analog pin (Recommendation on the NANO board)
void setup() {
  Serial.begin(9600);
}

void loop() {
  Serial.println(rnd.getRnd(0,100));  // Send on COM port Random digit 
  delay(500);   // Wait 0.5 second
}