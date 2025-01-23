#include "Zombie.h"


Zombie::Zombie(std::string type, std::string name){
	this->type = type;
	this->name = name;
	
}


Zombie::Zombie(std::string name){

	this->name = name;
	this->type = "";
}



Zombie::~Zombie(){
	std::cout<< "Destructor called!" << "\n";
}



void Zombie::announce(){


	std::cout << '<' <<name << '(' << type << ')' << '>' << ' ' << "Braaaaaiiiiiinnnssss...."<< "\n";


}



void Zombie::setType(std::string newType){

	type = newType;

}
