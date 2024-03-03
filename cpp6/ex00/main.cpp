#include "ScalarConvert.hpp"

int main(int ac, char **av)
{
	if (ac == 2)
	{
		ScalarConvert::convert(std::string(av[1]));
	}
	else
	{
		std::cout << "Wrong argument count!" << std::endl;
	}
	return (0);
}
