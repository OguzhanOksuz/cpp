#ifndef AFORM_HPP
#define AFORM_HPP

#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
	private:
		const std::string name;
		bool sign;
		const int signGrade;
		const int executeGrade;
	public:
		AForm(std::string name, int signGrade, int executeGrade);
		AForm(const AForm &ref);
		AForm &operator=(const AForm &ref);
		std::string getName() const;
		bool getSign() const;
		int getSignGrade() const;
		int getExecuteGrade() const;
		void beSigned(const Bureaucrat &ref);
		virtual execute(Bureaucrat const &executor) const = 0;
		virtual ~AForm();
		class GradeTooLowException: public std::exception
		{
			const char *what() const throw();
		};
		class GradeTooHighException: public std::exception
		{
			const char *what() const throw();
		};
		class AFormIsSignedException: public std::exception
		{
			const char *what() const throw();
		};
};

std::ostream &operator<<(std::ostream &os, const AForm &ref);

#endif
