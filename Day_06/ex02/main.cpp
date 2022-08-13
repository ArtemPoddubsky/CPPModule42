#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

void identify(Base* p) {
	if (p == nullptr)
		std::cout << "nullptr" << std::endl;
	else if (dynamic_cast<A*>(p))
		std::cout << "Class A" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "Class B" << std::endl;
	else if (dynamic_cast<C*>(p)) {
		std::cout << "Class C" << std::endl;
	else
		std::cout << "Unknown class" << std::endl;
}

bool check_A(Base& p) {
	try {
		Base base = dynamic_cast<A&>(p);
		return true;
	} catch (...) {
		return false;
	}
}

bool check_B(Base& p) {
	try {
		Base base = dynamic_cast<B&>(p);
		return true;
	} catch (...) {
		return false;
	}
}

bool check_C(Base& p) {
	try {
		Base base = dynamic_cast<C&>(p);
		return true;
	} catch (...) {
		return false;
	}
}

void identify(Base& p) {
	if (check_A(p)) {
		std::cout << "Class A" << std::endl;
	} else if (check_B(p)) {
		std::cout << "Class B" << std::endl;
	} else if (check_C(p)) {
		std::cout << "Class C" << std::endl;
	} else {
		std::cout << "Unknown class" << std::endl;
	}
}

Base * generate(void)
{
	int random = 1 + rand() % 3;
	switch (random) {
		case 1:
			std::cout << "Class A generated" << std::endl;;
			return new A();
		case 2:
			std::cout << "Class B generated" << std::endl;;
			return new B();
		default:
			std::cout << "Class C generated" << std::endl;
			return new C();
	}
}

int main(void) {
	srand((unsigned) time(0));
	for (int i = 0; i < 10; i++) {
		Base *a = generate();
		identify(a);
		identify(*a);
		delete a;
	}
	return 0;
}