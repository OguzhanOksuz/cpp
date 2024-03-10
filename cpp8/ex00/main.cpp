#include "easyfind.hpp"

int main()
{
	std::vector<int> arr;
	for (int i = 0; i < 10; i++)
		arr.push_back(i);
	for (int i = 0; i < 15; i++)
	{
		std::cout << "i = " << i << "İndex = " << easyfind(arr, i) << std::endl;
	}
}
