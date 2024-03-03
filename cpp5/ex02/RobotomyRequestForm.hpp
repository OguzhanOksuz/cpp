#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "AForm.hpp"
#include <ctime>
#include <cstdlib>

class RobotomyRequestForm: public Form
{
	public:
		RobotomyRequestForm();
		RobotomyRequestForm(std::string target);
		RobotomyRequestForm(const RobotomyRequestForm &ref);
		RobotomyRequestForm &operator=(const RobotomyRequestForm &ref);
		void execute(Bureaucrat const &executor) const;
		~RobotomyRequestForm();
};

#endif
