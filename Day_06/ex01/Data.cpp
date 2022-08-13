#include "Data.hpp"

Data::Data() {
	this->i = 0;
	this->str = "Noname";
}

Data::Data(int i, std::string str) : i(i), str(str) {}

Data::Data(const Data &other) { *this = other; }

Data &Data::operator=(const Data &other) {
	if (this != &other) {
		this->i = other.i;
		this->str = other.str;
	}
	return *this;
}

Data::~Data() {}

uintptr_t serialize(Data* ptr) {
	return reinterpret_cast<uintptr_t>(ptr);
}

Data* deserialize(uintptr_t raw) {
	return reinterpret_cast<Data *>(raw);
}