#include "ScavTrap.hpp"


ScavTrap::ScavTrap(std::string name){

		HitPoints = 100;
		MaxHitPoint = 100;
		EnergyPoints = 50;
		MaxEnergyPoint = 100;
		Level = 1;
		MeleeAttackDamage = 20;
		RangedAttackDamage = 15;
		ArmorDamageReduction =  3;
		this->name = name;
		std::cout<< "Constructor correctly called for scavtrap\n";

}

ScavTrap::~ScavTrap(){
	
	std::cout<<"Destructor correctly called for scavtrap\n";

}

int ScavTrap::rangedAttack(std::string const &target){
	
	std::cout << name << " attacks as scavtrap " << target << " at range, causing " << RangedAttackDamage << " points of damage\n";	
	return RangedAttackDamage;

}


int	ScavTrap::meleeAttack(std::string const &target){
	std::cout <<name << " attacks as scavtrap" << target << " melee, causing " << MeleeAttackDamage << " points of damage\n";	
	return MeleeAttackDamage;
}


int	ScavTrap::takeDamage(unsigned int amount){
	if (amount > MaxHitPoint)
	{
		amount = MaxHitPoint;
	}

	EnergyPoints -= amount;
	
	if (EnergyPoints < 0)
		std::cout <<"You died!\n";
	else {
		std::cout << name << " receives as scavtrap " << amount << " damage, energy reduced to : " << EnergyPoints<< " be careful!\n";	
	}	

	return EnergyPoints;


}

int	ScavTrap::beRepaired(unsigned int amount){
	if (EnergyPoints < MaxEnergyPoint){
		EnergyPoints += amount;
		if (EnergyPoints > 100)
			EnergyPoints = 100;
	}
	std::cout << name << " receives as scavtrap`" << amount << " healing , energy augmented to : " << EnergyPoints<< " great!\n";	
	return EnergyPoints;	
}


void	ScavTrap::challengeNewcomer(){

	int random = (rand() % 5) + 1;
	
	std::string pool[6];
	pool[0] = name + "challenges you to go in a circle on one leg";
	pool[1] = name + "challenges you to tickle your nose with a foot";
	pool[2] = name + "challenges you to tell me what do I have in my pocket";
	pool[3] = name + "challenges you to go in that country";
	pool[4] = name + "challenges you to do 100 pushups";
	pool[5] = name + "challenges you to say hello to my little friendBOOOOM";
	std::cout<< pool[random] << "\n";

}
		


