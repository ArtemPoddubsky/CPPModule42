#include "Span.hpp"

int main()
{
	std::cout << "-----Subject-----" << '\n';

	Span sp = Span(5);
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << "Shortest: " << sp.shortestSpan() << std::endl;
	std::cout << "Longest:  " << sp.longestSpan() << std::endl;

	std::cout << "-----My Test-----" << '\n';
	Span lots = Span(100000);
	std::vector<int> tmp;
	try {
			for (int i = 0; i < 100000; i++)
				tmp.push_back(i + 1);
			lots.addMany(tmp.begin(), tmp.end());
			std::cout << "Shortest: " << lots.shortestSpan() << '\n';
			std::cout << "Longest:  " << lots.longestSpan() << '\n';
	}
	catch(std::exception & e) {
		std::cerr << RED << "Exception caught: My Test: " << e.what() << END << '\n';
	}

	return 0;
}