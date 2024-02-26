#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>

class Form
{
	private:
		const std::string name;
		bool signed;
		const int signGrade;
		const int executeGrade;
	public:
		Form(std::string name, int signGrade, int executeGrade);
		Form(const Form &ref);
		Form &operator=(const Form &ref);
		~Form();
		void beSigned(const Bureaucrat &b);
	class GradeTooLowException : Public std::exception
	{
		public:
			const char *what const throw();
	};
	class GradeTooHighException : Public std::exception
	{
		public:
			const char *what const throw();
	};
};

std::ostream &operator<<(std::ostream &ref, Form &ref);

#endif
