#ifndef EX03_INTERN_HPP
#define EX03_INTERN_HPP

#include "Form.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern {

private:
	Form *makeShrubberyCreationForm(std::string target);
	Form *makeRobotomyRequestForm(std::string target);
	Form *makePresidentialPardonForm(std::string target);

public:

	Intern();
	Intern(Intern const & other);
	Intern & operator=(Intern const & other);
	~Intern();

	Form *makeForm(std::string form_name, std::string form_target);

	class DoesNotExistException : public std::exception {
	public:
		const char *what() const throw();
	};

};


#endif //EX03_INTERN_HPP
