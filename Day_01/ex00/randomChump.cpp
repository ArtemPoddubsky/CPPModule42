#include "Zombie.hpp"

void		randomChump(std::string name)
{
	Zombie creature(name);
	creature.announce();
}
