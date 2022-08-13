#include "Brain.hpp"

Brain::Brain() {
	std::cout << "Brain's constructor called.\n";
	for (int i = 0; i < 100; i++) {
		this->ideas[i] = "Idea";
	}
}

Brain::Brain(const Brain &other) {
	std::cout << "Brain's copy constructor called.\n";
	for (int i = 0; i < 100; i++) {
		this->ideas[i] = other.ideas[i];
	}
}

Brain &Brain::operator=(const Brain &other) {
	std::cout << "Brain's assignment operator called.\n";
	if (this != &other) {
		for (int i = 0; i < 100; i++) {
			this->ideas[i] = other.ideas[i];
		}
	}
	return (*this);
}

Brain::~Brain() {
	std::cout << "Brain's destructor called.\n";
}