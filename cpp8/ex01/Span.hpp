#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>

class Span
{
	private:
		std::vector<int> list;
		unsigned int size;
	public:
		Span();
		Span(unsigned int size);
		Span(const Span &ref);
		Span &operator=(const Span &ref);
		~Span();
		void addNumber(int num);
		void addRandom(int num);
		int shortestSpan();
		int longestSpan();
};

#endif
