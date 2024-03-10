#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <vector>

template <typename T>
int easyfind(T arr, int src)
{
	typename T::iterator it = std::find(arr.begin(), arr.end(), src);
	if (it != arr.end())
	{
		return (std::distance(arr.begin(), it));
	}
	else
	{
		return (-1);
	}
}

#endif
