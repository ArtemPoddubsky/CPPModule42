#include "Data.hpp"

int main(void)
{
	Data* ptr = new Data(42, "???");
	std::cout << "Original: " << ptr << std::endl;
	std::cout << ptr->i << std::endl;
	std::cout << ptr->str << std::endl;

	std::cout << std::endl;

	uintptr_t serial = serialize(ptr);
	std::cout << "Serial value: " << serial << std::endl;
	std::cout << std::hex << serial << std::dec << std::endl;

	std::cout << std::endl;

	Data *new_ptr = deserialize(serial);
	std::cout << "Deserealized value: " << new_ptr << std::endl;
	std::cout << new_ptr->i << std::endl;
	std::cout << new_ptr->str << std::endl;

	std::cout << std::endl;
	if (ptr == new_ptr)
		std::cout << "CORRECT\n";
	else
		std::cout << "FALSE\n";

	delete ptr;
	return 0;
}