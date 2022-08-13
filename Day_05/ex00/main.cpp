#include "Bureaucrat.hpp"

int main(void)
{
	try {
		Bureaucrat Ivan("Ivan", 140);
		std::cout << Ivan << std::endl;
		Bureaucrat Agit("Agit", 1);
		std::cout << Agit << std::endl;

		std::cout << std::endl;

		for (int i = 0; i < 10; i++) {
			Agit.incGrade();
			std::cout << Agit << std::endl;
		}
		std::cout << Agit << std::endl;
	}
	catch (const std::exception & e) {
		std::cout << RED << "Exception: " << e.what() << END << std::endl;
	}
	return (0);
}
