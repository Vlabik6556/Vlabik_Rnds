#include "Vlabik_Rnds.h"

Vlabik_Rnds::Vlabik_Rnds(int no_pin){	// Begin
  _nopin = no_pin;
};

int Vlabik_Rnds::getRnd(int mins, int maxs){ 	// Get Random digit
  int count = maxs - mins + 1;
  int rnd = analogRead(_nopin) % count + mins;

  return rnd;	// Return digit
}