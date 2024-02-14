#ifndef ZOMBIE_HPP
# define ZOMBUE_HPP

#include <iostream>

class Zombie
{
	private:
		std::string	name;
	public:
		Zombie();
		Zombie(std::string name);
		void announce(void);
		Zombie* newZombie(std::string name);
		~Zombie();
};

#endif
