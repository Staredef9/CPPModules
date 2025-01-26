#include "Brain.h"

brain::brain(){
	neurons = 0;
}


brain::brain(int input){
	neurons = input;
}
brain::~brain(){
	
	std::cout<<"destructor for brain called"<< "\n";

}



std::string brain::identify(){

	std::ostringstream address;

	address <<  this;
	
	return address.str();

}
