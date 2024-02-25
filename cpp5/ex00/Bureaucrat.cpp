#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{
	this->name = "Xavier";
	this->grade = 1;
}

Bureaucrat::Bureaucrat(std::string name)
{
	this->name = name;
	this->grade = 1;
}

Bureaucrat::Bureaucrat(int grade)
{
	this->name = "Xavier";
	if (grade > 15)
		throw (Bureaucrat::GradeTooHighException());
	if (grade < 1)
		throw(Bureaucrat::GradeTooLowException());
	this->grade = grade;
}

Bureaucrat::Bureaucrat(std::string name, int grade)
{
	this->name = name;
	if (grade > 150)
		throw(Bureaucrat::GradeTooHighException());
	if (grade < 1)
		throw(Bureaucrat::GradeTooLowException());
	this->grade = grade;
}

Bureaucrat::Bureaucrat(int grade, std::string name)
{
	if (grade > 150)
		throw(Bureaucrat::GradeTooHighException());
	if (grade < 1)
		throw(Bureaucrat::GradeTooLowException());
	this->name = name;
	this->grade = grade;
}

Bureaucrat::~Bureaucrat()
{

}

Bureaucrat::Bureaucrat(const Bureaucrat &ref)
{
	*this = ref;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &ref)
{
	this->name = ref.getName();
	this->grade = ref.getGrade();
	return (*this);
}

std::string Bureaucrat::getName() const
{
	return (this->name);
}

int Bureaucrat::getGrade()	const
{
	return (this->grade);
}

void Bureaucrat::increment()
{
	this->grade--;
	if (this->grade < 1)
		throw(Bureaucrat::GradeTooLowException());
}

void Bureaucrat::decrement()
{
	this->grade++;
	if (this->grade < 1)
		throw(Bureaucrat::GradeTooHighException());
}

std::ostream &operator<<(std::ostream &os, const Bureaucrat &ref)
{
	os << ref.getName();
	os << ", bureaucrat grade ";
	os << ref.getGrade();
	os << ".";
	os << std::endl;
	return (os);
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Grade is too low!");
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Grade is too high!");
}
