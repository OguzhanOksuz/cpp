#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	private:
		const std::string name;
		bool isSigned;
		const int signGrade;
		const int executeGrade;
	public:
		Form(std::string name, int signGrade, int executeGrade);
		Form(const Form &ref);
		Form &operator=(const Form &ref);
		void beSigned(const Bureaucrat &b);
		std::string getName() const;
		bool getSign() const;
		int getSignGrade() const;
		int getExecuteGrade() const;
		~Form();
	class GradeTooLowException: public std::exception
	{
		public:
			const char *what() const throw();
	};
	class GradeTooHighException: public std::exception
	{
		public:
			const char *what() const throw();
	};
};

std::ostream &operator<<(std::ostream &os, const Form &ref);

#endif
