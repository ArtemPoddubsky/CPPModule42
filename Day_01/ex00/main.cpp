#include "Zombie.hpp"

int main()
{
	Zombie A(std::string ("A"));
	A.announce();

	Zombie *B = newZombie("B");
	B->announce();

	randomChump("Brian");

	delete B;
	return (0);
}
