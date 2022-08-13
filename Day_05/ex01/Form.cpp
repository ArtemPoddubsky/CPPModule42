#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form() : _name("Noname"), _sign(false), sign_grade(150), exec_grade(150) {}

Form::Form(const std::string & name, int to_sign, int to_exec) : _name(name), _sign(false), sign_grade(to_sign), exec_grade(to_exec) {
	if (to_sign < 1 || to_exec < 1)
		throw Form::GradeTooHighException();
	if (to_sign > 150 || to_exec > 150)
		throw Form::GradeTooLowException();
	std::cout << this->_name << " form was created." << std::endl;
}

Form::Form(Form const & other) : _name(other._name), _sign(other._sign), sign_grade(other.sign_grade), exec_grade(other.exec_grade) {
	if (sign_grade < 1 || exec_grade< 1)
		throw Form::GradeTooHighException();
	if (sign_grade > 150 || exec_grade > 150)
		throw Form::GradeTooLowException();
	std::cout << this->_name << " form was created." << std::endl;
}

Form &Form::operator=(const Form &other) {
	this->_sign = other._sign;
	return (*this);
}

Form::~Form() {}

std::string Form::getName() const {
	return this->_name;
}

bool Form::getBool() const {
	return this->_sign;
}

int Form::getSignGrade() const {
	return this->sign_grade;
}

int Form::getExecGrade() const {
	return this->exec_grade;
}

void Form::beSigned(Bureaucrat const &bureaucrat) {
	if (bureaucrat.getGrade() > this->getSignGrade())
		throw Form::GradeTooHighException();
	this->_sign = true;
}

const char *Form::GradeTooHighException::what() const throw() {
	return "Form grade is too high.";
}

const char *Form::GradeTooLowException::what() const throw() {
	return "Form grade is too low.";
}

std::ostream & operator<<(std::ostream & out, const Form & form) {
	out << form.getName() << ": it's grade to sign is " << form.getSignGrade() << ", grade to execute is " << form.getExecGrade();
	out << ", and it is ";
	if (form.getBool())
		out << GREEN << "signed." << END;
	else
		out << RED << "not signed." << END;
	return out;
}
