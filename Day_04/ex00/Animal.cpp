#include "Animal.hpp"

Animal::Animal() : type("Animal") {
	std::cout << "Animal's default constructor called.\n";
}

Animal::Animal(const Animal &other) {
	std::cout << "Animal's copy constructor called.\n";
	*this = other;
}

Animal &Animal::operator=(const Animal &other) {
	std::cout << "Animal's assignment operator called.\n";
	if (this != &other) {
		this->type = other.type;
	}
	return (*this);
}

Animal::~Animal() {
	std::cout << "Animal's destructor called.\n";
}



const std::string &Animal::getType() const {
	return this->type;
}

void Animal::makeSound() const {
	std::cout << this->getType() << " is making sound..." << std::endl;
}