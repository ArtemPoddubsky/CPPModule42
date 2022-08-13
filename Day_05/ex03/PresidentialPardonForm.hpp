#ifndef EX03_PRESIDENTIALPARDONFORM_HPP
#define EX03_PRESIDENTIALPARDONFORM_HPP

#include "Form.hpp"

class PresidentialPardonForm : public Form {

private:
	std::string _target;

public:
	PresidentialPardonForm();
	PresidentialPardonForm(std::string target);
	PresidentialPardonForm(PresidentialPardonForm const & other);
	PresidentialPardonForm & operator=(PresidentialPardonForm const & other);
	~PresidentialPardonForm();

	void	execute(Bureaucrat const & executor) const;
};


#endif //EX03_PRESIDENTIALPARDONFORM_HPP
