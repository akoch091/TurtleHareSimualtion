#ifndef HERO_H
#define HERO_H

#include "Character.h"

/*
This class generates the heros of the game (Timmy and Harold). The constructor initializes all the attributes of the two heros. The class has a virtual void updatePosition() function implementation which updates the vertical and horizontal coordinates of the object by calling the moveHor() and moveVer(). These functions, in turn, set the boundaries for each character according to the specifications and call the four basic movement functions (defined in Character class: moveUp(), moveDown(), moveRight(), moveLeft()) to update the positions of characters. The die() function sets the avator of the character to '+' and calls the Character::die().
*/

class Hero : public Character
{
  public:
    Hero(char='T',int=3,int=3); //creates Timmy by default
    ~Hero();
    virtual void updatePosition();

  private:
    void moveHor();
    void moveVer();
    virtual void die();
    
    
};

#endif
