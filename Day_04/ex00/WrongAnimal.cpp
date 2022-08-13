#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() {
	std::cout << "WrongAnimal's default constructor called.\n";
	this->type = "WrongAnimal";
}

WrongAnimal::WrongAnimal(const WrongAnimal &other) {
	std::cout << "WrongAnimal's copy constructor called.\n";
	*this = other;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &other) {
	std::cout << "WrongAnimal's assignment operator called.\n";
	if (this != &other) {
		this->type = other.type;
	}
	return (*this);
}

WrongAnimal::~WrongAnimal() {
	std::cout << "WrongAnimal's destructor called.\n";
}



const std::string &WrongAnimal::getType() const {
	return this->type;
}

void WrongAnimal::makeSound() const {
	std::cout << this->getType() << " is making wrong_sound..." << std::endl;
}
