#ifndef DAY_4_WRONGANIMAL_HPP
#define DAY_4_WRONGANIMAL_HPP

#include "iostream"

class WrongAnimal {


protected:
	std::string	type;

public:

	WrongAnimal();
	WrongAnimal(const WrongAnimal & other);
	WrongAnimal & operator=(const WrongAnimal & other);
	~WrongAnimal();

	std::string const	&getType(void) const;
	void		makeSound() const;
};


#endif //DAY_4_WRONGANIMAL_HPP
