#include "Zombie.hpp"

Zombie*	newZombie(std::string name);
void	randomChump(std::string name);


int	main()
{
	Zombie	Z1("Z1");
	Zombie	Z2("Z2");
	Zombie*	ZP = newZombie("ZP");
	randomChump("ZR");
	Z1.announce();
	ZP->announce();
	delete ZP;
}
