#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
//	ScavTrap C;
	ClapTrap A("Clap");
	ScavTrap C("Scav");

	C.guardGate();
	C.attack("Clap");
	A.takeDamage(A.getSmbsAttackDamage(C));

	return (0);
}