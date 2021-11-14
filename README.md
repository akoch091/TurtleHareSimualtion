# TurtleHareSimualtion
A fun simulation on who will win the race.


Name: Avetik Kocharyan
Student number: 100793437
Take home exam: 
Professor: Dr. Christine Laurendeau

Purpose of program: Create, a a game which simulates the movement, collision and fight of quest players inside a map called Dragons Hollow. In this simulation, the protagonist characters, Timmy and Harold are striving to recover an emerald which is inside a cave situated at the opposite end of where they start the game from. On their way accross the map, they either avoid/dodge Fighters characters (anatgonist characters) or collide with them and fight them in the hopes of having enough helth and strength points to defeat them. The main anatagonis, the dragon, which paces up and down the cave entrance is way too strong for either of the characters and needs to be dodged since a fight will ensure the demise of Timmy and Harold. The protagonists win if one of them recovers the emerald. The antagonists win if protagonists both die in their struggle.


Folder contents (14 files): main.cc, Simulation.cc, Simulation.h, DragonHollow.cc, DragonHollow.h, Array.h, Hero.cc, Hero.h, Fighter.cc, Fighter.h, Dragon.cc, Dragon.h, Makefile, readme.txt.
UML diagram submitted separately in culearn.

The simulation was designed according to the model view control (mvc) design pattern. The Character class (abstract) and its derivatives (Dragon, Fighter and Hero) are my models (represented as object). The DragonHollow is my view, where the information is displayed to the end-user. The collection class is Array.h (class template specialization of a 2-dimensional array of chars). The Simulation class is the control that is responsible for communication between models and the view. 

Inovative feature: update the the health of each of the protagonist and display on the screen with the map (each iteration).

Compilation and launching instructions (from the terminal):
Please enter the following commands.

Compiling and running (using a Makefile): make --> ./exm

Compiling and running (not using Makefile): each file needs to be compliled (g++ -c file1.cc) --> linked (g++ -o exm file1.o file2.o file3.o...file7.o) -->./exm
