#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base::~Base()
{

}

Base *generate(void)
{
	srand(time(0));
	int i = rand() % 3;
	if (i == 0)
		return (new A);
	else if (i == 1)
		return (new B);
	else
		return (new C);
}

void identify(Base *p)
{
	if (dynamic_cast<A *>(p))
		std::cout << "Type A" << std::endl;
	else if (dynamic_cast<B *>(p))
		std::cout << "Type B" << std::endl;
	else if (dynamic_cast<C *>(p))
		std::cout << "Type C" << std::endl;
}

void identify(Base &p)
{
	if (dynamic_cast<A *>(&p))
		std::cout << "Type A" << std::endl;
	else if (dynamic_cast<B *>(&p))
		std::cout << "Type B" << std::endl;
	else if (dynamic_cast<C *>(&p))
		std::cout << "Type C" << std::endl;
}
