#include "BitcoinExchange.hpp"

int main(int ac, char **av)
{
	std::string CSV;
	std::map<int, double> dataMap;
	
	int flag = 0;

	if (ac == 2)
	{
		std::ifstream dataBase("data.csv");
		if (dataBase.is_open())
		{	
			std::string line;
			std::string date;
			std::string value;
			while (std::getline(dataBase, line))
			{
				std::stringstream ss(line);
				if (charCount(line, ',') != 1)
				{
					std::cout << "Error: Database line has invalid arguman count = " << line << "!" << std::endl;
					dataBase.close();
					return (1);
				}
				std::getline(ss, date, ',');
				std::getline(ss, value, ',');
				if (date == "date" || value == "exchange_rate")
				{
					flag++;
					if (flag > 1)
					{
						std::cout << "Error: Database has more than one format line count = " << line << "!" << std::endl;
						dataBase.close();
						return (1);
					}
					continue;
				}
				else if (checkDate(date) == -1)
				{
					std::cout << "Error: Invalid date found in database = " << date << "!" << std::endl;
					dataBase.close();
					return (1);
				}
				else if (checkValue(value) == -1)
				{
					std::cout << "Error: Invalid value found in database = " << line << "!" << std::endl;
					dataBase.close();
					return (1);
				}
				dataMap[getIntDate(date)] = getIntValue(value);
				ss.clear();
			}
			std::ifstream Input(av[1]);
			if (Input.is_open())
			{
				flag = 0;
				while (std::getline(Input, line))
				{
					std::stringstream ss(line);
					flag++;
					std::getline(ss, date, '|');
					std::getline(ss, value, '|');

					if (date[date.size() - 1] == ' ')
						date.pop_back();
					if (value[0] == ' ')
						value.erase(0, 1);
					if (charCount(line, '|') != 1)
					{
						std::cout << "Error: bad input => " << line << "!" << std::endl;
					}
					else if (date == "date " && value == " value")
					{
						if (flag != 1)
							std::cout << "Error: bad input => " << line << "!" << std::endl;
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
					else if (getIntDate(date) < dataMap.begin()->first)
					{
						std::cout<< "Error: date is older than fist data => " << date << "!" << std::endl; 
					}
					else
					{
						std::cout << date << " => " << value << " = " << getValue(dataMap, getIntDate(date), getIntValue(value)) << std::endl;
					}
					ss.clear();
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
