#ifndef PHONEBOOK_CLASS_HPP
#define PHONEBOOK_CLASS_HPP

#define BOOK_SIZE 8
#define FIELD_SIZE 4
#define RED "\033[1;31m"
#define GREEN "\033[1;32m"
#define YELLOW "\033[1;33m"
#define BLUE "\033[34m"
#define MAGENTA "\033[1;35m"
#define END "\033[0m"

#include "iostream"
#include <string>
#include "Contact_Class.hpp"

class PhoneBook {


private:

	int 		amount;
	Contact		contacts[BOOK_SIZE];
	void 		display_book() const;

public:

	PhoneBook();
	~PhoneBook();
	void		add_contact();
	void		search_contact() const;


};


#endif
