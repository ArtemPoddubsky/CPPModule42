#include "easyfind.hpp"

int main() {
	std::cout << "-----Test one-----\n";
	std::vector<int> vector;
	for (int i = 0; i < 100; i++) {
		vector.push_back(i * 10);
	}
	try {
		std::cout << easyfind(vector, 10) << '\n';
	}
	catch (std::exception & e) {
		std::cerr << RED << "Exception caught: Vector: " << e.what() << END << '\n';
	}

	std::cout << "-----Test two-----\n";
	std::deque<int> deque;
	for (int i = 0; i < 100; i++)
		deque.push_back(i * 10);
	try {
		std::cout << easyfind(deque, 20) << '\n';
	}
	catch (std::exception & e) {
		std::cerr << RED << "Exception caught: Deque: " << e.what() << END << '\n';
	}

	std::cout << "-----Test three-----\n";
	std::list<int> list;
	for (int i = 0; i < 100; i++)
		list.push_back(i * 10);
	try {
		std::cout << easyfind(list, 30) << '\n';
	}
	catch (std::exception & e) {
		std::cerr << RED << "Exception caught: List: " << e.what() << END << '\n';
	}

	return 0;
}