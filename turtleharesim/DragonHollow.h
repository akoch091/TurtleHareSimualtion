#ifndef DRAGONHOLLOW_H
#define DRAGONHOLLOW_H

#include "Array.h"
#include "Character.h"
#include <list>
/*
The DragonHollow class is essentially the view class. This class is used to display the map (Dragon's hollow) set characters on the map and update their progress on the map throughout the game. The DragonHollow class has a class template specialization of a 2-dimentional array of chars (the Array<char> a) which is used to store the display. The printMap() function prints the entire Dragon's Hollow map. The void buildMap() function essentially puts together the various components of Dragon's Hollow (e.g. the walls, ceilings, cave entrance and space and the emerald). The clearMap() function generates/resets the inside of the map(i.e positions where characters can move). These functions are called in the constructor of the class to generate the map. The setCharOnMap(Character*) function takes the position of the character and it's avatar and sets it on the map at the appropriate coordinate. updateMap(list<Character*>) function first clears the previous positions from map (calls clearMap()), then itterates through the list of characters and calls the setCharOnMap(Character*) function on each character(the calling of this function depends on if the character is a protagonist or anatagonist and if it is dead or alive). PrintCharInfo(Character*, Character*) function prints the health of the protagonists. void printResult(Character*, Character*) function prints the result of the simulation.
*/

class DragonHollow
{
  public:
    DragonHollow();
    ~DragonHollow();
    void updateMap(list<Character*>);
    void setCharOnMap(Character*);
    void printCharInfo(Character*, Character*);
    void printResult(Character*, Character*);
    void printMap();

  private:
    Array<char> a;
    void buildMap();
    void clearMap();


};

#endif
