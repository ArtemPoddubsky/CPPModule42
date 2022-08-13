#include "Cat.hpp"

Cat::Cat() {
	std::cout << "Cat's default constructor called.\n";
	this->type = "Cat";
}

Cat::Cat(const Cat &other) {
	std::cout << "Cat's copy constructor called.\n";
	*this = other;
}

Cat &Cat::operator=(const Cat &other) {
	std::cout << "Cat's assignment operator called.\n";
	if (this != &other) {
		this->type = other.type;
	}
	return (*this);
}

Cat::~Cat() {
	std::cout << "Cat's destructor called.\n";
}


void Cat::makeSound() const {
	std::cout << "Meow Meow Meow\n";
}