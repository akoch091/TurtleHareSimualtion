#include <iostream>
using namespace std;
#include <string>

#include "Fighter.h"

Fighter::Fighter()
{
  currPosC = 25; 
  int t = random(5)+1;
  currPosR = t;
  armour = 0;
  health = 5;
  charType = "antagonist";
  generateFighter();
}

Fighter::~Fighter()
{
  
}

void Fighter::generateFighter()
{
  int type = random(3);
  if(type == 0){ //generate bork
     avatar = 'b';
     strength = random(4)+8;//strength between 8 to 11
  }
  else if(type == 1){ //generate dork
     avatar = 'd';
     strength = random(3)+6;//strength between 6 to 8
  }
  else if(type == 2){ //generate pork
     avatar = 'p';
     strength = random(2)+4;//strength between 4 to 5
  }
}

void Fighter::updatePosition()
{
   moveHor();
   moveVer();
}

void Fighter::die()
{
   avatar = ' '; 
   Character::die();
}

void Fighter::moveHor()
{
   if(alive){
      if(currPosC>1 && currPosC<26){
         moveLeft();
      }
      else if(currPosC==1){
         die();
      }
   }
}

void Fighter::moveVer()
{
   if(alive){
      if(currPosR>1 && currPosR<5){
         int n = random(3);
         if(n==0){
            moveUp();
         }
         else if(n==1){
            currPosR = currPosR+0;           
         }
         else if(n==2){
            moveDown();
         }
      }
      else if(currPosR==1){
         int n = random(2);
         if(n==0){
            moveUp();
         }
         else if(n==1){
            currPosR = currPosR+0;
         }
      }
      else if(currPosR==5){
         int n = random(2);
         if(n==0){
            moveDown();
         }
         else if(n==1){
            currPosR = currPosR+0;
         }
      }
   }
}


