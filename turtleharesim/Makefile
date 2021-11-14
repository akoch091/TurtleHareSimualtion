exm:	main.o Simulation.o DragonHollow.o Character.o Hero.o Fighter.o Dragon.o
	g++ -o exm main.o Simulation.o DragonHollow.o Character.o Hero.o Fighter.o Dragon.o

main.o:	main.cc 
	g++ -c main.cc

Simulation.o: Simulation.cc Simulation.h 
	g++ -c Simulation.cc

DragonHollow.o: DragonHollow.cc DragonHollow.h 
	g++ -c DragonHollow.cc

Character.o: Character.cc Character.h 
	g++ -c Character.cc

Harold.o: Hero.cc Hero.h 
	g++ -c Hero.cc

Fighter.o: Fighter.cc Fighter.h 
	g++ -c Fighter.cc

Dragon.o: Dragon.cc Dragon.h 
	g++ -c Dragon.cc

clean:
	rm -f *.o exm
