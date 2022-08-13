#ifndef EX03_HUMANB_HPP
#define EX03_HUMANB_HPP

#include "Weapon.hpp"

class HumanB {


private:

	std::string		_name;
	const Weapon	*_weapon;

public:

	HumanB(std::string const &name);
	~HumanB();
	void		attack(void) const;
	void		setWeapon(Weapon &weapon1);

};

#endif //EX03_HUMANB_HPP
