include "form.hpp"

Form::Form(std::string name, int signGrade, int executeGrade)
{
	this->name = name;
	this->signed = false;
	this->signGrade = signGrade;
	this->executeGrade = executeGrade;
}

Form::Form(const Form &ref)
{
	*this = ref;
}

Form &Form::operator=(const Form &ref)
{
	this->name = ref.name;
	this->signGrade = ref.signGrade;
	this->executeGrade = ref.executeGrade;
}

Form::~Form()
{

}

void	beSigned(const Bureaucrat &b)
{

}


const char *Form::GradeTooLowException::what() const throw()
{
	return ("Grade is too low!");
}

const char *Form::GradeTooHighException::what() const throw()
{
	return ("Grade is too high!");
}
