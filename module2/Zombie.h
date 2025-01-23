#pragma once

#include <iostream>

class Zombie{

	private:
		std::string 	type;
		std::string	name;
	public:
		Zombie(){};
		Zombie(std::string name);
		Zombie(std::string type,std::string name);
		~Zombie();
		void	announce();

		void	setType(std::string newType);


};
