#include "ClapTrap.hpp"

int main()
{
	ClapTrap CT1 = ClapTrap("ClapTrap1");
	ClapTrap CT2 = ClapTrap("ClapTrap2");
	ClapTrap CT3 = ClapTrap();

	CT1.attack("CT2"); //1
	CT1.attack("CT2"); //2
	CT1.attack("CT2"); //3
	CT1.attack("CT2"); //4
	CT1.attack("CT2"); //5
	CT1.attack("CT2"); //6
	CT1.attack("CT2"); //7
	CT1.attack("CT2"); //8
	CT1.attack("CT2"); //9
	CT1.attack("CT2"); //10
	std::cout << "-------" << std::endl;
	CT1.attack("CT2"); //11
	CT1.attack("CT2"); //12
	CT1.attack("CT2"); //13
	std::cout << "-------" << std::endl;

	CT2.takeDamage(1);
	CT2.takeDamage(1);
	CT2.takeDamage(1);
	CT2.takeDamage(1);
	CT2.takeDamage(1);
	CT2.beRepaired(1);
	CT2.beRepaired(1);
	CT2.beRepaired(1);
	CT2.beRepaired(1);
	CT2.beRepaired(1);
}
