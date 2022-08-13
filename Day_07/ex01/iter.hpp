#ifndef EX01_ITER_HPP
#define EX01_ITER_HPP

#include "iostream"

template <typename A>
void	iter(A *array, int len, void (*function)(const A & x))
{
	for (int i = 0; i < len; i++)
		function(array[i]);
}

#endif //EX01_ITER_HPP
