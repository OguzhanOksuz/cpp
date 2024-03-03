#include "Intern.hpp"

Intern::Intern()
{

}

Intern::Intern(const Intern &ref)
{
	(void)ref;
}

Intern &Intern::operator=(const Intern &ref)
{
	(void)ref;
	return (*this);
}

Form *Intern::makeForm(std::string name, std::string target)
{
	int i = 0;
	std::string Names[] = {"shrubbery creation", "robotomy request", "presidential pardon"};
	for (; i < 3; i++)
		if (Names[i] == name)
			break;

	switch (i)
	{
		case 0:
			std::cout << "Intern creates " << name << " form." << std::endl;
			return (new ShrubberyCreationForm(target));
			break;
		case 1:
			std::cout << "Intern creates " << name << " form." << std::endl;
			return (new RobotomyRequestForm(target));
			break;
		case 2:
			std::cout << "Intern creates " << name << " form." << std::endl;
			return (new PresidentialPardonForm(target));
			break;
		default:
			std::cout << "Intern can not creat " << name << " form." << std::endl;
			return (NULL);

	}
}

Intern::~Intern()
{

}
