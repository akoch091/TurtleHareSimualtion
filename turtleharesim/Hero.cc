#include <iostream>
using namespace std;
#include <string>

#include "Hero.h"

Hero::Hero(char a, int arm, int str)
{
  avatar = a; 
  armour = arm;
  strength = str;

  charType = "protagonist";
  int t = random(5)+1; //random position between 1 and 5
  currPosC = 1;
  currPosR = t;
  health = 15;  
}

Hero::~Hero()
{
  
}

void Hero::updatePosition()
{
   moveHor();
   moveVer();
}

void Hero::die()
{
   avatar = '+';
   Character::die();
}

void Hero::moveHor()
{
   if( (!hasEmerald) && (alive) ){
      if(currPosC>0 && currPosC<25){
         moveRight();
      }
      else if(currPosC==25){
         if(currPosR>1 && currPosR<5){
            moveRight();
         }
         else{
            currPosC = currPosC+0;
         }
      }
      if(currPosC==26){
         hasEmerald=true;
      }
   }
}

void Hero::moveVer()
{
   if( (!hasEmerald) && (alive) ){
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




