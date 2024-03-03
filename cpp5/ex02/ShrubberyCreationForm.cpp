#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(): Form("ShrubberyCreationForm", 145, 137, "default")
{

}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target): Form("ShrubberyCreationForm", 145, 137, target)
{

}


ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &ref): Form(ref)
{
	*this = ref;
}


ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &ref)
{
	(void) ref;
	return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{

}

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
	if (this->getSign() != true)
	{
		throw(Form::FormIsNotSignedException());
	}
	else
	{
		if (this->getExecuteGrade() < executor.getGrade())
		{
			throw(Form::GradeTooLowException());
		}
		else
		{
			std::string osName = this->getTarget();
			osName += "_shrubbery";
			std::ofstream os(osName.c_str());
			os << " ooo " << std::endl;
			os << "ooooo" << std::endl;
			os << "ooooo" << std::endl;
			os << " ooo " << std::endl;
			os << "  |  " << std::endl;
			os << "  |  " << std::endl;
			os << "  U  " << std::endl;
			os.close();
		}
	}

}

