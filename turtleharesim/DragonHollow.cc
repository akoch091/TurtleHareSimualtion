#include <iostream>
#include <string>
using namespace std;

#include "DragonHollow.h"

DragonHollow::DragonHollow() 
{
   buildMap();
}

DragonHollow::~DragonHollow() {}


void DragonHollow::setCharOnMap(Character* chr)
{
  a(chr->getCurrPosR(),chr->getCurrPosC()) = chr->getAvatar();
}

void DragonHollow::buildMap()
{
//Building dragon's hollow.
  
  //Left side end (where T and H will start)
  for(int i=0; i<(MAX_NUM_ROW); ++i){
     a(i,0)= '|';
  }
  //Top end
  for(int i=1; i<(MAX_NUM_COL-2); ++i){
     a(0,i)= '-';
  }
  //Bottom end
  for(int i=1; i<(MAX_NUM_COL-2); ++i){
     a(MAX_NUM_ROW-1,i)= '-';
  }

  //Mid-section (empty to start)
  clearMap();

  //Right side end (where the dragon, the cave and the emerald will be located)
  for(int i=0; i<(MAX_NUM_ROW-5); ++i){
     a(i,MAX_NUM_COL-2)= '|';
  }
  for(int i=2; i<(MAX_NUM_ROW-2); ++i){
     a(i,MAX_NUM_COL-2)= '=';
  }
  for(int i=5; i<(MAX_NUM_ROW); ++i){
     a(i,MAX_NUM_COL-2)= '|';
  }
  //inside the cave
  a(0,27) = ' ';
  a(1,27) = ' ';
  a(2,27) = ' ';
  a(3,27) = '*';
  a(4,27) = ' ';
  a(5,27) = ' ';
  a(6,27) = ' ';
}

void DragonHollow::clearMap()
{
  for(int i=1; i<26; ++i){
     for(int j=1; j<(MAX_NUM_ROW-1); ++j){
        a(j,i)= ' ';
     }
  }
}

void DragonHollow::updateMap(list<Character*> li)
{
   clearMap();
   list<Character*>::iterator itr3;
   for (itr3  = li.begin(); itr3 != li.end(); ++itr3){
      if((*itr3)->getCharType() == "protagonist"){
         setCharOnMap(*itr3);
      }
      else if((*itr3)->getCharType() == "antagonist"){
         if((*itr3)->getStatus()){ //update the antagonist position only when its alive
            setCharOnMap(*itr3);
         }
      }
   }
}

void DragonHollow::printMap() 
{
   cout<< a << endl;
}

void DragonHollow::printCharInfo(Character* t, Character* h)
{
   cout<< "_____________________"<<endl;
   cout<< "Character information"<<endl;
   cout<< "---------------------"<<endl;
   cout<< "Timmy's health: "<< t->getHealth() << endl;
   cout<< "Harold's's health: "<< h->getHealth() << endl;
   cout<< "---------------------"<<endl;
}

void DragonHollow::printResult(Character* t, Character* h)
{
      if(h->win()){
         cout<< "Harold has claimed the emerald!"<<endl;
      }
      if(t->win()){
         cout<< "Timmy has claimed the emerald!"<<endl;
      }
      if(!h->getStatus()){
         cout<< "Harold has died!"<<endl;
      }
      if(!t->getStatus()){
         cout<< "Timmy has died!"<<endl;
      }
}


