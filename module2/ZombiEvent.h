#pragma once

#include <iostream>
#include "Zombie.h"



class ZombieEvent{

	Zombie instance;

	public:
		ZombieEvent(){};
		~ZombieEvent(){};
		void	setZombieType(Zombie &instance, std::string newtype){
			instance.setType(newtype);
		}
		
		Zombie*	newZombie(std::string name){
			Zombie *newZombie = new Zombie(name);
			return newZombie;	
		}
		

		void	randomChump(){
			//crea nome random con pool di stringhe
			//scengli nome random
			//
			srand(time(NULL));	
			std::string pool[3];
			pool[0]  = "Marta";
			pool[1] = "Federico";
			pool[2] = "Piero";

			int random = rand() % 3;

			Zombie randomZombie("alto", pool[random]);
			randomZombie.announce();
		}


	


};
