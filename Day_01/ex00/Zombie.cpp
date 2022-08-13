#include "Zombie.hpp"

Zombie::Zombie() {
}

Zombie::Zombie(std::string name): _name(name) {
}

Zombie::~Zombie() {
	std::cout << _name << ": died of hunger.\n";
}

void Zombie::announce() {
	std::cout << _name << ": BraiiiiiiinnnzzzZ...\n";
}