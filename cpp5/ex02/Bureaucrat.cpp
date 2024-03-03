#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string name, int grade): name(name)
{
	if (grade < 1)
		throw(Bureaucrat::GradeTooHighException());
	if (grade > 150)
		throw(Bureaucrat::GradeTooLowException());
	this->grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat &ref)
{
	*this = ref; 
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &ref)
{
	this->grade = ref.getGrade();
	return(*this);
}

Bureaucrat::~Bureaucrat()
{

}

std::string Bureaucrat::getName() const
{
	return (this->name);
}

int Bureaucrat::getGrade() const
{
	return (this->grade);
}

void Bureaucrat::increment()
{
	if (this->grade <= 1)
		throw(Bureaucrat::GradeTooHighException());
	else
		this->grade--;
}

void Bureaucrat::decrement()
{
	if (this->grade >= 150)
		throw(Bureaucrat::GradeTooLowException());
	else
		this->grade++;
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Grade is too high!");
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Grade is too low!");
}

std::ostream &operator<<(std::ostream &os, const Bureaucrat &ref)
{
	os << ref.getName() << ", bureaucrat grade " << ref.getGrade() << "." << std::endl;
	return (os);
}

void Bureaucrat::signForm(Form &f)
{
	try
	{
		f.beSigned(*this);
		std::cout << this->getName() << " signed " << f.getName() << "." << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << this->getName() << " couldn't sign " << f.getName() << " because " << e.what() << std::endl;
	}
	}
