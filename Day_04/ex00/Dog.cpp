#include "Dog.hpp"

Dog::Dog() {
	std::cout << "Dog's default constructor called.\n";
	this->type = "Dog";
}

Dog::Dog(const Dog &other) {
	std::cout << "Dog's copy constructor called.\n";
	*this = other;
}

Dog &Dog::operator=(const Dog &other) {
	std::cout << "Dog's assignment operator called.\n";
	if (this != &other) {
		this->type = other.type;
	}
	return (*this);
}

Dog::~Dog() {
	std::cout << "Dog's destructor called.\n";
}

void Dog::makeSound() const {
	std::cout << "Bark Bark Bark\n";
}