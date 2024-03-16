#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <iostream>
#include <vector>
#include <deque>
#include <ctime>

bool isNum(char *str);

template <typename T>
void merge(T &c, int start, int mid, int end)
{
	size_t i;
	size_t j;
	size_t k;

	size_t l_size = mid - start + 1;
	size_t r_size = end - mid;

	T l_c(l_size);
	T r_c(r_size);

	for (i = 0; i < l_size; i++)
		l_c[i] = c[start + i];
	for (i = 0; i < r_size; i++)
		r_c[i] = c[mid + 1 + i];

	i = 0;
	j = 0;
	k = start;
	while (i < l_size && j < r_size)
		if (l_c[i] <= r_c[j])
			c[k++] = l_c[i++];
		else
			c[k++] = r_c[j++];
	while (i < l_c.size())
		c[k++] = l_c[i++];
	while (j < l_c.size())
		c[k++] = r_c[j++];
}

template <typename T>
void insert(T &c, int start, int end)
{
	for (int i = start + 1; i <= end; i++)
	{
		int tmp = c[i];
		int j = i - 1;
		for (; j >= start && tmp < c[j]; j--)
			c[j + 1] = c[j];
		c[j + 1] = tmp;
	}
}

template <typename T>
double PmergeMe(T &c, int start, int end)
{
	std::clock_t startTime = std::clock();
	if (start < end)
	{
		if (end - start < 10)
		{
			insert(c, start, end);
		}
		else
		{
			int mid = start + ((end - start) / 2);
			PmergeMe(c, start, mid);
			PmergeMe(c, mid + 1, end);
			merge(c,start, mid, end);
		}
	}
	std::clock_t endTime = std::clock();
	return ((1000000.0 * (endTime - startTime)) / CLOCKS_PER_SEC);
}


#endif
