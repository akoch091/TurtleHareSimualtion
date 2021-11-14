#ifndef SIMULATION_H
#define SIMULATION_H

#include <list>
#include "Character.h"
#include "Hero.h"
#include "Fighter.h"
#include "Dragon.h"
#include "DragonHollow.h"

/*
The simulation class is essentially the control class. This class is used to generate various objects of the Hero, Fighter, Dragon and DragonHollow objects and use the functions of these classes to manipulate these objects as per instructions of the take-home exam. The class has a an instance of DragonHollow object dh (the map of the game) and an STL list of Character pointers l to keep track of all the players in the game. The launch() is the master function that orchestrates the flow of the simulation. 1st it generates the two heros (Timmy and Harold) and the dragon and pushes pointers to these characters into the list. 2nd implements a while loop (condition: as long as either timmy or harold are alive and neither has claimed the emerald) to itterate through the following steps: with a probability of 60% generate a fighter, push the pointer to fighter onto list, itterate through list and update the position of each player, check for collisions/fights between each player and update map with the new positions. 3rd print the updated Dragon's Hollow map. The random(int) function created by Dr Laurendeau is impleneted here to generate random integers from zero to input-1 in order to implement the randomization of Fighter generation.
*/

class Simulation
{
  public:
    Simulation();
    ~Simulation();
    void launch();
    

  private:
    DragonHollow dh;
    list<Character*> l;

    int random(int);

};

#endif
