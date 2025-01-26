#include "Zombie.h"
#include "ZombiEvent.h"
#include "ZombieHorde.h"

int main()
{
	int number = 0; 

	std::string input;
	std::cin >> input;
	number = stoi(input);

	ZombieHorde zombies(number);
	zombies.announce();


}
