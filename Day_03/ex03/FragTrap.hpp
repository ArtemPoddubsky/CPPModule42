#ifndef EX03_FRAGTRAP_HPP
#define EX03_FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public virtual ClapTrap {


protected:
	int _FragHit;
	int	_FragAttack;

public:

	FragTrap();
	FragTrap(std::string name);
	FragTrap(const FragTrap & other);
	FragTrap & operator = (const FragTrap & other);
	~FragTrap();

	void attack(const std::string& target);
	void highFivesGuys(void);

};


#endif //EX03_FRAGTRAP_HPP
