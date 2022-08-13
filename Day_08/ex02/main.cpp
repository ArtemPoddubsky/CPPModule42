#include "MutantStack.hpp"
#include "list"

int main() {
	std::cout << "-----First Test-----\n";
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << "Top element: " << mstack.top() << std::endl;
	mstack.pop();
	std::cout << "Stack size: " << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}


	std::cout << "-----Second Test-----\n";
	std::list<int> lstack;
	lstack.push_back(5);
	lstack.push_back(17);
	std::cout << "Lstack element: " << lstack.back() << std::endl;
	lstack.pop_back();
	std::cout << "Lstack size: " << lstack.size() << std::endl;
	lstack.push_back(3);
	lstack.push_back(5);
	lstack.push_back(737);
	lstack.push_back(0);
	std::list<int>::iterator l_it = lstack.begin();
	std::list<int>::iterator l_ite = lstack.end();
	++l_it;
	--l_it;
	while (l_it != l_ite)
	{
		std::cout << *l_it << std::endl;
		++l_it;
	}


	std::cout << "-----Third Test-----\n";
	MutantStack<int>::rev_iterator r_it = mstack.rbegin();
	MutantStack<int>::rev_iterator r_ite = mstack.rend();
	++r_it;
	--r_it;
	while (r_it != r_ite)
	{
		std::cout << *r_it << std::endl;
		++r_it;
	}


	std::cout << "-----Fourth Test-----\n";
	std::stack<int> s(mstack);
	while (!s.empty()) {
		std::cout << s.top() << '\n';
		s.pop();
	}
	return 0;
}