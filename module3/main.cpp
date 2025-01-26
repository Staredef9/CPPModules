#include "FragTrap.hpp"



int main(){


	srand(time(NULL));	

	fragtrap robot1("Giovanni");

	robot1.rangedAttack("Luca");
	robot1.meleeAttack("Paolo");	

	robot1.takeDamage(30);
	robot1.beRepaired(10);

	
	robot1.vaulthunter_dot_exe("Pero");
	robot1.vaulthunter_dot_exe("Pero");
	robot1.vaulthunter_dot_exe("Pero");
	robot1.vaulthunter_dot_exe("Pero");
	robot1.vaulthunter_dot_exe("Pero");
	robot1.vaulthunter_dot_exe("Pero");
	robot1.vaulthunter_dot_exe("Pero");




	return(0);

}
