#ifndef SERIALIZER_HPP
#define SERIALIZER_HPP

#include "Data.hpp"
#include <iostream>

class Data;

class Serializer
{
	private:
		Serializer();
		Serializer(const Serializer &ref);
		Serializer &operator=(const Serializer &ref);
		~Serializer();
	public:
		static uintptr_t serialize(Data *ptr);
		static Data* deserialize(uintptr_t raw);
};

#endif
