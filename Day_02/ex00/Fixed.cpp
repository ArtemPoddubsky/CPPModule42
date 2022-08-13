#include "Fixed.hpp"

Fixed::Fixed() {
	std::cout << "Default constructor called\n";
	this->_value = 0;
}

Fixed::Fixed(const Fixed &other) {
	std::cout << "Copy constructor called\n";
	*this = other;
}

Fixed &Fixed::operator=(const Fixed &other) {
	std::cout << "Copy assignment operator called\n";
	this->_value = other.getRawBits();
	return *this;
}

Fixed::~Fixed() {
	std::cout << "Destructor called\n";
}

int Fixed::getRawBits() const {
	std::cout << "getRawBits member function called\n";
	return this->_value;
}

void Fixed::setRawBits(const int raw) {
	this->_value = raw;
}