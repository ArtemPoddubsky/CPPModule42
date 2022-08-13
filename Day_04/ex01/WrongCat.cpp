#include "WrongCat.hpp"

WrongCat::WrongCat() {
	std::cout << "WrongCat's default constructor called.\n";
	this->type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat &other) {
	std::cout << "WrongCat's copy constructor called.\n";
	*this = other;
}

WrongCat &WrongCat::operator=(const WrongCat &other) {
	std::cout << "WrongCat's assignment operator called.\n";
	if (this != &other) {
		this->type = other.type;
	}
	return (*this);
}

WrongCat::~WrongCat() {
	std::cout << "WrongCat's destructor called.\n";
}


void WrongCat::makeSound() const {
	std::cout << "Wrong_Meow Wrong_Meow Wrong_Meow\n";
}
