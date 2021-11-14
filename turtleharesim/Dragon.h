#ifndef DRAGON_H
#define DRAGON_H

#include "Character.h"

/*
This class generates the dragon. The constructor initiates the dragon object by setting the health and strength attributes to 1000 each in order to ensure that no hero survives a collision/fight with it. The class has a virtual void updatePosition() function implementation which updates the vertical position of the object by calling the move() function. This functions, sets the boundaries for the dragon, according to the specifications and call the two basic movement functions (defined in Character class: moveUp(), moveDown()) to update the position of the character. The dragon has an int prevPosR attribute, which is used in the logic of move() function in order to ensure proper dragon movement. 
*/


class Dragon : public Character
{
  public:
    Dragon();
    ~Dragon();
    virtual void updatePosition();
   

  private:
    int prevPosR;
    void move();
    
};

#endif
