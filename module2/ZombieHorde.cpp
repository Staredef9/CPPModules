#include "ZombieHorde.h"




std::string randomNameGenerator(std::size_t length){

	//randomizza creazione nome

	const std::string CHARACTERS = "01234567890123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";

	std::random_device random_device;
	std::mt19937 generator(random_device());
	std::uniform_int_distribution<> distribution(0, CHARACTERS.size());

	std::string random_string;

	for (std::size_t i = 0; i < length; ++i){
	
		random_string += CHARACTERS[distribution(generator)];
	}
	return random_string;

}

ZombieHorde::ZombieHorde(int n){
			counter = n;
			srand(time(NULL));
			//istanzia n nomi random in una pool
			std::string pool[n];
			for (int j = 0; j < counter; j++){
				pool[j]  = randomNameGenerator(10);//genera nome random ;
			}
//qua si alloca tutto in una volta:
			instance = new Zombie*[n];
			for (int k = 0; k < counter; k++){
				instance[k] = new Zombie();
			} 
//questa assegna i nomi in modo randomico 
			for (int i = 0; i < counter; i++){
			//crea funzione random	
				int random = rand() % n;
				instance[i]->setName(pool[random]);
			}

}

ZombieHorde::~ZombieHorde(){

		for (int i = 0; i < counter; i++){
		
			delete instance[i];	
		
		} 
		delete[] instance;
		std::cout << "Horde deleted\n";
}


void	ZombieHorde::announce(){

	
	for(int i = 0; i < counter; i++){
		instance[i]->announce();
	}

}







