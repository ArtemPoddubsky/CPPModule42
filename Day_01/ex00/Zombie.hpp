#ifndef EX_00_ZOMBIE_H
#define EX_00_ZOMBIE_H

#include "iostream"

class Zombie {


private:

	std::string	_name;

public:

	Zombie();
	Zombie(std::string name);
	~Zombie();
	void		announce(void);


};

Zombie*		newZombie(std::string name);
void		randomChump(std::string name);

#endif //EX_00_ZOMBIE_H
