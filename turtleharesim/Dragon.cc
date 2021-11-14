#include <iostream>
using namespace std;
#include <string>

#include "Dragon.h"

Dragon::Dragon()
{
  avatar = 'D'; 
  charType = "antagonist";
  currPosC = 25;
  currPosR = 3;
  prevPosR = 4; //this is for dragon's motion. Set to 4 to ensure dragon starts the simulation by going up.
  
  health = 1000; //ensures the dragon wins any collision against heros
  strength = 1000; //strength of Dragon is enough to kill both of the heros during collision
  armour = 0;
}

Dragon::~Dragon()
{
  
}

void Dragon::updatePosition()
{
   move();
}

void Dragon::move()
{
   if(currPosR == 4){
      prevPosR = currPosR;
      moveDown();
   }
   else if(currPosR == 2){
      prevPosR = currPosR;
      moveUp();
   }
   else if(currPosR == 3){
      if(prevPosR == 4){
         prevPosR = currPosR;
         moveDown();   
      }
      else if(prevPosR == 2){
         prevPosR = currPosR;
         moveUp();     
      }  
   }
}


