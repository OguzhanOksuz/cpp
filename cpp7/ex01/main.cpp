#include "iter.hpp"

class Awesome
{
	public:
		Awesome(void): _n(42) { return; }
		int get(void) const { return this->_n; }
	private:
		int _n;
};

std::ostream &operator<<(std::ostream & o, Awesome const & rhs) {o << rhs.get(); return o; }

template<typename T>
void print(T & x){std::cout << x << std::endl; return; }


int main()
{
	int tab[] = { 0, 1, 2, 3, 4};
	Awesome tab2[5];

	iter(tab, 5, print);
	iter(tab2, 5, print);


	int a[] = {1, 2, 3, 4, 5};
	char b[] = {'a', 'b', 'c'};
	std::string c[] = {"iter.hpp", "main.cpp", "Makefile"};

	iter(a, 5, test);
	std::cout << std::endl;
	iter(b, 3, test);
	std::cout << std::endl;
	iter(c, 3, test);
}
