#include "Span.hpp"

Span::Span() {}

Span::Span(unsigned int N) : _n(N) {}

Span::Span(const Span &other) { *this = other; }

Span &Span::operator=(const Span &other) {
	if (this != &other) {
		this->_n = other._n;
		this->container = other.container;
	}
	return *this;
}

Span::~Span() {}

void Span::addNumber(int value) {
	if (container.size() == _n)
		throw Span::FullContainerException();
	container.push_back(value);
}

int Span::shortestSpan() {
	if (container.size() < 2)
		throw Span::LessThanTwoException();
	std::vector<int> copy = container;
	std::sort(copy.begin(), copy.end());
	return std::abs(*----copy.end() - *------copy.end());
}

int Span::longestSpan() {
	if (container.size() < 2)
		throw Span::LessThanTwoException();
	int min = *std::min_element(container.begin(),container.end());
	int max = *std::max_element(container.begin(),container.end());
	return (std::abs(max - min));
}
