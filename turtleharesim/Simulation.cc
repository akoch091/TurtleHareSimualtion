#include <iostream>
#include <string>
#include<cstdlib>
using namespace std;

#include "Simulation.h"

Simulation::Simulation()
{

}

Simulation::~Simulation()
{
  list<Character*>::iterator it;
  for(it  = l.begin(); it != l.end(); ++it){ //loop over every character and deallocate.
     delete (*it);
  }
}

void Simulation::launch()
{
   Character* c1 = new Dragon();       //create dragon
   Character* c2 = new Hero('H',1,5);  //create Harold
   Character* c3 = new Hero('T',3,3);  //create Timmy


   l.push_front(c1);
   l.push_front(c2);
   l.push_front(c3);


   //set charcters on the map
   dh.setCharOnMap(c1);
   dh.setCharOnMap(c2);
   dh.setCharOnMap(c3);

   while( ( c2->getStatus() || c3->getStatus() ) && ( !(c2->win()) && !(c3->win()) ) ) //as long as either timmy or harold are alive and neither has claimed the emerald
   {
      
      int n = random(10)+1;
      if (n<=6) //60% of the time fighter created.
      {
         Character* c = new Fighter(); //probability of fighter being a bork dork or pork is equal.
         l.push_front(c);
      }
      list<Character*>::iterator itr1;
      for(itr1  = l.begin(); itr1 != l.end(); ++itr1) //loop over every character.
      {
         (*itr1)->updatePosition(); //update position of each character.

         list<Character*>::iterator itr2;
         for(itr2  = l.begin(); itr2 != l.end(); ++itr2)
         {
            (*itr1)->collision( (*itr2) ); //check for collision against each player in the list and if positions match fight.
         }
         dh.updateMap(l); //update the map using the list of quest players
      }
      dh.printMap();
      dh.printCharInfo(c3,c2);
   }
   dh.printResult(c3,c2);
}


int Simulation::random(int max)
{
   double r = ( (double)rand() / ((double)(RAND_MAX)+(double)(1)) ); 
   return (int)(r * max);
}
