#include "Human.h"


Human::Human() : instance() {};

Human::Human(int input) : instance(input){}

Human::~Human(){

	std::cout<<"Destructor called"<<"\n";
}

brain&  Human::getBrain(){
	
	return instance;
}


std::string Human::identify(){
	
	return instance.identify();

}
