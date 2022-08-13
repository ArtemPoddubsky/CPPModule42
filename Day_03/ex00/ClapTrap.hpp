#ifndef EX00_CLAPTRAP_HPP
#define EX00_CLAPTRAP_HPP

#include "iostream"

class ClapTrap {


private:

	std::string _name;
	int _HitPoints;
	int _EnergyPoints;
	int _AttackDamage;

public:

	ClapTrap();
	ClapTrap(std::string name);
	ClapTrap(const ClapTrap & other);
	~ClapTrap();
	ClapTrap & operator = (const ClapTrap & other);

	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);

	int getHitPoints();
	int	getEnergyPoints();
};


#endif //EX00_CLAPTRAP_HPP
