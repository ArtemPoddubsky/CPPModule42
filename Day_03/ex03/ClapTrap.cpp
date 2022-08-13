#include "ClapTrap.hpp"

ClapTrap::ClapTrap() {
	std::cout << "Default Claptrap constructor called.\n";
	this->_HitPoints = 10;
	this->_EnergyPoints = 10;
	this->_AttackDamage = 0;
}

ClapTrap::ClapTrap(std::string name) : _name(name) {
	std::cout << "ClapTrap's Name constructor called.\n";
	this->_HitPoints = 10;
	this->_EnergyPoints = 10;
	this->_AttackDamage = 0;
}

ClapTrap::ClapTrap(const ClapTrap &other){
	std::cout << "ClapTrap's Copy constructor called.\n";
	*this = other;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &other) {
	std::cout << "ClapTrap's Copy assignment operator called.\n";
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
	std::cout << "ClapTrap's Destructor called.\n";
}

void ClapTrap::attack(const std::string &target) {
	std::cout << RED << "ClapTrap " << this->_name << " attacks " << target << ", causing ";
	std::cout << this->_AttackDamage << " points of damage!" << END << std::endl;
	this->_EnergyPoints -= 1;
}

void ClapTrap::takeDamage(unsigned int amount) {
	if (this->_HitPoints - amount > 0) {
		this->_HitPoints -= amount;
		std::cout << RED << this->_name << " takes damage for "<< amount << " HitPoints." << END << std::endl;
	}
	else {
		this->_HitPoints = 0;
		std::cout << RED << this->_name << " is already out if HitPoints." << END << std::endl;
	}
}

void ClapTrap::beRepaired(unsigned int amount) {
	if (this->_EnergyPoints > 0)
	{
		this->_HitPoints += amount;
		this->_EnergyPoints -= 1;
		std::cout << RED << "ClapTrap "  << this->_name << " restored " << amount << " HitPoints." << END << std::endl;
	}
	else
		std::cout << RED << "ClapTrap "  << this->_name << " couldn't restore HitPoints, because it's EnergyPoints were spent." << END << std::endl;
}

int ClapTrap::getHitPoints() {
	return this->_HitPoints;
}

int ClapTrap::getEnergyPoints() {
	return this->_EnergyPoints;
}

int ClapTrap::getAttackDamage() {
	return this->_AttackDamage;
}
