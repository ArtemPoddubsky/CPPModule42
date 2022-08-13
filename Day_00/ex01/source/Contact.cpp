#include "../headers/PhoneBook_Class.hpp"

Contact::Contact() {
	this->index = 0;
}

Contact::~Contact() {
}

void Contact::set_info(int num) {
	std::string fields[5] = {
			"First Name",
			"Last Name",
			"Nickname",
			"Phone number",
			"Darkest secret"
	};
	this->index = num;
	for (int i = 0; i <= FIELD_SIZE; i++) {
		std::cout << MAGENTA << "Enter " << fields[i] << ": " << END;
		std::cin >> this->info[i];
	}
}

void Contact::display_one() const
{
	std::string fields[5] = {
			"First Name",
			"Last Name",
			"Nickname",
			"Phone number",
			"Darkest secret"
	};
	for (int i = 0; i <= FIELD_SIZE; i++) {
		std::cout << BLUE << fields[i] << ": " << END;
		std::cout << this->info[i] << "\n";
	}
}

void Contact::display_full(int num_fields) const {

	std::cout << "         " << this->index + 1 << "|";
	for (int i = 0; i <= num_fields; i++)
	{
		size_t len = this->info[i].length();
		if (len > 10)
		{
			int count = -1;
			while (++count < 9)
				std::cout << this->info[i][count];
			std::cout << ".|";
		}
		else
		{
			int spaces = 10 - (int)len;
			while (spaces > 0)
			{
				std::cout << " ";
				spaces--;
			}
			std::cout << this->info[i] << "|";
		}
	}
	std::cout << std::endl;
}

