#include "Convert.hpp"

int main(int argc, char **argv)
{
	try {
		if (argc != 2)
			throw Convert::InvalidNumberOfArgumentsException();
		Convert convertation(argv[1]);
	}
	catch (const std::exception & e) {
		std::cout << RED << "Exception caught: " << e.what() << END << std::endl;
	}
	return (0);
}