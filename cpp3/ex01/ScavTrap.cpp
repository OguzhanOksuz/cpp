#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
	std::cout << "ScavTrap Default ScavTrap constructor called" << std::endl;
	this->name = "ScavTrap";
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->attackDamage = 20;
}

ScavTrap::ScavTrap(const std::string name) : ClapTrap()
{
	std::cout << "ScavTrap Default name constructor called" << std::endl;
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->attackDamage = 20;
	this->name = name;
}

ScavTrap::ScavTrap(const ScavTrap &ref)
{
	std::cout << "ScavTrap Copy constructor called" << std::endl;
	*this = ref;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &ref)
{
	std::cout << "ScavTrap Copy assigment called" << std::endl;
	this->name = ref.name;
	this->hitPoints = ref.hitPoints;
	this->energyPoints = ref.energyPoints;
	this->attackDamage = ref.attackDamage;
	return (*this);
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap Default deconstructor called" << std::endl;
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << this->name << " is now in Gate keeper mode!" << std::endl;
}

void ScavTrap::attack(std::string ref)
{
	if (this->energyPoints > 0 && this->hitPoints > 0)
		{
			std::cout << "ScavTrap " << this->name << " attacks " << ref << ", causing " << this->attackDamage << " points of damage!" << std::endl;
			this->energyPoints--;
			std::cout << "[HP:" << this->hitPoints << "|EP:" << this->energyPoints << "]" << std::endl;
		}
}
