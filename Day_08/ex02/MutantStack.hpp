#ifndef EX02_MUTANTSTACK_HPP
#define EX02_MUTANTSTACK_HPP

#include "iostream"
#include "stack"

template <typename T>
class MutantStack : public std::stack<T> {

public:

	MutantStack() : std::stack<T>() {};
	MutantStack(MutantStack<T> const & other) : std::stack<T>(other) {};
	MutantStack & operator=(MutantStack<T> const & other) {
		this->c = other.c;
		return *this;
	};
	~MutantStack() {};

	typedef typename std::stack<T>::container_type::iterator iterator;
	typedef typename std::stack<T>::container_type::const_iterator const_iterator;
	typedef typename std::stack<T>::container_type::reverse_iterator rev_iterator;
	typedef typename std::stack<T>::container_type::const_reverse_iterator const_rev_iterator;

	iterator			begin() { return this->c.begin(); }
	iterator			end() { return this->c.end(); }
	const_iterator		begin() const { return this->c.begin(); }
	const_iterator		end() const { return this->c.end(); }
	rev_iterator		rbegin() { return this->c.rbegin(); }
	rev_iterator		rend() { return this->c.rend(); }
	const_rev_iterator	rbegin() const { return this->c.rbegin(); }
	const_rev_iterator	rend() const { return this->c.rend(); }

};

#endif //EX02_MUTANTSTACK_HPP
