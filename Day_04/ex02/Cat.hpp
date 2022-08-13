#ifndef DAY_4_CAT_HPP
#define DAY_4_CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal {

private:
	Brain*	_brain;

public:

	Cat();
	Cat(const Cat & other);
	Cat & operator=(const Cat & other);
	virtual ~Cat();

	virtual void	makeSound() const;

};


#endif //DAY_4_CAT_HPP
