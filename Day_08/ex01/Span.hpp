#ifndef EX01_SPAN_HPP
#define EX01_SPAN_HPP

#define RED "\033[1;31m"
#define END "\033[0m"

#include "iostream"

#include "vector"

#include "algorithm"
#include "cmath"

class Span {


private:

	std::vector<int>	container;
	unsigned int		_n;

public:

	Span();
	Span(unsigned int N);
	Span(const Span & other);
	Span & operator=(const Span & other);
	~Span();

	void	addNumber(int value);
	template<typename I>
	void	addMany(I begin, I end) {
		if (this->container.size() + std::distance(begin, end) > this->_n)
			throw Span::FullContainerException();
		this->container.assign(begin, end);
	}
	int		shortestSpan();
	int 	longestSpan();

	class FullContainerException : public std::exception {
		const char *what() const throw() { return "Container is full"; }
	};

	class LessThanTwoException : public std::exception {
		const char *what() const throw() { return "Less than two numbers"; }
	};

};


#endif //EX01_SPAN_HPP
