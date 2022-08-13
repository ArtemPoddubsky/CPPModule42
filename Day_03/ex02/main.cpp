#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
//	ScavTrap B;
	ClapTrap A("Clap");
	FragTrap B("Frag");

	B.attack("Clap");
	A.takeDamage(A.getSmbsAttackDamage(B));

	B.highFivesGuys();
	return (0);
}