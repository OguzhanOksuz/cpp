#include "BitcoinExchange.hpp"

int main(int ac, char **av)
{
	std::string CSV;
	std::string line;
	std::string date;
	std::string value;
	
	int flag = 0;
	(void) av; ///-------------------------- ///--------------------------

	if (ac == 2)
	{
		std::ifstream dataBase("data.csv");
		if (dataBase.is_open())
		{
			while (std::getline(dataBase, line))
			{
				if (charCount(line, ',') != 1)
				{
					std::cout << "Error: Database line has invalid arguman count!" << std::endl;
					dataBase.close();
					return (1);
				}
				std::stringstream ss(line);
				std::getline(ss, date, ',');
				std::getline(ss, value, ',');
				if (date == "data" || value == "exchange_rate")
				{
					flag++;
					if (flag > 1)
					{
						std::cout << "Error: Database has more than one format line count!" << std::endl;
						dataBase.close();
						return (1);
					}
				}
				else if (checkDate(date) == -1)
				{
					std::cout << "Error: Invalid date found in database!" << std::endl;
					dataBase.close();
					return (1);
				}
				else if (checkValue(value) == -1)
				{
					std::cout << "Error: Invalid value found in database!" << std::endl;
					dataBase.close();
					return (1);
				}
			}
		}
		else
		{
			std::cout << "Error: Database did not found!" << std::endl;
		}
	}
	else
	{
		std::cout << "Error: Invalid arguman count!" << std::endl;
	}
	return (1);
}
