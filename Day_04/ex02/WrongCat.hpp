#ifndef DAY_4_WRONGCAT_HPP
#define DAY_4_WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {


public:

	WrongCat();
	WrongCat(const WrongCat & other);
	WrongCat & operator=(const WrongCat & other);
	~WrongCat();

	void	makeSound() const;

};


#endif //DAY_4_WRONGCAT_HPP
