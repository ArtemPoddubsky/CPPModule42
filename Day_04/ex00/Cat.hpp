#ifndef DAY_4_CAT_HPP
#define DAY_4_CAT_HPP

#include "Animal.hpp"

class Cat : public Animal {


public:

	Cat();
	Cat(const Cat & other);
	Cat & operator=(const Cat & other);
	~Cat();

	virtual void	makeSound() const;

};


#endif //DAY_4_CAT_HPP
