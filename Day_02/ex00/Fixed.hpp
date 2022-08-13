#ifndef EX00_FIXED_HPP
#define EX00_FIXED_HPP

#include "iostream"

class Fixed {


private:

	static const int	_fraction = 8;
	int					_value;

public:

	Fixed();
	Fixed(const Fixed& other);
	Fixed& operator = (const Fixed& other);
	~Fixed();

	int getRawBits(void) const;
	void setRawBits(int const raw);

};


#endif //EX00_FIXED_HPP
