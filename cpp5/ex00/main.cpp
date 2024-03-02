#include "Bureaucrat.hpp"

int main()
{
	std::cout << "Bureaucrat -1" << std::endl;
	try
	{
		Bureaucrat b("Xavier", -1);
		std::cout << b << std::endl;
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << "Bureaucrat 151" << std::endl;
	try
	{
		Bureaucrat b("Xavier", 151);
		std::cout << b << std::endl;
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << "Bureaucrat 1 + incrament" << std::endl;
	try
	{
		Bureaucrat b("Xavier", 1);
		b.increment();
		std::cout << b << std::endl;
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << "Bureaucrat 150 and decrement" << std::endl;
	try
	{
		Bureaucrat b("Xavier", 150);
		b.decrement();
		std::cout << b << std::endl;
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << "Bureaucrat 3 and incerement" << std::endl;
	try
	{
		Bureaucrat b("Xavier", 3);
		b.increment();
		std::cout << b << std::endl;
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	
	std::cout << "Bureaucrat 1" << std::endl;
	try
	{
		Bureaucrat b("Xavier", 1);
		std::cout << b << std::endl;
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	
	std::cout << "Bureaucrat 150" << std::endl;
	try
	{
		Bureaucrat b("Xavier", 150);
		std::cout << b << std::endl;
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}
