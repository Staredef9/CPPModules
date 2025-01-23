#include "Pony.h"


Pony::~Pony(){

	std::cout<<"destructor called on Pony" << "\n";
}


void Pony::augment(float sprinkles){

	rainbowness += sprinkles;

}


void Pony::set_height(int h){
	
	height = h;

}


void Pony::set_width(int w){

	width = w;
}

void Pony::set_rainbowness(float r){

	rainbowness = r;

}

void Pony::print(){

	std::cout<< "Pony Height: " << height << "\n";
	std::cout<< "Pony Width: " << width << "\n";
	std::cout<< "Pony Rainbowness: " << rainbowness<< "\n";

}
