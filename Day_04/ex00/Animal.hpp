#ifndef EX00_ANIMAL_HPP
#define EX00_ANIMAL_HPP

#include "iostream"

#define RED "\033[1;31m"
#define END "\033[0m"

class Animal {


protected:
	std::string type;

public:

	Animal();
	Animal(const Animal & other);
	Animal & operator=(const Animal & other);
	~Animal();

	std::string const	&getType(void) const;
	virtual void		makeSound() const;

};


#endif //EX00_ANIMAL_HPP
