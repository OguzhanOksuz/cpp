#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>

class Bureaucrat
{
	private:
		std::string name;
		int grade;
	public:
		Bureaucrat();
		Bureaucrat(std::string name);
		Bureaucrat(int grade);
		Bureaucrat(std::string name, int grade);
		Bureaucrat(int grade, std::string name);
		Bureaucrat(const Bureaucrat &ref);
		Bureaucrat &operator=(const Bureaucrat &ref);
		~Bureaucrat();
		std::string getName() const;
		int getGrade() const;
		void increment();
		void decrement();
		class GradeTooHighException : public std::exception
		{
			const char *what() const throw();
		};
		class GradeTooLowException : public std::exception
		{
			const char *what() const throw();
		};
};

std::ostream &operator<<(std::ostream &os, const Bureaucrat &ref);

#endif
