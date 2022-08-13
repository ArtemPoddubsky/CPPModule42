#ifndef EX02_SHRUBBERYCREATIONFORM_HPP
#define EX02_SHRUBBERYCREATIONFORM_HPP

#include "Form.hpp"
#include "fstream"

#define ASCII_TREE "\n\
.         ;\n\
.              .              ;%     ;;\n\
,           ,                :;%  %;\n\
:         ;                   :;%;'     .,\n\
,.        %;     %;            ;        %;'    ,;\n\
;       ;%;  %%;        ,     %;    ;%;    ,%'\n\
%;       %;%;      ,  ;       %;  ;%;   ,%;'\n\
;%;      %;        ;%;        % ;%;  ,%;'\n\
`%;.     ;%;     %;'         `;%%;.%;'\n\
`:;%.    ;%%. %@;        %; ;@%;%'\n\
`:%;.  :;bd%;          %;@%;'\n\
`@%:.  :;%.         ;@@%;'\n\
`@%.  `;@%.      ;@@%;\n\
`@%%. `@%%    ;@@%;\n\
;@%. :@%%  %@@%;\n\
%@bd%%%bd%%:;\n\
#@%%%%%:;;\n\
%@@%%%::;\n\
%@@@%(o);  . '\n\
%@@@o%;:(.,'\n\
`.. %@@@o%::;\n\
`)@@@o%::;\n\
%@@(o)::;\n\
.%@@@@%::;\n\
;%@@@@%::;.\n\
;%@@@@%%:;;;.\n\
...;%@@@@@%%:;;;;,..\n"


class ShrubberyCreationForm : public Form {

private:
	std::string _target;

public:
	ShrubberyCreationForm();
	ShrubberyCreationForm(const std::string & target);
	ShrubberyCreationForm(ShrubberyCreationForm const & other);
	ShrubberyCreationForm & operator=(ShrubberyCreationForm const & other);
	~ShrubberyCreationForm();

	void	execute(Bureaucrat const & executor) const;
};


#endif //EX02_SHRUBBERYCREATIONFORM_HPP
