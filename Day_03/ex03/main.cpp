#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main()
{
	DiamondTrap D("Diamonds");
	std::cout << RED;
	D.whoAmI();
	std::cout << D.getHitPoints() << "\n";
	std::cout << D.getEnergyPoints() << "\n";
	std::cout << D.getAttackDamage() << "\n";
	std::cout << END;

	return (0);
}