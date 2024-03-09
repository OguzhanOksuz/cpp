#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(): Form("RobotomyRequestForm", 72, 45, "Default")
{

}

RobotomyRequestForm::RobotomyRequestForm(std::string target): Form("RobotomyRequestForm", 72, 45, target)
{

}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &ref): Form(ref)
{
	*this = ref;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &ref)
{
	(void) ref;
	return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm()
{

}

void RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
	if (this->getSign() != true)
	{
		throw(Form::FormIsNotSignedException());
	}
	else
	{
		if (this->getExecuteGrade() < executor.getGrade())
		{
			throw(Form::GradeTooLowException());
		}
		else
		{
			std::srand(std::time(NULL));
			if (std::rand() % 2)
			{
				std::cout << this->getTarget() << " has been robotomized successfully." << std::endl;
			}
			else
			{
				std::cout << this->getTarget() << " has been not robotomized!" << std::endl;
			}
		}
	}
}
