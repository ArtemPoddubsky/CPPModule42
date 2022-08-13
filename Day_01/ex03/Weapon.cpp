#include "Weapon.hpp"

Weapon::Weapon(std::string name) {
	_type = name;
}

Weapon::~Weapon() {
}

void Weapon::setType(const std::string &type) {
	_type = type;
}

const std::string &Weapon::getType() const {
	return this->_type;
}
