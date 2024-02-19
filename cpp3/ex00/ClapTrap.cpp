#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout << "Default constructor called" << std::endl;
	this->name = "ClapTrap";
	this->hitPoints = 10;
	this->energyPoints = 10;
	this->attackDamage = 0;
}

ClapTrap::ClapTrap(std::string name)
{
	std::cout << "Default name constructor called" << std::endl;
	this->hitPoints = 10;
	this->energyPoints = 10;
	this->attackDamage = 0;
	this->name = name;
}

ClapTrap::ClapTrap(const ClapTrap &ref)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = ref;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &ref)
{
	std::cout << "Copy assigment called" << std::endl;
	this->name = ref.name;
	this->hitPoints = ref.hitPoints;
	this->energyPoints = ref.energyPoints;
	this->attackDamage = ref.attackDamage;
	return (*this);
}

ClapTrap::~ClapTrap()
{
	std::cout << "Default deconstructor called" << std::endl;
}

void ClapTrap::attack(const std::string &ref)
{
	if (this->energyPoints > 0 && this->hitPoints > 0)
	{
		std::cout << "ClapTrap " << this->name << " attacks " << ref << ", causing " << this->attackDamage << " points of damage!" << std::endl;
		this->energyPoints--;
		std::cout << "[HP:" << this->hitPoints << "|EP:" << this->energyPoints << "]" << std::endl;
	}
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->hitPoints > 0)
	{
		this->hitPoints -= amount;
		if (this->hitPoints <= 0)
			this->hitPoints = 0;
		std::cout << "ClapTrap " << this->name << " gets hit " << amount << " damage, " << this->hitPoints << " hitPoints remaining!" << std::endl;
		std::cout << "[HP:" << this->hitPoints << "|EP:" << this->energyPoints << "]" << std::endl;
	}	
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->energyPoints > 0 && this->hitPoints > 0)
	{
		std::cout << "ClapTrap " << this->name << " repairs itself " << amount << " hitPoints!" << std::endl;
		std::cout << "[HP:" << this->hitPoints << "|EP:" << this->energyPoints << "]" << std::endl;
		this->hitPoints++;
		this->energyPoints--;
	}
}
