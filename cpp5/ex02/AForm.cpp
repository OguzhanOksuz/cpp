#include "AForm.hpp"

AForm::AForm(std::string name, int signGrade, int executeGrade): name(name), signGrade(signGrade), executeGrade(executeGrade)
{
	this->sign = false;
	if (this->getSignGrade() < 1 || this->getExecuteGrade() < 1)
	{
		throw (AForm::GradeTooHighException());
	}
	if (this->getSignGrade() > 150 || this->getExecuteGrade() > 150)
	{
		throw (AForm::GradeTooLowException());
	}
}

AForm::AForm(const AForm &ref): name(ref.getName()), signGrade(ref.getSignGrade()), executeGrade(ref.getExecuteGrade())
{
	*this = ref;
}

AForm &AForm::operator=(const AForm &ref)
{
	this->sign = ref.getSign();
	return (*this);
}

AForm::~AForm()
{

}

std::string AForm::getName() const
{
	return (this->name);
}

bool AForm::getSign() const
{
	return (this->sign);
}

int AForm::getSignGrade() const
{
	return (this->signGrade);
}

int AForm::getExecuteGrade() const
{
	return (this->executeGrade);
}

void AForm::beSigned(const Bureaucrat &ref)
{
	if (this->getSign() == true)
			throw(AForm::FormIsSignedException());
	else if (ref.getGrade() > this->getSignGrade())
		throw (AForm::GradeTooLowException());
	else
		this->sign = true;
}

const char *AForm::GradeTooLowException::what() const throw()
{
	return ("Grade is too low!");
}

const char *AForm::GradeTooHighException::what() const throw()
{
	return ("Grade is too high!");
}

const char *AForm::FormIsSignedException::what() const throw()
{
	return ("AForm is already signed!");
}

std::ostream &operator<<(std::ostream &os, const AForm &f)
{
	os << f.getName() << ", form sign grade " << f.getSignGrade() << " execute grade " << f.getExecuteGrade();
	if (f.getSign() == true)
	{
		std::cout << " and form is signed." << std::endl;
	}
	else
	{
		std::cout << " and form is not signed." << std::endl;
	}
	return (os);
}
