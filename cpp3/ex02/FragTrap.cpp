#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
	std::cout << "FragTrap Default constructor called" << std::endl;
	this->name = "FragTrap";
	this->hitPoints = 100;
	this->energyPoints = 100;
	this->attackDamage = 30;
}

FragTrap::FragTrap(std::string name) : ClapTrap()
{
	std::cout << "FragTrap Default name constructor called" << std::endl;
	this->name = name;
	this->hitPoints = 100;
	this->energyPoints = 100;
	this->attackDamage = 30;
}

FragTrap::FragTrap(const FragTrap &ref)
{
	std::cout << "FragTrap Default copy constructor called" << std::endl;
	*this = ref;
}

FragTrap &FragTrap::operator=(const FragTrap &ref)
{
	std::cout << "FragTrap Default copy assignment called" << std::endl;
	this->name = ref.name;
	this->hitPoints = ref.hitPoints;
	this->energyPoints = ref.energyPoints;
	this->attackDamage = ref.attackDamage;
	return (*this);
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap Default decstructor called" << std::endl;

}

void FragTrap::highFivesGuys(void)
{
	std::cout << this->name << " : lets high fives guys!" << std::endl;
}

void FragTrap::attack(const std::string ref)
{
	if (this->energyPoints > 0 && this->hitPoints > 0)
		{
			std::cout << "FragTrap " << this->name << " attacks " << ref << ", causing " << this->attackDamage << " points of damage!" << std::endl;
			this->energyPoints--;
			std::cout << "[HP:" << this->hitPoints << "|EP:" << this->energyPoints << "]" << std::endl;
		}
}
