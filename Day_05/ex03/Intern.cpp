#include "Intern.hpp"

Intern::Intern() {}

Intern::Intern(const Intern &other) {
	*this = other;
}

Intern &Intern::operator=(const Intern &other) {
	if (this != &other) {
	}
	return *this;
}

Intern::~Intern() {}

Form *Intern::makeShrubberyCreationForm(std::string target) {
	return new ShrubberyCreationForm(target);
}

Form *Intern::makeRobotomyRequestForm(std::string target) {
	return new RobotomyRequestForm(target);
}

Form *Intern::makePresidentialPardonForm(std::string target) {
	return new PresidentialPardonForm(target);
}

Form *Intern::makeForm(std::string form_name, std::string form_target) {
	std::string List[12] = {
		"presidential pardon", "Presidential pardon", "presidential Pardon", "Presidential Pardon",
		"robotomy request", "Robotomy request", "robotomy Request", "Robotomy Request",
		"shrubbery creation", "shrubbery Creation", "Shrubbery creation", "Shrubbery Creation"
	};
	Form *(Intern::*func_pointers[12])(std::string) = {
			&Intern::makePresidentialPardonForm, &Intern::makePresidentialPardonForm, &Intern::makePresidentialPardonForm, &Intern::makePresidentialPardonForm,
			&Intern::makeRobotomyRequestForm, &Intern::makeRobotomyRequestForm, &Intern::makeRobotomyRequestForm, &Intern::makeRobotomyRequestForm,
			&Intern::makeShrubberyCreationForm, &Intern::makeShrubberyCreationForm, &Intern::makeShrubberyCreationForm, &Intern::makeShrubberyCreationForm
	};
	for (int i = 0; i < 12; i++) {
		if (form_name == List[i]) {
			Form *newForm = (this->*func_pointers[i])(form_target);
			std::cout << MAGENTA << "Intern creates " << *newForm << END << std::endl;
			return newForm;
		}
	}
	std::cout << RED << form_name << END;
	throw Intern::DoesNotExistException();
}

const char *Intern::DoesNotExistException::what() const throw() {
	return " doesn't exist.";
}