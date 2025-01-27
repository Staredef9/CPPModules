#include "FragTrap.hpp"
#include "ScavTrap.hpp"


int main(){


	srand(time(NULL));	

	fragtrap robot1("Marta");


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



	
	ScavTrap ScavBot1("Lucio");
	ScavBot1.rangedAttack("Luca");
	ScavBot1.meleeAttack("Paolo");	
	
	ScavBot1.takeDamage(30);
	ScavBot1.beRepaired(10);

	ScavBot1.challengeNewcomer();
	ScavBot1.challengeNewcomer();
	ScavBot1.challengeNewcomer();
	ScavBot1.challengeNewcomer();
	ScavBot1.challengeNewcomer();
	ScavBot1.challengeNewcomer();


	return(0);

}
