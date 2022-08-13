#include "../headers/PhoneBook_Class.hpp"

int	main()
{
	PhoneBook	phoneBook;
	std::string input;

	while (true)
	{
		std::cout << GREEN <<"$$$ " << END;
		std::cin >> input;
		if (input == "ADD")
			phoneBook.add_contact();
		else if (input == "SEARCH")
			phoneBook.search_contact();
		else if (input == "EXIT")
		{
			std::cout << GREEN << "Goodbye." << END << std::endl;
			break ;
		}
		else
			std::cout << RED << "Invalid argument." << END << std::endl;
	}
	return (0);
}

// ADD 1 1 1 1 1 ADD 2 2 2 2 2 ADD 3 3 3 3 3 ADD 4 4 4 4 4 ADD 5 5 5 5 5 ADD 6 6 6 6 6 ADD 7 7 7 7 7