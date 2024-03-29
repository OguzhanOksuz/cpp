#include "Zombie.hpp"

Zombie::Zombie()
{

}

Zombie::Zombie(std::string name)
{
	this->name = name;
	std::cout << name << ": created" << std::endl;
}

void Zombie::set_name(std::string name)
{
	this->name = name;
}

Zombie *newZombie(std::string name)
{
	return (new Zombie(name));
}

void	Zombie::announce()
{
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::~Zombie()
{
	std::cout << this->name << ": destroyed" << std::endl;
}
