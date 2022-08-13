#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main(void)
{
	try {
		Intern someRandomIntern;
		Form* rrf;
		rrf = someRandomIntern.makeForm("robotomy request", "Bender");
		Bureaucrat Artem("Artem", 2);
		Artem.signForm(*rrf);
		Artem.executeForm(*rrf);
	} catch (std::exception &e) {
		std::cout << RED << e.what() << END << std::endl;
	}
	return (0);
}
