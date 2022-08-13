#include "Dog.hpp"

Dog::Dog() {
	std::cout << "Dog's default constructor called.\n";
	this->type = "Dog";
	this->_brain = new Brain();
}

Dog::Dog(const Dog &other) : Animal(), _brain(nullptr) {
	std::cout << "Dog's copy constructor called.\n";
	*this = other;
}

Dog &Dog::operator=(const Dog &other) {
	std::cout << "Dog's assignment operator called.\n";
	if (this != &other) {
		this->type = other.type;
		if (this->_brain != nullptr)
			delete this->_brain;
		this->_brain = new Brain();
		for (int i = 0; i < 100; i++) {
			this->_brain->ideas[i] = other._brain->ideas[i];
		}
	}
	return (*this);
}

Dog::~Dog() {
	std::cout << "Dog's destructor called.\n";
	if (this->_brain != nullptr)
		delete _brain;
}

void Dog::makeSound() const {
	std::cout << "Bark Bark Bark\n";
}