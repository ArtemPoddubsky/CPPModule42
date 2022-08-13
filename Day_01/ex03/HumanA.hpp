#ifndef EX03_HUMANA_HPP
#define EX03_HUMANA_HPP

#include "Weapon.hpp"

class HumanA {


private:

	std::string _name;
	const Weapon &_weapon;

public:

	HumanA(std::string const &name, const Weapon &weapon);
	~HumanA();
	void		attack(void) const;

};

#endif //EX03_HUMANA_HPP
