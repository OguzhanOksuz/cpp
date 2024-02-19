#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	public:
		ScavTrap();
		ScavTrap(const std::string name);
		ScavTrap(const ScavTrap &ref);
		ScavTrap &operator=(const ScavTrap &ref);
		~ScavTrap();
		void guardGate();
		void attack(std::string);
};

#endif
