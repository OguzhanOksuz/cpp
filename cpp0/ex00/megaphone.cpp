#include <iostream>

int main(int ac, char **av)
{
	int	i;
	int	j;

	i = 0;
	if (ac == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	while (av[++i])
	{
		j = -1;
		while (av[i][++j])
			if (av[i][j] >= 'a' && av[i][j] <= 'z')
				av[i][j] -= 32;
		std::cout << av[i];
	}
	std::cout << std::endl;
	return (0);
}
