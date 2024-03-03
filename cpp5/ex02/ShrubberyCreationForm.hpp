#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "AForm.hpp"
#include <fstream>

class ShrubberyCreationForm: public Form
{
	private:
		std::string target;
	public:
		ShrubberyCreationForm();
		ShrubberyCreationForm(std::string target);
		ShrubberyCreationForm(const ShrubberyCrationForm &ref);
		ShrubberyCreationForm &operator=(const ShrubberyCreationForm &ref);
		void execute(Bureaucrat const &executor) const;
		~ShrubberyCreationForm();
}

std::ostream &operator<<(std::ostream &os, const ShrubberyCreationForm &ref);

#endif
