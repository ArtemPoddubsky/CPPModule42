#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(void)
{
	try {
		Bureaucrat Ivan("Ivan", 105);
		std::cout << Ivan << std::endl;
		Form sheet("Sheet", 100, 95);
		std::cout << sheet << std::endl;
		Ivan.signForm(sheet);
		std::cout << sheet << std::endl;
	}
	catch (std::exception & e) {
		std::cout << RED << "Exception: " << e.what() << END << std::endl;
	}
	return (0);
}
