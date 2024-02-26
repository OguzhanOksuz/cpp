#include "Bureaucrat.hpp"

int main()
{
	try
	{
		Bureaucrat b("William", 0);
	}
	catch(std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	 {
		Bureaucrat b("William", 151);
	 }
	 catch(std::exception& e)
	 {
		std::cout << e.what() << std::endl;
	 }

	 try
	 {
		Bureaucrat b("William", 1);
 		b.increment();
 	 }
   	catch(std::exception& e)
  	{
		std::cout << e.what() << std::endl;
 	}

	 try
	 {
 		Bureaucrat b("William", 150);
	 	b.decrement();
 	}
 	catch(std::exception& e)
	 {
		std::cout << e.what() << std::endl;
	 }

	 try
	 {
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
	 	Bureaucrat b(1, "William");
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
	 	Bureaucrat b("William");
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
	 	Bureaucrat b(1);
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
	 	Bureaucrat b("William", 1);
		b.decrement();
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
	 	Bureaucrat b("William", 150);
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
