
#pragma once
#include <iostream>
#include <string>



class fragtrap{


	private:
		std::string	name;
		
		
		
		int HitPoint;
		int MaxHitPoint;
		int EnergyPoint;
		int MaxEnergyPoint;
		int Level;
		int MeleeAttackDamage;
		int RangedAttackDamage;
		int ArmorDamageReduction;
	public:
		fragtrap(std::string name);
		~fragtrap();
		int	rangedAttack(std::string const &target);
		int	meleeAttack(std::string const &target);
		int	takeDamage(unsigned int amount);		
		int	beRepaired(unsigned int amount);
		int	vaulthunter_dot_exe(std::string const &target);


};
