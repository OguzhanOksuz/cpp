#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string name, int grade)
{
	this->name = name;
	if (grade > 150)
		throw(Bureaucrat::GradeTooLowException());
	if (grade < 1)
		throw(Bureaucrat::GradeTooHighException());
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
	if (this->grade == 1)
		throw(Bureaucrat::GradeTooHighException());
	this->grade--;
}

void Bureaucrat::decrement()
{
	if (this->grade == 150)
		throw(Bureaucrat::GradeTooLowException());
	this->grade++;
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

void Bureaucrat::signForm(Form &f)
{
	try
	{
		f.beSigned(*this);
		std::cout << this->getName() << " signed " << f.getName() << "." << std::endl;
	}
	catch (std::exception &e)
	{
		if (f.getSign() == true)
			std::cout << this->getName() << " couldn't sign " << f.getName() << " because form is alredy signed." << std::endl;
		if (f.getSignGrade() < this->grade)
			std::cout << this->getName() << " couldn't sign " << f.getName() << " because form requerd higer grade." << std::endl;
	}
}
