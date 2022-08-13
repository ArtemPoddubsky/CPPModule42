#include "Array.hpp"

int main()
{
	unsigned int n = 10, i, ret;
	Array<int> a(n);
	for (i = 0; i < n; i++)
		a[i] = static_cast<int>(i) + 10;

	ret = a.size();
	std::cout << "A size: " << a.size() << '\n';
	std::cout << "A values:\n";
	try {
		for (i = 0; i < ret; i++) {
			std::cout << a[i] << '\n';
		}
	}
	catch (std::exception & e) {
		std::cerr << RED << "Exception caught: " << e.what() << END << '\n';
	}


	Array<int> b(a);
	ret = b.size();
	std::cout << '\n' << "B size: " << b.size() << '\n';
	std::cout << "B values:\n";
	try {
		for (i = 0; i < ret; i++) {
			b[i] += 10;
			std::cout << b[i] << '\n';
		}
	}
	catch (std::exception & e) {
		std::cerr << RED << "Exception caught: " << e.what() << END << '\n';
	}

	Array<int> c = a;
	ret = c.size();
	std::cout << '\n' << "C size: " << c.size() << '\n';
	std::cout << "C values:\n";
	try {
		for (i = 0; i < ret; i++) {
			c[i] += 1;
			std::cout << c[i] << '\n';
		}
	}
	catch (std::exception & e) {
		std::cerr << RED <<"Exception caught: " << e.what() << END << '\n';
	}


	std::cout << "\n-------Empty array-------\n";
	Array<int> empty;
	std::cout << "Size of an empty array: " << empty.size() << '\n';
	std::cout << "Let's try to initialize an empty array (?): ";
	try {
		empty[0] = 21;
	}
	catch (std::exception & e) {
		std::cerr << RED << "Exception caught: " << e.what() << END << '\n';
	}

	return 0;
}

//#include <iostream>
////#include <Array.hpp>
//
//#define MAX_VAL 750
//int main(int, char**)
//{
//	Array<int> numbers(MAX_VAL);
//	int* mirror = new int[MAX_VAL];
//	srand(time(NULL));
//	for (int i = 0; i < MAX_VAL; i++)
//	{
//		const int value = rand();
//		numbers[i] = value;
//		mirror[i] = value;
//	}
//	//SCOPE
//	{
//		Array<int> tmp = numbers;
//		Array<int> test(tmp);
//	}
//
//	for (int i = 0; i < MAX_VAL; i++)
//	{
//		if (mirror[i] != numbers[i])
//		{
//			std::cerr << "didn't save the same value!!" << std::endl;
//			return 1;
//		}
//	}
//	try
//	{
//		numbers[-2] = 0;
//	}
//	catch(const std::exception& e)
//	{
//		std::cerr << e.what() << '\n';
//	}
//	try
//	{
//		numbers[MAX_VAL] = 0;
//	}
//	catch(const std::exception& e)
//	{
//		std::cerr << e.what() << '\n';
//	}
//
//	for (int i = 0; i < MAX_VAL; i++)
//	{
//		numbers[i] = rand();
//	}
//	delete [] mirror;//
//	return 0;
//}