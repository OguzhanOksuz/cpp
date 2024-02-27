#include "Bureaucrat.hpp"

int main()
{

	try
	{
		std::cout << "William, 0" << std::endl;
		Bureaucrat b("William", 0);
	}
	catch(std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		std::cout << "William, 151" << std::endl;
		Bureaucrat b("William", 151);
	}
	catch(std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		std::cout << "William, 1 and incrament" << std::endl;
		Bureaucrat b("William", 1);
 		b.increment();
 	}
   	catch(std::exception& e)
  	{
		std::cout << e.what() << std::endl;
 	}

	Bureaucrat a("Willy", 1);

	try
	{
		std::cout << "Willy, 1 and incrament twice out of scope" << std::endl;
		a.increment();
		a.increment();
 		std::cout << "Bureaucrat name : " << a.getName() << std::endl;
 		std::cout << "Bureaucrat grade : " << a.getGrade() << std::endl;
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

 	std::cout << "Bureaucrat name : " << a.getName() << std::endl;
 	std::cout << "Bureaucrat grade : " << a.getGrade() << std::endl;
	
	try
	{
		std::cout << "William, 150 and decrament twice" << std::endl;
 		Bureaucrat b("William", 150);
	 	b.decrement();
	 	b.decrement();
 		std::cout << "Bureaucrat name : " << b.getName() << std::endl;
 		std::cout << "Bureaucrat grade : " << b.getGrade() << std::endl;
 	}
 	catch(std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		std::cout << "William, 1" << std::endl;
	 	Bureaucrat b("William", 1);
 		std::cout << "Bureaucrat name : " << b.getName() << std::endl;
 		std::cout << "Bureaucrat grade : " << b.getGrade() << std::endl;
	 	std::cout << b << std::endl;
 	}
 	catch(std::exception& e)
	{
		std::cout << e.what() << std::endl;
 	}


	try
	{
		std::cout << "William, 3 and increment" << std::endl;
	 	Bureaucrat b("William", 3);
		b.increment();
 		std::cout << "Bureaucrat name : " << b.getName() << std::endl;
 		std::cout << "Bureaucrat grade : " << b.getGrade() << std::endl;
	 	std::cout << b << std::endl;
 	}
 	catch(std::exception& e)
	{
		std::cout << e.what() << std::endl;
 	}

	try
	{
		std::cout << "William, 3 and increment" << std::endl;
	 	Bureaucrat b("William", 3);
		b.increment();
 		std::cout << "Bureaucrat name : " << b.getName() << std::endl;
 		std::cout << "Bureaucrat grade : " << b.getGrade() << std::endl;
	 	std::cout << b << std::endl;
 	}
 	catch(std::exception& e)
	{
		std::cout << e.what() << std::endl;
 	}

	return (0);
}
