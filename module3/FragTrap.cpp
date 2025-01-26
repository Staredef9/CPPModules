#include "FragTrap.hpp"


fragtrap::fragtrap(std::string name){

	this->name = name;
	HitPoint = 100;
	MaxHitPoint = 100;
	EnergyPoint = 100;
	MaxEnergyPoint = 100;
	Level = 1;
	MeleeAttackDamage = 30;
	RangedAttackDamage = 20;
	ArmorDamageReduction = 5;	
	std::cout << "FragBot correctyl initialized\n";
		

}

fragtrap::~fragtrap(){
	std::cout<< "Fragbot correctly destroyed\n";	
}


int fragtrap::rangedAttack(std::string const &target){

	std::cout << name << " attacks " << target << " at range, causing " << RangedAttackDamage << " points of damage\n";	
	return RangedAttackDamage;
}

int fragtrap::meleeAttack(std::string const &target){
	std::cout <<name << " attacks " << target << " melee, causing " << MeleeAttackDamage << " points of damage\n";	
	
	return MeleeAttackDamage;

}

int fragtrap::takeDamage(unsigned int amount){

	if (amount > MaxHitPoint)
	{
		amount = MaxHitPoint;
	}

	EnergyPoint -= amount;
	
	if (EnergyPoint < 0)
		std::cout <<"You died!\n";
	else {
		std::cout << name << " receives " << amount << " damage, energy reduced to : " << EnergyPoint<< " be careful!\n";	
	}	

	return EnergyPoint;
}

int fragtrap::beRepaired(unsigned int amount){
	
	if (EnergyPoint < MaxEnergyPoint){
		EnergyPoint += amount;
		if (EnergyPoint > 100)
			EnergyPoint = 100;
	}
	std::cout << name << " receives " << amount << " healing , energy augmented to : " << EnergyPoint<< " great!\n";	
	return EnergyPoint;	
}


int fragtrap::vaulthunter_dot_exe(std::string const &target){

	
	if (HitPoint > 24)
	{
		std::string pool[5];
		pool[0] = "FrogSplash";
		pool[1] ="SmackDown";
		pool[2] = "ucantseemee";
		pool[3] = "attacco4";
		pool[4] = "attacco5";		

		
		int random = (rand() % 4) + 1;
		std::cout << "Attack name: " << pool[random] << "is executed on " << target << "\n"; 

		HitPoint -= 25;			
	}else{
		std::cout << "I am out of HitPoints!!\n";
	}
	return 1;

}
