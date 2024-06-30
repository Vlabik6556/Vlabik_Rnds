#include "Arduino.h"


class Vlabik_Rnds {
  public:
    Vlabik_Rnds(int no_pin); // Begin
    
    int getRnd(int mins, int maxs);	// Get Random digit
  private:
    int _nopin;
};