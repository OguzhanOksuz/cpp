#include "Form.hpp"

Form::Form(std::string name, int signGrade, int executeGrade): name(name), isSigned(false), signGrade(signGrade), executeGrade(executeGrade)
{
	if (signGrade > 150 || executeGrade > 150)
		throw(Form::GradeTooLowException());
	if (signGrade < 1 || executeGrade < 1)
		throw(Form::GradeTooHighException());
}

Form::Form(const Form &ref): name(ref.getName()), isSigned(ref.getSign()), signGrade(ref.getSignGrade()), executeGrade(ref.getExecuteGrade())
{
	if (signGrade > 150 || executeGrade > 150)
		throw(Form::GradeTooLowException());
	if (signGrade < 1 || executeGrade < 1)
		throw(Form::GradeTooHighException());
	*this = ref;
}

Form &Form::operator=(const Form &ref)
{
	this->isSigned = ref.getSign();
	return (*this);
}

Form::~Form()
{

}

void	Form::beSigned(const Bureaucrat &b)
{
	if (this->signGrade < b.getGrade())
		throw(Form::GradeTooLowException());
	this->isSigned = true;
}

const char *Form::GradeTooLowException::what() const throw()
{
	return ("Grade is too low!");
}

const char *Form::GradeTooHighException::what() const throw()
{
	return ("Grade is too high!");
}

std::ostream &operator<<(std::ostream &os, const Form &ref)
{
	os << ref.getName() << ", form sign grade is " << ref.getSignGrade() << " and execute grade is " << ref.getExecuteGrade() << "." << std::endl;
	return (os);
}

std::string Form::getName() const
{
	return (this->name);
}

bool Form::getSign() const
{
	return (this->isSigned);
}

int Form::getSignGrade() const
{
	return (this->signGrade);
}

int Form::getExecuteGrade() const
{
	return (this->executeGrade);
}
