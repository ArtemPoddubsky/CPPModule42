#ifndef EX03_WEAPON_HPP
#define EX03_WEAPON_HPP

#include "iostream"

class Weapon {


private:
	std::string _type;

public:
	Weapon(std::string name);
	~Weapon();
	void				setType(std::string const &type);
	std::string const	&getType(void) const;


};

#endif //EX03_WEAPON_HPP
