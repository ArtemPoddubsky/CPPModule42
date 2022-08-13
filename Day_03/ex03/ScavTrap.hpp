#ifndef EX03_SCAVTRAP_HPP
#define EX03_SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public virtual ClapTrap {


protected:
	int _ScavEnergy;

public:

	ScavTrap();
	ScavTrap(std::string name);
	ScavTrap(const ScavTrap & other);
	ScavTrap & operator = (const ScavTrap & other);
	~ScavTrap();

	void	attack(const std::string& target);
	void	guardGate();
};


#endif //EX03_SCAVTRAP_HPP
