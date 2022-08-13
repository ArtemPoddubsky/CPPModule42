#include "ScavTrap.hpp"

ScavTrap::ScavTrap() {
	std::cout << "Default Scavtrap constructor called.\n";
	this->_HitPoints = 100;
	this->_EnergyPoints = 50;
	this->_AttackDamage = 20;
	this->_ScavEnergy = 50;
}

ScavTrap::ScavTrap(std::string name) {
	std::cout << "ScavTrap's Name constructor called.\n";
	this->_name = name;
	this->_HitPoints = 100;
	this->_EnergyPoints = 50;
	this->_AttackDamage = 20;
	this->_ScavEnergy = 50;
}

ScavTrap::ScavTrap(const ScavTrap &other) {
	std::cout << "ScavTrap's Copy constructor called.\n";
	*this = other;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &other) {
	std::cout << "ScavTrap's Copy assignment operator called.\n";
	if (this != &other)
	{
		this->_HitPoints = other._HitPoints;
		this->_EnergyPoints = other._EnergyPoints;
		this->_AttackDamage = other._AttackDamage;
		this->_name = other._name;
		this->_ScavEnergy = other._ScavEnergy;
	}
	return *this;
}

ScavTrap::~ScavTrap() {
	std::cout << "ScavTrap's Destructor called.\n";
}

void ScavTrap::attack(const std::string &target) {
	std::cout << RED << "ScavTrap " << this->_name << " attacks " << target << ", causing ";
	std::cout << this->_AttackDamage << " points of damage!" << END << std::endl;
	this->_EnergyPoints -= 1;
}

void ScavTrap::guardGate() {
	std::cout << RED << "ScavTrap is in Gate Keeper mode now." << END << std::endl;
}
