#include "PmergeMe.hpp"

int main(int ac, char **av)
{
	std::vector<int> c1;
	std::deque<int> c2;

	if (ac < 3)
	{
		std::cout << "Error: not enough arguman input exist!" << std::endl;
		return (0);
	}
	for (int i  = 1; av[i]; i++)
	{
		if (isNum(av[i]) == false)
		{
			std::cout << "Error: Arguman contains a non positive number!" << std::endl;
			return(0);
		}
		c1.push_back(std::stoi(std::string(av[i])));
		c2.push_back(std::stoi(std::string(av[i])));
	}
	std::cout << "Before: ";
	std::vector<int>::const_iterator it1;
	for(it1 = c1.begin(); it1 != c1.end(); it1++)
		std::cout << *it1 << " ";
	std::cout << std::endl;

	double t1 = PmergeMe(c1, 0, c1.size() - 1);
	double t2 = PmergeMe(c2, 0, c2.size() - 1);

	std::cout << "After: ";
	std::vector<int>::const_iterator it2;
	for(it2 = c1.begin(); it2 != c1.end(); it2++)
		std::cout << *it2 << " ";
	std::cout << std::endl;

	std::cout << "Time to process a range of " << c1.size() << " elements with std::[vector] : "<< t1 << " us" << std::endl;
	std::cout << "Time to process a range of " << c2.size() << " elements with std::[deque] : "<< t2 << " us" << std::endl;
	c1.clear();
	c2.clear();
}
