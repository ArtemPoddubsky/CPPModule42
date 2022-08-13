#ifndef CONTACT_CLASS_HPP
#define CONTACT_CLASS_HPP

#include "PhoneBook_Class.hpp"

class Contact {


private:

	int	index;
	std::string info[5];

public:


	Contact();
	~Contact();
	void set_info(int num);
	void display_full(int num_fields) const;
	void display_one() const;

};


#endif
