#include "PmergeMe.hpp"

bool isNum(char *str)
{
	for (int i = 0; str[i]; i++)
	{
		if (str[i] < '0' ||  str[i] > '9')
			return (false);
	}
	double num = std::stod(str);
	if (num > 2147483647)
		return (false);
	return (true);
}
