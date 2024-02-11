#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	this->_counter = 0;
	std::cout << "Enter 'ADD' to add a contact" << std::endl;
	std::cout << "Enter 'SEARCH' to search on contacts" << std::endl;
	std::cout << "Enter 'EXIT' to close phonebook" << std::endl;
}

void	PhoneBook::add()
{
	std::string	prompt;

	prompt = "";
	if (this->_counter > 7)
		std::cout << "Writing on the oldest one" << std::endl;
	while (prompt == "")
	{
		std::cout << "Enter the first name : ";
		std::getline(std::cin, prompt);
		if (prompt == "")
			std::cout << "Empty entry!" << std::endl;
	}
	this->_contacts[this->_counter % 8].set_first_name(prompt);
	prompt = "";
	while (prompt == "")
	{
		std::cout << "Enter the last name : ";
		std::getline(std::cin, prompt);
		if (prompt == "")
			std::cout << "Empty entry!" << std::endl;
	}
	this->_contacts[this->_counter % 8].set_last_name(prompt);
	prompt = "";
	while (prompt == "")
	{
		std::cout << "Enter the nickname : ";
		std::getline(std::cin, prompt);
		if (prompt == "")
			std::cout << "Empty entry!" << std::endl;
	}
	this->_contacts[this->_counter % 8].set_nickname(prompt);
	prompt = "";
	while (prompt == "")
	{
		std::cout << "Enter the phone number : ";
		std::getline(std::cin, prompt);
		if (prompt == "")
			std::cout << "Empty entry!" << std::endl;
	}
	this->_contacts[this->_counter % 8].set_phone_number(prompt);
	prompt = "";
	while (prompt == "")
	{
		std::cout << "Enter the darkest secret : ";
		std::getline(std::cin, prompt);
		if (prompt == "")
			std::cout << "Empty entry!" << std::endl;
	}
	this->_contacts[this->_counter % 8].set_darkest_secret(prompt);
	prompt = "";
	this->_counter++;
}

void	PhoneBook::search()
{
	int		i;
	std::string	str;

	std::cout << "|------------MY AWSOME PHONEBOOK------------|" << std::endl;
	std::cout << "|     INDEX|FIRST NAME| LAST NAME|  NICKNAME|" << std::endl;
	std::cout << "|----------|----------|----------|----------|" << std::endl;
	i = -1;
	str = "";
	while (++i < 8)
	{
		std::cout << "|         " << i;
		std::cout << "|" << this->format(this->_contacts[i].get_first_name());
		std::cout << "|" << this->format(this->_contacts[i].get_last_name());
		std::cout << "|" << this->format(this->_contacts[i].get_nickname());
		std::cout << "|" << std::endl;
	}
	std::cout << "Enter the index of the entry to display : " << std::flush;
	std::getline(std::cin, str);
	if (str == "0" || str == "1" || str == "2" || str == "3" || str == "4" || str == "5" || str == "6" || str == "7")
	{
		std::cout << "Index = " << str << std::endl;
		std::cout << "First Name = " << this->_contacts[str[0] - '0'].get_first_name() << std::endl;
		std::cout << "Last Name = " << this->_contacts[str[0] - '0'].get_last_name() << std::endl;
		std::cout << "Nickame = " << this->_contacts[str[0] - '0'].get_nickname() << std::endl;
		std::cout << "Phone Number = " << this->_contacts[str[0] - '0'].get_phone_number() << std::endl;
		std::cout << "Darkest Secret = " << this->_contacts[str[0] - '0'].get_darkest_secret() << std::endl;
	}
}

std::string PhoneBook::format(std::string str)
{
	if (str.size() > 10)
	{
		str.resize(10);
		str[9] = '.';
	}
	else
	{
		while (str.size() < 10)
			str.insert(0, " ");
	}
	return (str);
}

PhoneBook::~PhoneBook()
{
	std::cout << "* PhoneBook has been closed *" << std::endl;
}
