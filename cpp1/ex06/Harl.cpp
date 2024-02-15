#include "Harl.hpp"

Harl::Harl()
{

}

void	Harl::debug(void)
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
}

void	Harl::info(void)
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void	Harl::warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void	Harl::error(void)
{
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}


void	Harl::complain(std::string level)
{
	int i = 0;
	void (Harl::*func)();
	void (Harl::*functions[])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};

	std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	for (; i < 4 && level != levels[i]; ++i);
	if (i < 4)
		std::cout << "[" << level << "]" << std::endl;
	switch (i)
	{
		case 0:
			(this->*functions[i++])();
		case 1:
			(this->*functions[i++])();
		case 2:
			(this->*functions[i++])();
		case 3 :
			(this->*functions[i++])();
			break;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}
}

Harl::~Harl()
{

}
