#include "Data.hpp"

Data::Data(int val)
{
	this->value = val;
}

Data::Data(const Data &ref)
{
	*this = ref;
}

Data &Data::operator=(const Data &ref)
{
	this->value = ref.value;
	return (*this);
}

Data::~Data()
{

}
