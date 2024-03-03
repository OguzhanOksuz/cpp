#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <exception>
#include "AForm.hpp"

class Form;

class Bureaucrat
{
	private:
		const std::string name;
		int grade;
	public:
		Bureaucrat();
		Bureaucrat(std::string name, int grade);
		Bureaucrat(const Bureaucrat &ref);
		Bureaucrat &operator=(const Bureaucrat &ref);
		std::string getName() const;
		int getGrade() const;
		void increment();
		void decrement();
		void signForm(Form &f);
		void executeForm(Form const &form);
		~Bureaucrat();
		class GradeTooHighException: public std::exception
		{
			const char *what() const throw();
		};
		class GradeTooLowException: public std::exception
		{
			const char *what() const throw();
		};
};

std::ostream &operator<<(std::ostream &os, const Bureaucrat &ref);

#endif
