#include "Intern.hpp"

int main()
{
	{
		Intern someRandomIntern;
		Form *rrf;

		rrf = someRandomIntern.makeForm("robotomy request", "Bender");
		(void)rrf;
	}

	Intern intern;
	Form *Sb = intern.makeForm("shrubbery creation", "home");
	Form *Rb = intern.makeForm("robotomy request", "home");
	Form *Pb = intern.makeForm("presidential pardon", "home");
	Form *Ob = intern.makeForm("forty two", "home");
	(void)Ob;

	Bureaucrat b1("Xavier", 1);

	std::cout << *Sb << std::endl;
	std::cout << *Rb << std::endl;
	std::cout << *Pb << std::endl;
	try
	{
		b1.signForm(*Sb);
		b1.signForm(*Rb);
		b1.signForm(*Pb);
		b1.executeForm(*Sb);
		b1.executeForm(*Rb);
		b1.executeForm(*Pb);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	return (0);
}
