#pragma once
#include "FragTrap.hpp"


class ScavTrap{

	private:
		int HitPoints;
		int MaxHitPoint;
		int EnergyPoints;
		int MaxEnergyPoint;
		int Level;
		int MeleeAttackDamage;
		int RangedAttackDamage;
		int ArmorDamageReduction;
		std::string name;
	
	public:

		ScavTrap(std::string name);
		~ScavTrap();
		//int Attack();
		int	rangedAttack(std::string const &target);
		int	meleeAttack(std::string const &target);
		int	takeDamage(unsigned int amount);		
		int	beRepaired(unsigned int amount);
		void	challengeNewcomer();	

			

};
