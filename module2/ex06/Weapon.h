#pragma once

#include <iostream>
#include <string>

class Weapon{

	private:
		std::string type;
	public:
		Weapon(std::string input);
		~Weapon();
		const std::string&      GetType() const;
		void			SetType(std::string &setter);

};
