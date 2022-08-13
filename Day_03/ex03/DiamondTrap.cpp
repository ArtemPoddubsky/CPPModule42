#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() {
	std::cout << "DiamondTrap default constructor called.\n";
	this->_HitPoints = FragTrap::_FragHit;
	this->_AttackDamage = FragTrap::_FragAttack;
	this->_EnergyPoints = ScavTrap::_ScavEnergy;
}

DiamondTrap::DiamondTrap(std::string name) {
	std::cout << "DiamondTrap Name constructor called.\n";
	ClapTrap::_name = name + "_clap_name";
	this->_name = name;
	this->_HitPoints = FragTrap::_FragHit;
	this->_AttackDamage = FragTrap::_FragAttack;
	this->_EnergyPoints = ScavTrap::_ScavEnergy;
}

DiamondTrap::DiamondTrap(const DiamondTrap &other) {
	std::cout << "DiamondTrap copy constructor called.\n";
	*this = other;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &other) {
	std::cout << "DiamondTrap assignment operator called.\n";
	if (this != &other) {
		this->_HitPoints = other._HitPoints;
		this->_EnergyPoints = other._EnergyPoints;
		this->_AttackDamage = other._AttackDamage;
		this->_name = other._name;
	}
	return *this;
}

DiamondTrap::~DiamondTrap() {
	std::cout << "DiamondTrap destructor called.\n";
}

void DiamondTrap::attack(const std::string &target) {
	ScavTrap::attack(target);
}

void DiamondTrap::whoAmI() {
	std::cout << "My name is " << this->_name;
	std::cout << " and my grandparent's name is " << ClapTrap::_name << std::endl;
}