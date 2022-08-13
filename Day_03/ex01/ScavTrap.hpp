#ifndef EX01_SCAVTRAP_HPP
#define EX01_SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {


public:
	ScavTrap();
	ScavTrap(std::string name);
	ScavTrap(const ScavTrap & other);
	ScavTrap & operator = (const ScavTrap & other);
	~ScavTrap();

	void	attack(const std::string& target);
	void	guardGate();
};


#endif //EX01_SCAVTRAP_HPP
