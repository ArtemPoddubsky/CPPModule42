#ifndef DAY_4_DOG_HPP
#define DAY_4_DOG_HPP

#include "Animal.hpp"

class Dog : public Animal {


public:

	Dog();
	Dog(const Dog & other);
	Dog & operator=(const Dog & other);
	~Dog();

	virtual void	makeSound() const;

};


#endif //DAY_4_DOG_HPP
