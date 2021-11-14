#include <iostream>
using namespace std;

#include<time.h>
//#include <string>
//#include "Array.h"
//#include "DragonHollow.h"
//#include "Character.h"
//#include "Hero.h"
//#include "Dragon.h"
//#include "Fighter.h"
#include "Simulation.h"


int main()
{
  srand( (unsigned)time( NULL ) );

  Simulation s;
  s.launch();
  return 0;
}



