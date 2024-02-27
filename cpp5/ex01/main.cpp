#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
	Bureaucrat b1("William", 1);
	Bureaucrat b150("William", 150);
	Form	f1("WordPass", 1, 1);
	Form	f150("WalkPass", 150, 150);


	try
	{
		f1.beSigned(b150);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	return (0);
}
