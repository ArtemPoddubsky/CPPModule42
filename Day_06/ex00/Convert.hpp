#ifndef DAY_6_CONVERT_HPP
#define DAY_6_CONVERT_HPP

#define RED "\033[1;31m"
#define END "\033[0m"

#define CHAR 0
#define INT 1
#define FLOAT 2
#define DOUBLE 3


#include "iostream"
#include <climits>
#include "cmath"

class Convert {

private:
	char	_c_val;
	int		_i_val;
	float	_f_val;
	double	_d_val;
	bool	_minus;
	Convert();
	bool 	_c_non;
	bool 	_c_imp;
	bool	_i_imp;
	bool	_f_imp;
	bool 	_d_imp;
	void	check_fun_limits(std::string input);
	int 	float_or_double(std::string input, int i);
	void	from_char(char *str);
	void	from_int(char *str);
	void	from_float(char *str);
	void	from_double(char *str);

public:
	Convert(char *str);
	Convert(const Convert &other);
	Convert & operator=(const Convert & other);
	~Convert();

	float	getFloat() const;
	int		getInt() const;
	double	getDouble() const;
	char 	getChar() const;

	void 	set_c(char c);
	void	set_i(int i);
	void	set_f(float f);
	void 	set_d(double d);

	int		parse(std::string input);
	void 	convertation(char *str, int type);
	void	print_char() const;
	void	print_int() const;
	void	print_float(const std::string & string, int type) const;
	void	print_double(const std::string & string, int type) const;
	void	print(const std::string & string, int type) const;

	class InvalidArgumentException : public std::exception {
	public:
		const char *what() const throw();
	};

	class InvalidNumberOfArgumentsException : public std::exception {
	public:
		const char *what() const throw();
	};

};

std::ostream & operator<<(std::ostream & out, const Convert & convert);

#endif //DAY_6_CONVERT_HPP
