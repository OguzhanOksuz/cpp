#include "PhoneBook.hpp"

int main()
{
	std::string prompt;
	PhoneBook	phonebook;
	
	prompt = "";
	while (prompt != "EXIT")
	{
		if (prompt == "ADD")
		{
			phonebook.add();
		}
		else if (prompt == "SEARCH")
		{
			phonebook.search();
		}
		else if (prompt != "")
		{
			std::cout << "Entered an invalid command!" << std::endl;
		}
		std::cout << "command>" << std::flush;
		std::getline(std::cin, prompt);
	}
	return (0);
}
