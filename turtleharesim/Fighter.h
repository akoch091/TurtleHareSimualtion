#ifndef FIGHTER_H
#define FIGHTER_H

#include "Character.h"

/*
This class generates the fighters of the game (borks dorks or porks). The constructorinitializes the common attributes and calls the void generateFighter() which randomly creates/initializes one of the three characters. The class has a virtual void updatePosition() function implementation which updates the vertical and horizontal coordinates of the object by calling the moveHor() and moveVer(). These functions, in turn, set the boundaries for each character according to the specifications and call the four basic movement functions (defined in Character class: moveUp(), moveDown(), moveRight(), moveLeft()) to update the positions of the vilain characters. The die() function sets the avator of the character to ' '(space key) and calls the Character::die().
*/

class Fighter : public Character
{
  public:
    Fighter();
    ~Fighter();
    virtual void updatePosition();

  private:
    void moveHor();
    void moveVer();
    void generateFighter();
    virtual void die();
    
    
};

#endif
