#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{

	Animal* array[10];
	for (int i = 0; i < 10; i++) {
		if (i % 2 == 0)
			array[i] = new Dog;
		else
			array[i] = new Cat;
	}
	std::cout << "\n DESTRUCTION \n";
	for (int i = 0; i < 10; i++)
	{
		std::cout << i << std::endl;
		delete array[i];
	}

	Dog basic;
	{
		Dog tmp = basic;
	}
	
	// Animal test;

	const Animal* j = new Dog();
	const Animal* i = new Cat();
	delete j;//should not create a leak
	delete i;
	return 0;
}