#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
	Bureaucrat B1("Xavier", 1);
	Bureaucrat B150("Xavier", 150);
	Form *Sb = new ShrubberyCreationForm("BackEnd");
	Form *Rb = new RobotomyRequestForm("FrontEnd");
	Form *Pb = new PresidentialPardonForm("Fullstack");

	std::cout << "---Shrubbery tests----" << std::endl;
	std::cout << "NOt signed form" << std::endl;
	try
	{
		Sb->execute(B1);
		std::cout << *Sb << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << "signed form and execute" << std::endl;
	try
	{
		B1.signForm(*Sb);
		Sb->execute(B1);
		std::cout << *Sb << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	
	std::cout << "TooLowGradeException error" << std::endl;
	try
	{
		Sb->execute(B150);
		std::cout << *Sb << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << "---Robotomy tests----" << std::endl;
	std::cout << "NOt signed form" << std::endl;
	try
	{
		Rb->execute(B1);
		std::cout << *Rb << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << "signed form and execute" << std::endl;
	try
	{
		B1.signForm(*Rb);
		Rb->execute(B1);
		std::cout << *Rb << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	
	std::cout << "TooLowGradeException error" << std::endl;
	try
	{
		Rb->execute(B150);
		std::cout << *Rb << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << "---Presidential tests----" << std::endl;
	std::cout << "NOt signed form" << std::endl;
	try
	{
		Pb->execute(B1);
		std::cout << *Pb << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << "signed form and execute" << std::endl;
	try
	{
		B1.signForm(*Pb);
		Pb->execute(B1);
		std::cout << *Pb << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	
	std::cout << "TooLowGradeException error" << std::endl;
	try
	{
		Pb->execute(B150);
		std::cout << *Pb << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}


}
