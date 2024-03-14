#include "BitcoinExchange.hpp"

int main(int ac, char **av)
{
	std::string CSV;
	std::map<int, double> dataMap;
	
	int flag = 0;
	(void) av; ///-------------------------- ///--------------------------

	if (ac == 2)
	{
		std::ifstream dataBase("data.csv");
		if (dataBase.is_open())
		{	
			std::stringstream ss(line);
			std::string line;
			std::string date;
			std::string value;
			while (std::getline(dataBase, line))
			{
				if (charCount(line, ',') != 1)
				{
					std::cout << "Error: Database line has invalid arguman count!" << std::endl;
					dataBase.close();
					return (1);
				}
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
				dataMap[getIntDate(date)] = getIntValue(value);
			}
			dataBase.close();
			std::ifstream Input(av[1]);
			if (Input.is_open())
			{
				flag = 0;
				while (std::getline(Input, line))
				{
					flag++;
					std::getline(ss, date, '|');
					std::getline(ss, value, '|');
					
					if (charCount(line, '|') != 1)
					{
						std::cout << "Error: bad input =>" << line << "!" << std::endl;
					}
					else if (date == "date " && value == " value")
					{
						if (flag != 1)
							std::cout << "Error: bad input =>" << line << "!" << std::endl;
					}
					else if (checkDate(date) == -1)
					{
						std::cout << "Error: bad date => " << date << "!" << std::endl;
					}
					else if (checkLineValue(value) == -1)
					{
						std::cout << "Error: not a positive number => " << value << "!" << std::endl;
					}
					else if (checkLineValue(value) == -2)
					{
						std::cout << "Error: too large number => " << value << "!" << std::endl;
					}
					else
					{
						std::cout << date << " => " << value << " = " << getValue(dataMap, date, value) << std::endl;
					}
					
				}
			}
			else
			{
				dataMap.clear();
				std::cout << "Error: Input file did not found!" << std::endl;
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
