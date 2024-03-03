#ifndef AFORM_HPP
#define AFORM_HPP

#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	private:
		const std::string name;
		bool sign;
		const int signGrade;
		const int executeGrade;
		const std::string target;
	public:
		Form();
		Form(std::string name, int signGrade, int executeGrade, std::string target);
		Form(const Form &ref);
		Form &operator=(const Form &ref);
		std::string getName() const;
		bool getSign() const;
		int getSignGrade() const;
		int getExecuteGrade() const;
		std::string getTarget() const;
		void beSigned(const Bureaucrat &ref);
		virtual void execute(Bureaucrat const &executor) const = 0;
		virtual ~Form();
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
		class FormIsNotSignedException: public std::exception
		{
			const char *what() const throw();
		};
};

std::ostream &operator<<(std::ostream &os, const Form &ref);

#endif
