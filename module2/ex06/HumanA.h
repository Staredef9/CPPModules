#pragma once 
#include "Weapon.h"

class Human(){


	private:
		std::string name;
		Weapon LongSword;
	public:
		Human(std::string name, std::string Sword);
		void	attack();	

};
