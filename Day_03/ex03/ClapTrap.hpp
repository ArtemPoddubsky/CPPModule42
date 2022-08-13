#ifndef EX03_CLAPTRAP_HPP
#define EX03_CLAPTRAP_HPP

#include "iostream"

#define RED "\033[1;31m"
#define END "\033[0m"

class ClapTrap {


protected:

	std::string _name;
	int _HitPoints;
	int _EnergyPoints;
	int _AttackDamage;

public:

	ClapTrap();
	ClapTrap(std::string name);
	ClapTrap(const ClapTrap & other);
	ClapTrap & operator = (const ClapTrap & other);
	~ClapTrap();

	virtual void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);

	int getHitPoints();
	int	getEnergyPoints();
	int getAttackDamage();
};


#endif //EX03_CLAPTRAP_HPP
