#include "Weapon.h"



Weapon::Weapon(std::string input){
	
	type = input;

}

Weapon::~Weapon(){}


const std::string& Weapon::GetType() const{

	return type;

}

void	Weapon::SetType(std::string &setter){


	type = setter;
}
