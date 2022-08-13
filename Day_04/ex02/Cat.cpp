#include "Cat.hpp"

Cat::Cat() {
	std::cout << "Cat's default constructor called.\n";
	this->type = "Cat";
	this->_brain = new Brain();
}

Cat::Cat(const Cat &other) : Animal(), _brain(nullptr) {
	std::cout << "Cat's copy constructor called.\n";
	*this = other;
}

Cat &Cat::operator=(const Cat &other) {
	std::cout << "Cat's assignment operator called.\n";
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

Cat::~Cat() {
	std::cout << "Cat's destructor called.\n";
	if (this->_brain != nullptr)
		delete _brain;
}


void Cat::makeSound() const {
	std::cout << "Meow Meow Meow\n";
}