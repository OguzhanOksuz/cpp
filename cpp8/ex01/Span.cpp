#include "Span.hpp"

Span::Span()
{
	this->size = 0;
}

Span::Span(unsigned int size)
{
	this->size = size;
}

Span::Span(const Span &ref)
{
	*this = ref;
}

Span &Span::operator=(const Span &ref)
{
	this->size = ref.size;
	this->list = ref.list;
	return (*this);
}

Span::~Span()
{
	this->list.clear();
}

void Span::addNumber(int num)
{
	if (this->list.size() >= this->size)
		throw std::exception();
	this->list.push_back(num);
}

void Span::addRandom(int num)
{
	int tmp;

	srand(time(NULL));
	for (int i = 0; i < num; i++)
	{
		tmp = rand();
		addNumber(tmp);
	}
}

int Span::shortestSpan()
{
	int shortestSpan = 2147483647;
	std::vector<int> tmp;
	
	tmp = this->list;
	std::sort(tmp.begin(), tmp.end());

	if (this->list.size() <= 1)
		throw (std::exception());
	for (unsigned int i = 0; i + 1 < tmp.size(); i++)
	{
			if (tmp[i + 1] - tmp[i] < shortestSpan)
				shortestSpan = tmp[i + 1] - tmp[i];
	}
	tmp.clear();
	return shortestSpan;
}

int Span::longestSpan()
{
	std::vector<int> tmp;
	
	tmp = this->list;
	std::sort(tmp.begin(), tmp.end());
	if (this->list.size() <= 1)
		throw (std::exception());
	int longestSpan = *(tmp.end() - 1) - *(tmp.begin());
	tmp.clear();
	return longestSpan;
}

