#include "Fixed.hpp"

Fixed::Fixed() {
	std::cout << "Default constructor called\n";
	this->_value = 0;
}

Fixed::Fixed(const int new_val) {
	std::cout << "Int constructor called" << std::endl;
	this->_value = new_val << _fraction;
}

Fixed::Fixed(const float new_val) {
	std::cout << "Float constructor called" << std::endl;
	this->_value = roundf(new_val * (1 << _fraction));
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

float Fixed::toFloat() const {
	return (float)this->_value / (1 << _fraction);
}

int Fixed::toInt() const {
	return this->_value >> _fraction;
}

int Fixed::getRawBits() const {
	return this->_value;
}

void Fixed::setRawBits(const int raw) {
	this->_value = raw;
}

Fixed::~Fixed() {
	std::cout << "Destructor called\n";
}

std::ostream & operator << (std::ostream &o, const Fixed &other)
{
	o << other.toFloat();
	return o;
}
