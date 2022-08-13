#ifndef EX03_DIAMONDTRAP_HPP
#define EX03_DIAMONDTRAP_HPP

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap {


private:
	std::string _name;

public:

	DiamondTrap();
	DiamondTrap(std::string name);
	DiamondTrap(DiamondTrap const & other);
	DiamondTrap & operator=(const DiamondTrap & other);
	~DiamondTrap();

	void attack(const std::string& target);

	void whoAmI();

};


#endif //EX03_DIAMONDTRAP_HPP
