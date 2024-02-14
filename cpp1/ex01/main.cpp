#include "Zombie.hpp"

Zombie*	zombieHorde(int N, std::string name);


int	main()
{
	int	N = 5;
	Zombie* Horde = zombieHorde(N, "Zombo");

	for (int i = 0; i < N; i++)
		Horde->announce();
	delete[] Horde;

	return (0);
}
