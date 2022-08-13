#ifndef EX02_BUREAUCRAT_HPP
#define EX02_BUREAUCRAT_HPP

#define RED "\033[1;31m"
#define GREEN "\033[1;32m"
#define MAGENTA "\033[1;35m"
#define END "\033[0m"

#include "iostream"

class Form;

class Bureaucrat {

private:

	const std::string _name;
	int	_grade;

public:

	Bureaucrat();
	Bureaucrat(const std::string& name, int grade);
	Bureaucrat(const Bureaucrat & other);
	Bureaucrat & operator=(const Bureaucrat & other);
	~Bureaucrat();
	const std::string&	getName() const;
	int					getGrade() const;
	void				incGrade();
	void 				decGrade();
	void				signForm(Form & form) const;

	void				executeForm(Form const & form);

	class GradeTooHighException : public std::exception {
	public:
		const char *what() const throw();
	};

	class GradeTooLowException : public  std::exception {
	public:
		const char *what() const throw();
	};

};

std::ostream & operator<<(std::ostream & out, const Bureaucrat & bureaucrat);

#endif //EX02_BUREAUCRAT_HPP
