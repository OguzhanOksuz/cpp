#include "Form.hpp"

int main()
{
	Bureaucrat b1("Xavier", 1);
	Bureaucrat b150("Xavier", 150);

	std::cout << "Form 0 151" << std::endl;
	try
	{
		Form f("Freeze", 0, 151);
		std::cout << f << std::endl;
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	
	std::cout << "Form 0 150" << std::endl;
	try
	{
		Form f("Freeze", 0, 150);
		std::cout << f << std::endl;
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << "Form 1 151" << std::endl;
	try
	{
		Form f("Freeze", 1, 151);
		std::cout << f << std::endl;
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << "Form 1 150" << std::endl;
	try
	{
		Form f("Freeze", 1, 150);
		std::cout << f << std::endl;
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	
	std::cout << "Form 1 150 beSign Bureacurat 150" << std::endl;
	try
	{
		Form f("Freeze", 1, 150);
		f.beSigned(b150);
		std::cout << f << std::endl;
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << "Form 1 150 beSign Bureacurat 1" << std::endl;
	try
	{
		Form f("Freeze", 1, 150);
		f.beSigned(b1);
		std::cout << f << std::endl;
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	
	std::cout << "Bureacurat 150 SignForm 1" << std::endl;
	try
	{
		Form f("Freeze", 1, 150);
		b150.signForm(f);
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << "Bureacurat 1 SignForm 1" << std::endl;
	try
	{
		Form f("Freeze", 1, 150);
		b1.signForm(f);
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << "Bureacurat 1 SignForm 1 twice" << std::endl;
	try
	{
		Form f("Freeze", 1, 150);
		b1.signForm(f);
		b1.signForm(f);
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}
