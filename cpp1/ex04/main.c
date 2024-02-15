#include <iostream>
#include <fstream>

int	main(int ac, char **av)
{
	std::string	str;
	char		ch;
	int pos;
	
	if (ac == 4)
	{
		std::ifstream file(av[1]);
		
		if (file.is_open())
		{
			while (file.get(ch))
				str += ch;
			file.close();

			const std::string outFileName = (std::string(av[1]) + ".replace");
			std::ofstream outFile(outFileName.c_str());
			if (outFile.is_open())
			{
				for (long unsigned int i = 0; i < str.size(); i++)
				{
					pos = str.find(av[2], i);
					if (pos != -1 && pos == (int)i)
					{
						outFile << av[3];
						i += std::string(av[2]).size() - 1;
					}
					else
						outFile << str[i];
				}
				outFile.close();
				return(0);
			}
			else
				std::cout << "new file did not created!" << std::endl;
		}
		else
			std::cout << "file did not open!" << std::endl;
	}
	else
		std::cout << "wrong arguman count!" << std::endl;
	return (1);
}
