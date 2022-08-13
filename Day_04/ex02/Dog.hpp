#ifndef DAY_4_DOG_HPP
#define DAY_4_DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal {


private:
	Brain*	_brain;

public:

	Dog();
	Dog(const Dog & other);
	Dog & operator=(const Dog & other);
	virtual ~Dog();

	virtual void	makeSound() const;

};


#endif //DAY_4_DOG_HPP
