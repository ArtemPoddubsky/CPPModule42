#ifndef EX02_PRESIDENTIALPARDONFORM_HPP
#define EX02_PRESIDENTIALPARDONFORM_HPP

#include "Form.hpp"

class PresidentialPardonForm : public Form {

private:
	std::string _target;

public:
	PresidentialPardonForm();
	PresidentialPardonForm(const std::string & target);
	PresidentialPardonForm(PresidentialPardonForm const & other);
	PresidentialPardonForm & operator=(PresidentialPardonForm const & other);
	~PresidentialPardonForm();

	void	execute(Bureaucrat const & executor) const;
};


#endif //EX02_PRESIDENTIALPARDONFORM_HPP
