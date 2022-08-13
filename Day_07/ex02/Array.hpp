#ifndef EX02_ARRAY_HPP
#define EX02_ARRAY_HPP

#define RED "\033[1;31m"
#define END "\033[0m"

#include "iostream"

template <typename A>
class Array {

private:
	A *arr;
	unsigned int len;


public:

	Array() : len(0) {
		this->arr = new A[0]();
	}
	explicit Array(unsigned int n) : len(n) {
		this->arr = new A[n]();
	}

	Array(const Array & other) : len(other.len) {
		*this = other;
	}

	Array & operator=(const Array & other) {
		if (this != &other) {
			this->len = other.len;
			this->arr = new A[this->len]();
			for (unsigned int i = 0; i < this->len; i++)
				this->arr[i] = other.arr[i];
		}
		return *this;
	}
	~Array() {
		delete this->arr;
	}

	unsigned int size() {
		return this->len;
	}

	class OutOfRangeException : public std::exception {
		const char *what() const throw() {
			return ("Index out of range");
		}
	};

	A &operator[](unsigned int i)
	{
		if (i >= this->len)
			throw OutOfRangeException();
		return (this->arr[i]);
	}

};


#endif //EX02_ARRAY_HPP
