#include "Zombie.h"
#include <random>


class ZombieHorde{
	
	
	private:
		int counter;
		Zombie **instance;
	public:
		ZombieHorde(int n);
		~ZombieHorde();
		void	announce();
};

std::string randomNameGenerator();
