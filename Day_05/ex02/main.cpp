#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main(void)
{
	try {
		PresidentialPardonForm form("Pact");
		std::cout << form << std::endl;
		Bureaucrat Ivan("Ivan", 5);
		Ivan.signForm(form);
		std::cout << form << std::endl;
		Ivan.executeForm(form);
	} catch (std::exception &e) {
		std::cout << RED << e.what() << END << std::endl;
	}
	return (0);
}
