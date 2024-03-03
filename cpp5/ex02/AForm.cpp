#include "AForm.hpp"

Form::Form(std::string name, int signGrade, int executeGrade, std::string target): name(name), signGrade(signGrade), executeGrade(executeGrade), target(target)
{
	this->sign = false;
	if (this->getSignGrade() < 1 || this->getExecuteGrade() < 1)
	{
		throw (Form::GradeTooHighException());
	}
	if (this->getSignGrade() > 150 || this->getExecuteGrade() > 150)
	{
		throw (Form::GradeTooLowException());
	}
}

Form::Form(const Form &ref): name(ref.getName()), signGrade(ref.getSignGrade()), executeGrade(ref.getExecuteGrade())
{
	*this = ref;
}

Form &Form::operator=(const Form &ref)
{
	this->sign = ref.getSign();
	return (*this);
}

Form::~Form()
{

}

std::string Form::getName() const
{
	return (this->name);
}

bool Form::getSign() const
{
	return (this->sign);
}

int Form::getSignGrade() const
{
	return (this->signGrade);
}

int Form::getExecuteGrade() const
{
	return (this->executeGrade);
}

std::string Form::getTarget() const
{
	return (this->target);
}

void Form::beSigned(const Bureaucrat &ref)
{
	if (this->getSign() == true)
			throw(Form::FormIsSignedException());
	else if (ref.getGrade() > this->getSignGrade())
		throw (Form::GradeTooLowException());
	else
		this->sign = true;
}

const char *Form::GradeTooLowException::what() const throw()
{
	return ("Grade is too low!");
}

const char *Form::GradeTooHighException::what() const throw()
{
	return ("Grade is too high!");
}

const char *Form::FormIsSignedException::what() const throw()
{
	return ("Form is already signed!");
}

const char *Form::FormIsNotSignedException::what() const throw()
{
	return ("Form is not signed!");
}

std::ostream &operator<<(std::ostream &os, const Form &f)
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
