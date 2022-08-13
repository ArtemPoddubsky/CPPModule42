#include "ShrubberyCreationForm.hpp"
#include "Bureaucrat.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : Form("ShrubberyCreationForm", 145, 137), _target("Noname") {}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("ShrubberyCreationForm", 145, 137), _target(target) {}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &other) : Form("ShrubberyCreationForm", 145, 137), _target(other._target) {
	*this = other;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &other) {
	if (this != &other) {
		this->_target = other._target;
	}
	return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

void ShrubberyCreationForm::execute(const Bureaucrat & executor) const
{
	std::ofstream file;

	if (!this->getBool())
		throw Form::NotSignedException();
	if (executor.getGrade() > this->getExecGrade())
		throw Form::GradeTooHighException();
	file.exceptions(std::ios::badbit | std::ios::failbit);
	file.open(this->_target + "_shrubbery", std::ios::out | std::ios::trunc);
	file << ASCII_TREE;
	std::cout << MAGENTA << this->_target << " is executed!" << END << std::endl;
}