#include "Zombie.h"
#include "ZombiEvent.h"



int main()
{

	Zombie one("Brutto", "Carlo");
	one.announce();

	Zombie *puntato = new Zombie("Alto","Gianni");

	puntato->announce();
	delete puntato;

	ZombieEvent provona;


	provona.randomChump();
	Zombie *eventpointed = provona.newZombie("Ultimo");	
	eventpointed->announce();
	delete eventpointed;



}
