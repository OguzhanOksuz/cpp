#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"
# include <iostream>

class PhoneBook
{
	private:
		Contact _contacts[8];
		int	_counter;
	public:
		PhoneBook();
		void	add();
		void	search();
		std::string	format(std::string str);
		~PhoneBook();
};

#endif
