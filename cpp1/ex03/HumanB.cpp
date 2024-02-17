#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
	this->name = name;
	this->weapon.setType("");
}

void	HumanB::attack()
{
	std::cout << this->name << " attacks with their " << this->weapon.getType() << std::endl;
}

void	HumanB::setWeapon(Weapon weapon)
{
	this->weapon = weapon;
}

HumanB::~HumanB()
{

}
