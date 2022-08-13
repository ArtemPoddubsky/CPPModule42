#ifndef EX01_ANIMAL_HPP
#define EX01_ANIMAL_HPP

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
	virtual ~Animal();

	virtual const std::string&	getType() const;
	virtual void				makeSound() const;

};


#endif //EX01_ANIMAL_HPP
