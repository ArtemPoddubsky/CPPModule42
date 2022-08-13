#ifndef EX04_SED_HPP
#define EX04_SED_HPP

#include "iostream"
#include "fstream"
#include "sstream"

class Sed {

private:
	static std::string strReplace(std::string const &buf, std::string const &search, std::string const &replace);

public:
	Sed();
	~Sed();
	static void		replace(std::string const &filename, std::string const &search, std::string const &replace);

};

#endif //EX04_SED_HPP
