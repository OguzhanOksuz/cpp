#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>

class Zombie
{
	private:
		std::string	name;
	public:
		Zombie();
		Zombie(std::string name);
		void set_name(std::string name);
		void announce(void);
		Zombie* newZombie(std::string name);
		~Zombie();
};

#endif
