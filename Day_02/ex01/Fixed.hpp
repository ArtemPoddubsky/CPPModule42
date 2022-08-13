#ifndef EX01_FIXED_HPP
#define EX01_FIXED_HPP

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
	Fixed & operator = (const Fixed &other);
	~Fixed();

	int getRawBits(void) const;
	void setRawBits(int const raw);
	float toFloat(void) const;
	int toInt(void) const;

};

std::ostream & operator << (std::ostream & o, const Fixed & value);

#endif //EX01_FIXED_HPP
