#include "Fixed.hpp"

Fixed::Fixed() {
//	std::cout << "Default constructor called\n";
	this->_value = 0;
}

Fixed::Fixed(const int new_val) {
//	std::cout << "Int constructor called" << std::endl;
	this->_value = new_val << _fraction;
}

Fixed::Fixed(const float new_val) {
//	std::cout << "Float constructor called" << std::endl;
	this->_value = roundf(new_val * (1 << _fraction));
}

Fixed::Fixed(const Fixed &other) {
//	std::cout << "Copy constructor called\n";
	*this = other;
}

Fixed &Fixed::operator=(const Fixed &other) {
//	std::cout << "Copy assignment operator called\n";
	this->_value = other.getRawBits();
	return *this;
}

bool Fixed::operator>(Fixed const &other) const
{
	return (this->getRawBits() > other.getRawBits());
}

bool Fixed::operator<(Fixed const &other) const
{
	return (this->getRawBits() < other.getRawBits());
}

bool Fixed::operator>=(Fixed const &other) const
{
	return (this->getRawBits() >= other.getRawBits());
}

bool Fixed::operator<=(Fixed const &other) const
{
	return (this->getRawBits() <= other.getRawBits());
}

bool Fixed::operator==(Fixed const &other) const
{
	return (this->getRawBits() == other.getRawBits());
}

bool Fixed::operator!=(Fixed const &other) const
{
	return (this->getRawBits() != other.getRawBits());
}

Fixed Fixed::operator+(const Fixed &other) {
	Fixed val(*this);

	val.setRawBits(this->getRawBits() + other.getRawBits());
	return (val);
}

Fixed Fixed::operator-(Fixed const &other)
{
	Fixed val(*this);

	val.setRawBits(this->getRawBits() - other.getRawBits());
	return (val);
}

Fixed Fixed::operator*(Fixed const &other)
{
	Fixed val(*this);
	long tmp1, tmp2;

	tmp1 = ((long)this->getRawBits());
	tmp2 = ((long)other.getRawBits());
	val.setRawBits((tmp1 * tmp2) / (1 << Fixed::_fraction));
	return (val);
}

Fixed Fixed::operator/(Fixed const &other)
{
	Fixed val(*this);
	long tmp1, tmp2;

	tmp1 = ((long)this->getRawBits());
	tmp2 = ((long)other.getRawBits());
	val.setRawBits((tmp1 * (1 << Fixed::_fraction)) / tmp2);
	return (val);
}

Fixed Fixed::operator++()
{
	this->_value++;
	return (*this);
}

Fixed Fixed::operator++(int)
{
	Fixed tmp(*this);
	operator++();
	return (tmp);
}

Fixed Fixed::operator--()
{
	this->_value--;
	return (*this);
}

Fixed Fixed::operator--(int)
{
	Fixed tmp(*this);
	operator--();
	return (tmp);
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
//	std::cout << "Destructor called\n";
}

std::ostream & operator << (std::ostream &o, const Fixed &other)
{
	o << other.toFloat();
	return o;
}

Fixed const &Fixed::min(Fixed const &a, Fixed const &b)
{
	if (a > b)
		return (b);
	return (a);
}

Fixed &Fixed::min(Fixed &a, Fixed &b)
{
	if (a > b)
		return (b);
	return (a);
}

Fixed const &min(Fixed const &a, Fixed const &b)
{
	return (Fixed::min(a, b));
}

Fixed &min(Fixed &a, Fixed &b)
{
	return (Fixed::min(a, b));
}

Fixed const &Fixed::max(Fixed const &a, Fixed const &b)
{
	if (a > b)
		return (a);
	return (b);
}

Fixed &Fixed::max(Fixed &a, Fixed &b)
{
	if (a > b)
		return (a);
	return (b);
}

Fixed const &max(Fixed const &a, Fixed const &b)
{
	return (Fixed::max(a, b));
}

Fixed &max(Fixed &a, Fixed &b)
{
	return (Fixed::max(a, b));
}
