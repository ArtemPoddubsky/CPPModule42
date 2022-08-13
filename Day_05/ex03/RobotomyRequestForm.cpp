#include "RobotomyRequestForm.hpp"
#include "Bureaucrat.hpp"
#include <cstdlib>

RobotomyRequestForm::RobotomyRequestForm() : Form("RobotomyRequestForm", 72, 45), _target("Noname") {}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("RobotomyRequestForm", 72, 45), _target(target) {}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &other) : Form("RobotomyRequestForm", 72, 45), _target(other._target) {
	*this = other;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &other) {
	if (this != &other) {
		this->_target = other._target;
	}
	return *this;
}

RobotomyRequestForm::~RobotomyRequestForm() {}

void RobotomyRequestForm::execute(const Bureaucrat &executor) const {
	if (!this->getBool())
		throw Form::NotSignedException();
	if (executor.getGrade() > this->getExecGrade())
		throw Form::GradeTooHighException();
	std::cout << MAGENTA << "WSHHHHHZZZZZZZZZZZZZZZZZZZZ <===> ";
	srand((unsigned) time(0));
	int random = 1 + (rand() % 2);
	if (random % 2 == 0)
		std::cout << this->_target << " has been robotomized." << END << std::endl;
	else
		std::cout << this->_target << " robotomization failed." << END << std::endl;
}