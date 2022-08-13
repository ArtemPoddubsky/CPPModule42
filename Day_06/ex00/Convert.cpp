#include "Convert.hpp"

Convert::Convert() {
	this->_c_val = 0;
	this->_f_val = 0;
	this->_d_val = 0;
	this->_i_val = 0;
	this->_minus = false;
	this->_c_non = false;
	this->_c_imp = false;
	this->_i_imp = false;
	this->_f_imp = false;
	this->_d_imp = false;
}

Convert::Convert(const Convert &other) {
	*this = other;
}

Convert &Convert::operator=(const Convert &other) {
	if (this != &other) {
		this->_c_val = other._c_val;
		this->_d_val = other._d_val;
		this->_i_val = other._i_val;
		this->_f_val = other._f_val;
	}
	return (*this);
}

Convert::~Convert() {}

char Convert::getChar() const { return (this->_c_val); }
void Convert::set_c(char c) { this->_c_val = c; }

int Convert::getInt() const { return (this->_i_val); }
void Convert::set_i(int i) { this->_i_val = i; }

float Convert::getFloat() const { return (this->_f_val); }
void Convert::set_f(float f) { this->_f_val = f; }

double Convert::getDouble() const { return (this->_d_val); }
void Convert::set_d(double d) { this->_d_val = d; };

int Convert::float_or_double(std::string input, int i) {
	int ret = DOUBLE;
	int count = 0;

	while (input[i]) {
		if (!std::isdigit(input[i]) && input[i] != 'f')
			throw Convert::InvalidArgumentException();
		else if (input[i] == 'f' && count == 0) {
			ret = FLOAT;
			count++;
		}
		else if (input[i] == 'f' && count > 0)
			throw Convert::InvalidArgumentException();
		i++;
	}
	return ret;
}

void Convert::check_fun_limits(std::string input) {
	if (input == "inff" || input == "+inff" || input == "inf" || input == "+inf") {
		std::cout << "Char: impossible\nInt: impossible\nFloat: +inff\nDouble: +inf\n";
		exit(0);
	}
	else if (input == "-inff" || input == "-inf") {
		std::cout << "Char: impossible\nInt: impossible\nFloat: -inff\nDouble: -inf\n";
		exit(0);
	}
	else if (input == "nan" || input == "nanf") {
		std::cout << "Char: impossible\nInt: impossible\nFloat: nanf\nDouble: nan\n";
		exit(0);
	}
}

int Convert::parse(std::string input)
{
	this->check_fun_limits(input);
	if (std::isalpha(input[0]))
	{
		if (input.length() > 1)
			throw Convert::InvalidArgumentException();
		return CHAR;
	}
	int i = 0;
	if (input[0] == '-')
		i++;
	int ret = INT;
	while (input[i])
	{
		if (std::isdigit(input[i]))
		{
			i++;
			continue ;
		}
		else if (input[i] == '.' && i > 0)
		{
			ret = this->float_or_double(input, i + 1);
			break;
		}
		else
			throw Convert::InvalidArgumentException();
	}
	return (ret);
}

void Convert::from_char(char *str) {
	this->set_c(str[0]);
	this->set_i(static_cast<int>(str[0]));
	this->set_f(static_cast<float>(str[0]));
	this->set_d(static_cast<double>(str[0]));
}

void Convert::from_int(char *str) {
	int i;

	try { i = std::stoi(str); }
	catch (...) {
		this->_i_imp = true;
		this->_c_imp = true;
		this->_f_imp = true;
		this->_d_imp = true;
	}
	if (i > 127 || i < 0)
		this->_c_imp = true;
	else if (i < 33 || i > 126)
		this->_c_non = true;
	this->set_c(static_cast<char>(i));
	this->set_i(i);
	this->set_f(static_cast<float>(i));
	this->set_d(static_cast<double>(i));
}

void Convert::from_float(char *str) {
	float f;

	try { f = std::stof(str); }
	catch (...) {
		this->_i_imp = true;
		this->_c_imp = true;
		this->_f_imp = true;
		this->_d_imp = true;
	}
	if (f >= INT_MAX || f < INT_MIN)
		this->_i_imp = true;
	if (f > CHAR_MAX || f < CHAR_MIN)
		this->_c_imp = true;
	else if (f < 33 || f > 126)
		this->_c_non = true;
	int i = static_cast<int>(f);
	this->set_i(i);
	this->set_c(static_cast<char>(i));
	this->set_f(f);
	this->set_d(static_cast<double>(f));
}

void Convert::from_double(char *str) {
	double d;

	try { d = std::stod(str); }
	catch (...) {
		this->_i_imp = true;
		this->_c_imp = true;
		this->_f_imp = true;
		this->_d_imp = true;
	}
	if (d > INT_MAX || d < INT_MIN)
		this->_i_imp = true;
	if (d > CHAR_MAX || d < CHAR_MIN)
		this->_c_imp = true;
	else if (d < 33 || d > 126)
		this->_c_non = true;
	int i = static_cast<int>(d);
	this->set_c(static_cast<char>(i));
	this->set_i(i);
	this->set_f(static_cast<float>(d));
	this->set_d(d);
}

void Convert::convertation(char *str, int type)
{
	switch (type) {
		case CHAR:
			this->from_char(str);
			break ;
		case INT:
			this->from_int(str);
			break ;
		case FLOAT:
			this->from_float(str);
			break ;
		case DOUBLE:
			this->from_double(str);
			break ;
		default:
			throw::Convert::InvalidArgumentException();
	}
}

void Convert::print_char() const {
	if (this->_c_imp)
		std::cout << "Char: impossible" << std::endl;
	else if (this->_c_non)
		std::cout << "Char: Non displayable" << std::endl;
	else
		std::cout << "Char: '" << this->getChar() << "'" << std::endl;
}

void Convert::print_int() const {
	if (this->_i_imp)
		std::cout << "Int: impossible" << std::endl;
	else
		std::cout << "Int: " << this->getInt() << std::endl;
}

void Convert::print_float(const std::string &string, int type) const {
	if (this->_f_imp)
		std::cout << "Float: impossible" << std::endl;
	else {
		std::cout << "Float: " << this->getFloat();
		if ((type == FLOAT && string[string.length() - 3] == '.' && string[string.length() - 2] == '0')
			|| (type == DOUBLE && string[string.length() - 2] == '.' && string[string.length() - 1] == '0')
			|| string.find('.') == std::string::npos)
			std::cout << ".0f" << std::endl;
		else
			std::cout << "f" << std::endl;
	}
}

void Convert::print_double(const std::string &string, int type) const {
	if (this->_d_imp)
		std::cout << "Double: impossible" << std::endl;
	else {
		std::cout << "Double: " << this->getDouble();
		if ((type == FLOAT && string[string.length() - 3] == '.' && string[string.length() - 2] == '0')
			|| (type == DOUBLE && string[string.length() - 2] == '.' && string[string.length() - 1] == '0')
			|| string.find('.') == std::string::npos)
			std::cout << ".0" << std::endl;
		else
			std::cout << std::endl;
	}
}

void Convert::print(const std::string & string, int type) const {
	this->print_char();
	this->print_int();
	this->print_float(string, type);
	this->print_double(string, type);
}

Convert::Convert(char *str) {
	int type = this->parse(str);
	this->convertation(str, type);
	this->print(str, type);
}

const char *Convert::InvalidNumberOfArgumentsException::what() const throw() {
	return "Invalid number of parameters.";
}

const char *Convert::InvalidArgumentException::what() const throw() {
	return "Invalid argument";
}
