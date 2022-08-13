#ifndef DAY_4_BRAIN_HPP
#define DAY_4_BRAIN_HPP

#include "iostream"

class Brain {

public:
	std::string	ideas[100];
	Brain();
	Brain(const Brain & other);
	Brain & operator=(const Brain & other);
	~Brain();
};


#endif //DAY_4_BRAIN_HPP
