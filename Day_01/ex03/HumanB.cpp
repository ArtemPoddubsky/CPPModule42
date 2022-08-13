#include "HumanB.hpp"

HumanB::HumanB(const std::string &name): _name(name) {
}

HumanB::~HumanB() {
}

void HumanB::attack() const {
	if (this->_weapon)
		std::cout << this->_name << " attacks with their " << this->_weapon->getType() << "\n";
	else
		std::cout << this->_name << " doesn't have a weapon." << std::endl;
}

void HumanB::setWeapon(Weapon &weapon1) {
	this->_weapon = &weapon1;
}
