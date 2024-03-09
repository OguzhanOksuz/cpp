#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(): Form("PresidentialPardonForm", 25, 5, "Default")
{

}

PresidentialPardonForm::PresidentialPardonForm(std::string target): Form("PresidentialPardonForm", 25, 5, target)
{

}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &ref): Form(ref)
{
	(*this = ref);
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &ref)
{
	(void) ref;
	return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm()
{

}

void PresidentialPardonForm::execute(Bureaucrat const &executor) const
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
			std::cout << this->getTarget() << " has been pardoned by Zaphod Beeblebrox." << std::endl;
		}
	}
}


