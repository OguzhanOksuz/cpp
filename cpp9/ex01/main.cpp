#include "RPN.hpp"

int main(int ac, char **av)
{
	double lval;
	double rval;
	std::stack<double> rpn;

	if (ac == 2)
	{
   		if (checkAv(av[1]))
		{
			for (int i = 0; av[1][i]; i++)
			{
				if (av[1][i] >= '0' && av[1][i] <= '9')
				{	
						rpn.push(av[1][i] - '0');
				}
				else if (av[1][i] == '+' || av[1][i] == '-' || av[1][i] == '*' || av[1][i] == '/')
				{
					if (rpn.size() >= 2)
					{
						rval = rpn.top();
						rpn.pop();
						lval = rpn.top();
						rpn.pop();
						rpn.push(operate(lval, rval, av[1][i]));
					}
					else
					{
						std::cout << "Error: Not enough values provided for opearator!" << std::endl;
						return (0);
					}
				}
			}
			std::cout << rpn.top() << std::endl;
		}
		else
		{
			std::cout << "Error: Invalid rpn format!" << std::endl;
		}
	}
	else
	{
		std::cout << "Error: Invalid arguman count!" << std::endl;
	}
	return (0);
}
