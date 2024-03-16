#include "RPN.hpp"

bool checkAv(char *av)
{

	int numFlag = 0;
	int opFlag = 0;

	for (int i = 0; av[i]; i++)
	{
		if (av[i] >= '0' && av[i] <= '9')
			numFlag++;
		else if (av[i] == '+' || av[i] == '-' || av[i] == '*' || av[i] == '/') 
		{
			if (opFlag == 0 && numFlag != 2)
			{	
				std::cout << "Error: Not enough values for first operator!" << std::endl;
				return (false);
			}
			numFlag = 0;
			opFlag++;
		}
		else if (av[i] != ' ')
		{
			return (false);
		}
		if (numFlag >= 3)
			return (false);

	}
	return (true);
}

double operate(double lval, double rval, char op)
{
	switch (op)
	{
		case '+':
			return (lval + rval);
		case '-':
			return (lval - rval);
		case '*':
			return (lval * rval);
		case '/':
			if (rval == 0)
			{
				std::cout << "Error: A value divided by 0" << std::endl;
				exit(1);
			}
			return (lval / rval);
		default:
			std::cout << "Error: A unknown operator" << std::endl;
			exit(1);
	}
}
