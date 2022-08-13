#ifndef EX03_ROBOTOMYREQUESTFORM_HPP
#define EX03_ROBOTOMYREQUESTFORM_HPP

#include "Form.hpp"

class RobotomyRequestForm : public Form {

private:
	std::string _target;

public:
	RobotomyRequestForm();
	RobotomyRequestForm(std::string target);
	RobotomyRequestForm(RobotomyRequestForm const & other);
	RobotomyRequestForm & operator=(RobotomyRequestForm const & other);
	~RobotomyRequestForm();

	void	execute(Bureaucrat const & executor) const;
};


#endif //EX03_ROBOTOMYREQUESTFORM_HPP
