#include "FragTrap.hpp"

FragTrap::FragTrap() {
	std::cout << "Default FragTrap constructor called.\n";
	this->_HitPoints = 100;
	this->_EnergyPoints = 100;
	this->_AttackDamage = 30;
	this->_FragAttack = 30;
	this->_FragHit = 100;
}

FragTrap::FragTrap(std::string name) {
	std::cout << "FragTrap's Name constructor called.\n";
	this->_name = name;
	this->_HitPoints = 100;
	this->_EnergyPoints = 100;
	this->_AttackDamage = 30;
	this->_FragAttack = 30;
	this->_FragHit = 100;
}

FragTrap::FragTrap(const FragTrap &other) {
	std::cout << "FragTrap's Copy constructor called.\n";
	*this = other;
}

FragTrap &FragTrap::operator=(const FragTrap &other) {
	std::cout << "FragTrap's Copy assignment operator called.\n";
	if (this != &other)
	{
		this->_HitPoints = other._HitPoints;
		this->_EnergyPoints = other._EnergyPoints;
		this->_AttackDamage = other._AttackDamage;
		this->_name = other._name;
		this->_FragAttack = 30;
		this->_FragHit = 100;
	}
	return *this;
}

FragTrap::~FragTrap() {
	std::cout << "FragTrap's Destructor called.\n";
}

void FragTrap::attack(const std::string &target) {
	std::cout << RED << "FragTrap " << this->_name << " attacks " << target << ", causing ";
	std::cout << this->_AttackDamage << " points of damage!" << END << std::endl;
	this->_EnergyPoints -= 1;
}

void FragTrap::highFivesGuys() {
	std::cout << RED << "FragTrap sends ✋ " << END << std::endl;
}