#include "ClapTrap.hpp"

ClapTrap::ClapTrap() {
	std::cout << "Default constructor called.\n";
	this->_HitPoints = 10;
	this->_EnergyPoints = 10;
	this->_AttackDamage = 0;
}

ClapTrap::ClapTrap(std::string name) : _name(name) {
	std::cout << "Name constructor called.\n";
	this->_HitPoints = 10;
	this->_EnergyPoints = 10;
	this->_AttackDamage = 0;
}

ClapTrap::ClapTrap(const ClapTrap &other){
	std::cout << "Copy constructor called.\n";
	*this = other;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &other) {
	std::cout << "Copy assignment operator called.\n";
	if (this != &other)
	{
		this->_HitPoints = other._HitPoints;
		this->_EnergyPoints = other._EnergyPoints;
		this->_AttackDamage = other._AttackDamage;
		this->_name = other._name;
	}
	return *this;
}

ClapTrap::~ClapTrap() {
	std::cout << "Destructor called.\n";
}

void ClapTrap::attack(const std::string &target) {
	std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing ";
	std::cout << this->_AttackDamage << " points of damage!\n";
	this->_EnergyPoints -= 1;
}

void ClapTrap::takeDamage(unsigned int amount) {
	if (this->_HitPoints - amount > 0) {
		this->_HitPoints -= amount;
		std::cout << this->_name << " takes damage for "<< amount << " HitPoints.\n";
	}
	else {
		this->_HitPoints = 0;
		std::cout << this->_name << " is already out if HitPoints.\n";
	}
}

void ClapTrap::beRepaired(unsigned int amount) {
	if (this->_EnergyPoints > 0)
	{
		this->_HitPoints += amount;
		this->_EnergyPoints -= 1;
		std::cout << "ClapTrap "  << this->_name << " restored " << amount << " HitPoints.\n";
	}
	else
		std::cout << "ClapTrap "  << this->_name << " couldn't restore HitPoints, because it's EnergyPoints were spent.\n";
}

int ClapTrap::getHitPoints() {
	return this->_HitPoints;
}

int ClapTrap::getEnergyPoints() {
	return this->_EnergyPoints;
}
