#include "../headers/PhoneBook_Class.hpp"

PhoneBook::PhoneBook() {
	this->amount = 0;
}

PhoneBook::~PhoneBook() {
}

void PhoneBook::add_contact() {
	this->contacts[this->amount % 8].set_info(this->amount % 8);
	this->amount++;
}

void PhoneBook::display_book() const {

	std::cout << YELLOW << "     Index|First Name| Last Name|  Nickname|" << END << std::endl;
	int limit = (this->amount >= 8) ? 8 : this->amount;
	int i = 0;
	while (i < limit)
	{
		this->contacts[i].display_full(2);
		i++;
	}
}

void PhoneBook::search_contact() const {

	std::string input;
	int			which;

	if (!this->amount)
	{
		std::cout << RED << "The phonebook is empty!" << END << std::endl;
		return ;
	}
	this->display_book();
	while (true)
	{
		std::cout << MAGENTA << "Enter index from 1 to 8, or 0 to exit: " << END;
		std::cin >> input;
		which = input[0] - '0';
		if (!which && input.length() == 1)
			return;
		int limit = (this->amount >= 8) ? 8 : this->amount;
		if (which < 0 || which > limit || input.length() != 1)
			std::cout << RED << "Wrong index value." << END << std::endl;
		else
			contacts[which - 1].display_one();
	}
}