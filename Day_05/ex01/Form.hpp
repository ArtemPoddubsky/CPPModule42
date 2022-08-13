#ifndef EX01_FORM_HPP
#define EX01_FORM_HPP

#include "iostream"

class Bureaucrat;

class Form {

private:
	const std::string	_name;
	bool 		_sign;
	const int	sign_grade;
	const int	exec_grade;

public:

	Form();
	Form(const std::string & name, int to_sign, int to_exec);
	Form(Form const & other);
	Form & operator=(const Form & other);
	~Form();
	std::string	getName() const;
	bool		getBool() const;
	int 		getSignGrade() const;
	int 		getExecGrade() const;
	void		beSigned(Bureaucrat const & bureaucrat);


	class GradeTooHighException : public std::exception {
	public:
		const char *what() const throw();
	};

	class GradeTooLowException : public std::exception {
	public:
		const char *what() const throw();
	};
};

std::ostream & operator<<(std::ostream & out, const Form & form);

#endif //EX01_FORM_HPP
