#include "Serializer.hpp"

int main()
{
	Data data(42);
	Data *ptr = &data;
	uintptr_t uintptr = Serializer::serialize(ptr);
	Data *dataptr = Serializer::deserialize(uintptr);
	if (dataptr == ptr)
	{
		std::cout << "ptr = " << ptr << std::endl;
		std::cout << "uintptr = " << uintptr << std::endl;
		std::cout << "dataptr = " << dataptr << std::endl;
		std::cout << "dataptr->value = " << dataptr->value << std::endl;
	}
	else
	{
		std::cout << "Fail!" << std::endl;
	}
}
