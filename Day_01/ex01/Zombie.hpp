#ifndef EX01_ZOMBIE_H
#define EX01_ZOMBIE_H

#include "iostream"

class Zombie {


private:

	std::string	_name;

public:

	Zombie();
	Zombie(std::string name);
	~Zombie();
	void		announce();


};

Zombie* zombieHorde( int N, std::string name );

#endif //EX01_ZOMBIE_H
