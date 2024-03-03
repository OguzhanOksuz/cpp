#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	private:
		const std::string name;
		bool sign;
		const int signGrade;
		const int executeGrade;
	public:
		Form(std::string name, int signGrade, int executeGrade);
		Form(const Form &ref);
		Form &operator=(const Form &ref);
		std::string getName() const;
		bool getSign() const;
		int getSignGrade() const;
		int getExecuteGrade() const;
		void beSigned(const Bureaucrat &ref);
		~Form();
		class GradeTooLowException: public std::exception
		{
			const char *what() const throw();
		};
		class GradeTooHighException: public std::exception
		{
			const char *what() const throw();
		};
		class FormIsSignedException: public std::exception
		{
			const char *what() const throw();
		};
};

std::ostream &operator<<(std::ostream &os, const Form &ref);

#endif
