#ifndef EX02_FIXED_HPP
#define EX02_FIXED_HPP

#include "iostream"
#include "cmath"

class Fixed {


private:
	static const int	_fraction = 8;
	int					_value;

public:

	Fixed();
	Fixed(const int new_val);
	Fixed(const float new_val);
	Fixed(const Fixed &other);

	Fixed & operator=(const Fixed &other);
	~Fixed();

	bool operator>(Fixed const &other) const;
	bool operator<(Fixed const &other) const;
	bool operator>=(Fixed const &other) const;
	bool operator<=(Fixed const &other) const;
	bool operator==(Fixed const &other) const;
	bool operator!=(Fixed const &other) const;

	Fixed operator+(Fixed const &other);
	Fixed operator-(Fixed const &other);
	Fixed operator*(Fixed const &other);
	Fixed operator/(Fixed const &other);

	Fixed operator++(int);
	Fixed operator++();
	Fixed operator--(int);
	Fixed operator--();

	static Fixed const &min(Fixed const &a, Fixed const &b);
	static Fixed const &max(Fixed const &a, Fixed const &b);
	static Fixed &min(Fixed &a, Fixed &b);
	static Fixed &max(Fixed &a, Fixed &b);

	int getRawBits(void) const;
	void setRawBits(int const raw);
	float toFloat(void) const;
	int toInt(void) const;

};

std::ostream & operator << (std::ostream & o, const Fixed & value);
Fixed const &min(Fixed const &a, Fixed const &b);
Fixed const &max(Fixed const &a, Fixed const &b);
Fixed &min(Fixed &a, Fixed &b);
Fixed &max(Fixed &a, Fixed &b);

#endif //EX02_FIXED_HPP
