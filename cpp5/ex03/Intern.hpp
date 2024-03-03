#ifndef INTERN_HPP
#define INTERN_HPP

#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"


class Intern
{
	public:
		Intern();
		Intern(const Intern &ref);
		Intern &operator=(const Intern &ref);
		Form *makeForm(std::string name, std::string target);
		~Intern();
};

#endif
