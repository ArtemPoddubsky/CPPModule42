#ifndef EX01_DATA_HPP
#define EX01_DATA_HPP

#include "iostream"

class Data {

public:

	std::string str;
	int i;

	Data(int i, std::string str);
	Data();
	Data(const Data & other);
	Data & operator=(const Data & other);
	~Data();

};

uintptr_t serialize(Data* ptr);

Data* deserialize(uintptr_t raw);

#endif //EX01_DATA_HPP
