#include "Karen.hpp"

int main(int argc, char **argv)
{
	Karen karen;

	if (argc != 2)
	{
		std::cout << "Gotta launch Karen properly.\n";
		return (-1);
	}
	karen.complain(argv[1]);
	return (0);
}