#include "ScavTrap.hpp"

int main()
{
	ScavTrap ST1 = ScavTrap("ST1");
	ScavTrap ST2 = ScavTrap();

	ST1.attack("ST2");
	ST1.takeDamage(1);
	ST1.beRepaired(1);
	ST1.guardGate();

	std::cout << "------" << std::endl;

	ST2.attack("ST1");
	ST2.takeDamage(1);
	ST2.beRepaired(1);
	ST2.guardGate();
}
