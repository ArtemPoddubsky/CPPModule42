#include "ClapTrap.hpp"

int main()
{
	ClapTrap A("John");
	ClapTrap B("Harry");
	A.attack("Harry");
	B.takeDamage(1);
	std::cout << "John's Energy: " << A.getEnergyPoints() << "\n";
	B.beRepaired(2);
	std::cout << "Harry's HitPoints: " << B.getHitPoints() << "\n";
	std::cout << "Harry's Energy: " << B.getEnergyPoints() << "\n";
	return (0);
}