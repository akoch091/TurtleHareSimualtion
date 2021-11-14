#ifndef CHARACTER_H
#define CHARACTER_H

/*
The Character class is the abstract base class from which all the quest players are derived. The abstract Character class has a pure virtual function updatePosition(). This class possesses data members that are shared between all the quest players. Data members include: char avatar (the display of a character on a map), int currPosR (row or vertical position of a character), int currPosC (colomn or horizontal position of a character), bool alive (status of a character, whether it is alive or dead), int health (health points), int strength (strength points), int armour (armour points), string charType (describes the character and may contain any additional information e.g. "protagonist") and bool hasEmerald (has the emerald or not, for protagonists having the emerald means winning game). Each of these attributes has a getter function which is either private or public (name of getters self-evident). The functions of this class include: virtual void collision(Character*) -> handles collisions between two characters, a collision takes place when both characters have the same positional coordinates. virtual void die() -> this function kills the character, sets the health, strength attributes to 0 and sets alive to false. The fight(Character*) decreases the health of the characters fighting as per instructions and kills the character whos health <= 0 as a result of the fight. The four moving functions handle the basic positionl updates of the character. The random(int) function created by Dr Laurendeau is impleneted here to generate random integers from zero to input-1.

*/

class Character
{
  public:
    Character();
    virtual ~Character();
    
    virtual void updatePosition() = 0;
    virtual void collision(Character*);
    //virtual void die();
    
    bool win();
    char getAvatar() const;
    bool getStatus() const;
    int getCurrPosR() const;
    int getCurrPosC() const; 
    string getCharType() const;
    int getHealth() const;
  
  protected: 
    char avatar;
    int currPosR;
    int currPosC;
    bool alive;
    int health;
    int strength;
    int armour;
    string charType;
    bool hasEmerald;
   
    int getStrength() const;
    int getArmour() const;

    virtual void die();
    void moveUp();
    void moveDown();
    void moveLeft();
    void moveRight();
    void fight(Character*);
    int random(int);
    

};


#endif
