#include "sed.hpp"

Sed::Sed() {
}

Sed::~Sed(){
}

std::string Sed::strReplace(std::string const &buf, std::string const &search, std::string const &replace)
{
	std::stringstream ss;
	int	j;
	int	slength;

	slength = search.length();
	for (int i = 0; i < buf.length(); i++)
	{
		j = 0;
		while (buf[i + j] == search[j] && j < slength)
			j++;
		if (j == slength)
		{
			ss << replace;
			i += (j - 1);
		}
		else
			ss << buf[i];
	}
	return (ss.str());
}

void Sed::replace(std::string const &filename, std::string const &search, std::string const &replace)
{
	std::ifstream	file;
	std::ofstream	out;
	std::string		buf;

	file.open(filename, std::ifstream::in);
	out.open(filename + ".replace", std::ios::trunc);
	while (std::getline(file, buf))
	{
		out << Sed::strReplace(buf, search, replace);
		if (!file.eof())
			out << '\n';
	}
	file.close();
	out.close();
}