#ifndef EX00_EASYFIND_HPP
#define EX00_EASYFIND_HPP

#define RED "\033[1;31m"
#define END "\033[0m"

#include "iostream"
#include "vector"
#include "deque"
#include "list"

class NotFound : public std::exception {
	const char *what() const throw() {
		return "Not found";
	}
};

template <typename T>
int easyfind(T array, int find) {
	typename T::iterator ret = std::find(array.begin(), array.end(), find);
	if (ret == array.end())
		throw NotFound();
	return std::distance(array.begin(), ret);
}

#endif //EX00_EASYFIND_HPP
 