#include "FragTrap.hpp"

int main()
{
	FragTrap FT1 = FragTrap("ST1");
	FragTrap FT2 = FragTrap();

	FT1.attack("ST2");
	FT1.takeDamage(1);
	FT1.beRepaired(1);
	FT1.highFivesGuys();

	std::cout << "------" << std::endl;

	FT2.attack("ST1");
	FT2.takeDamage(1);
	FT2.beRepaired(1);
	FT2.highFivesGuys();
}
