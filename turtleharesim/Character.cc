#include <iostream>
#include <string>
#include<cstdlib>

using namespace std;

#include "Character.h"

Character::Character()
{
   alive = true;
   hasEmerald = false;
}

Character::~Character()
{
}

//getters
char Character::getAvatar() const {return avatar;}
int Character::getCurrPosR() const {return currPosR;}
int Character::getCurrPosC() const {return currPosC;}
int Character::getHealth() const {return health;}
int Character::getStrength() const {return strength;}
bool Character::getStatus() const {return alive;}
int Character::getArmour() const {return armour;}
string Character::getCharType() const {return charType;}
bool Character::win() {return hasEmerald;}

void Character::die()
{
   alive = false;
   health = 0;
   strength = 0;
}


void Character::moveUp()
{
   currPosR = currPosR+1;
}

void Character::moveDown()
{
   currPosR = currPosR-1;
}

void Character::moveLeft()
{
   currPosC = currPosC-1;
}

void Character::moveRight()
{
   currPosC = currPosC+1;
}

void Character::collision(Character* c)
{
   //collision happens between two players when they have the same positions
   if(currPosR == c->currPosR && currPosC == c->currPosC){
      fight(c);
   }
}

void Character::fight(Character* c)
{
   //a fight ensues between two player if both are alive and are of different charType
   if(alive && charType != c->getCharType() && c->alive){
      health = health - c->getStrength() + armour;
      c->health = c->health - getStrength() + c->getArmour();
   }
   if(health <= 0){
      die();
   }
   if(c->getHealth() <= 0){
      c->die();
   }
}

int Character::random(int max)
{
   double r = ( (double)rand() / ((double)(RAND_MAX)+(double)(1)) ); 
   return (int)(r * max);
}



