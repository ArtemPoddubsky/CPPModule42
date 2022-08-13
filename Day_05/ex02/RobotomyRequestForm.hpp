#ifndef EX02_ROBOTOMYREQUESTFORM_HPP
#define EX02_ROBOTOMYREQUESTFORM_HPP

#include "Form.hpp"

class RobotomyRequestForm : public Form {

private:
	std::string _target;

public:
	RobotomyRequestForm();
	RobotomyRequestForm(const std::string & target);
	RobotomyRequestForm(RobotomyRequestForm const & other);
	RobotomyRequestForm & operator=(RobotomyRequestForm const & other);
	~RobotomyRequestForm();

	void	execute(Bureaucrat const & executor) const;
};


#endif //EX02_ROBOTOMYREQUESTFORM_HPP
