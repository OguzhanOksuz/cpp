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
	CT2.attack("CT3");
	CT2.attack("CT3");
	CT2.attack("CT3");
	CT2.attack("CT3");
	CT2.attack("CT3");
	std::cout << "-------" << std::endl;
	CT2.attack("CT3");
	CT2.attack("CT3");
	CT2.beRepaired(1);
	CT2.beRepaired(1);
	std::cout << "-------" << std::endl;

	CT3.attack("CT1");
	CT3.attack("CT1");
	CT3.beRepaired(1);
	CT3.beRepaired(1);

	CT3.takeDamage(1);
	CT3.takeDamage(1);
	CT3.takeDamage(1);
	CT3.takeDamage(1);
	CT3.takeDamage(1);
	CT3.takeDamage(1);
	CT3.takeDamage(1);
	CT3.takeDamage(1);
	CT3.takeDamage(1);
	CT3.takeDamage(1);
	CT3.takeDamage(1);
	CT3.takeDamage(1);
	std::cout << "-------" << std::endl;
	CT3.takeDamage(1);
	CT3.takeDamage(1);
	std::cout << "-------" << std::endl;
	CT3.attack("CT1");
	CT3.attack("CT1");
	CT3.beRepaired(1);
	CT3.beRepaired(1);

	ClapTrap CCT1 = ClapTrap(CT1);
	CCT1.attack("CT1");
	CCT1.attack("CT1");

	ClapTrap CT4 = ClapTrap("CT4");
	ClapTrap CCT4 = ClapTrap(CT4);

	CCT4.attack("CT1");
	CCT4.attack("CT1");
	CCT4.attack("CT1");
	CCT4.attack("CT1");

	CT4.attack("CT1");
	CT4.attack("CT1");
	CT4.attack("CT1");
	CT4.attack("CT1");

	ClapTrap ECT1 = CT1;
	ClapTrap ECT4 = CT4;

	ECT1.attack("CT1");
	ECT1.attack("CT1");
	ECT1.attack("CT1");
	ECT1.attack("CT1");

	ECT4.attack("CT1");
	ECT4.attack("CT1");
	ECT4.attack("CT1");
	ECT4.attack("CT1");

	CT4.attack("CT2");
	CT4.attack("CT2");
	CT4.attack("CT2");
	CT4.attack("CT2");
}
