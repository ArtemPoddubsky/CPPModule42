#ifndef EX05_KAREN_HPP
#define EX05_KAREN_HPP

#include "iostream"

class Karen {


private:

	void	debug(void);
	void 	info(void);
	void	warning(void);
	void	error(void);

public:

	void	complain(std::string level);

};


#endif //EX05_KAREN_HPP
