#include "Karen.hpp"

void Karen::debug() {
	std::cout << "[ DEBUG ]\n" << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!\n\n";
}

void Karen::info() {
	std::cout << "[ INFO ]\n" << "I cannot believe adding extra bacon costs more money. "
				 "You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!\n\n";
}

void Karen::warning() {
	std::cout << "[ WARNING ]\n" << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month.\n\n";
}

void Karen::error() {
	std::cout << "[ ERROR ]\n" << "This is unacceptable! I want to speak to the manager now.\n\n";
}

static const std::string levels[] = {
		"DEBUG",
		"INFO",
		"WARNING",
		"ERROR"
};

static int	getlevel(std::string level) {
	int	i = 0;
	while (i < 4) {
		if (level == levels[i])
			return (i);
		i++;
	}
	return (i);
}

void Karen::complain(std::string level)
{
	switch (getlevel(level)) {
		default:
			std::cout << "[ Probably complaining about insignificant problems ]\n";
			break ;
		case (0):
			debug();
		case (1):
			info();
		case (2):
			warning();
		case (3):
			error();
	}
}