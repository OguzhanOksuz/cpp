#include "BitcoinExchange.hpp"

int charCount(std::string str, char ch)
{
	int count = 0;

	for (int i = 0; str[i]; i++)
	{
		if (str[i] == ch)
			count++;
	}
	return (count);
}

int is_num(std::string str)
{
	for (int i = 0; str[i]; i++)
	{
		if (str[i] < '0' || str[i] > '9')
			return (-1);
	}
	return (1);

}

int checkDate(std::string str)
{
	std::stringstream ss(str);
	std::string year;
	std::string month;
	std::string day;

	if (charCount(str, '-') != 2)
		return (-1);
	getline(ss, year, '-');
	getline(ss, month, '-');
	getline(ss, day, '-');

	if (is_num(year) == -1 ||  is_num(month) == -1 || is_num(day) == -1)
		return (-1);

	int IntYear = stoi(year);
	int IntMonth = stoi(month);
	int IntDay = stoi(day);
	int IsLeap = 0;

	if (IntYear < 2009)
		return (-1);
	if (IntYear % 4 == 0)
		IsLeap = 1;
	if (IntMonth < 1 || IntMonth > 12)
		return (-1);
	if (IntMonth == 1 || IntMonth == 3 || IntMonth == 5 || IntMonth == 7 || IntMonth == 8 || IntMonth == 10 || IntMonth == 12)
		if (IntDay < 1 || IntDay > 31)
			return (-1);
	if (IntMonth == 4 || IntMonth == 6 || IntMonth == 9 || IntMonth == 11)
		if (IntDay < 1 || IntDay > 30)
			return (-1);
	if (IntMonth == 2)
	{
		if (IsLeap == 1)
			if (IntDay < 1 || IntDay > 29)
				return (-1);
		if (IsLeap == 0)
			if (IntDay < 1 || IntDay > 28)
				return (-1);
	}
	return (1);
}

int checkValue(std::string str)
{
	int flag = 0;
	for (int i = 0; str[i]; i++)
	{
		if (str[i] < '0' || str[i] > '9')
		{
			if (str[i] == '.')
			{
				flag++;
				if (flag > 1)
					return (-1);
			}
			else
			{
				return (-1);
			}
		}
	}
	return (1);
}

int getIntDate(std::string str)
{
	std::stringstream ss(str);
	std::string year;
	std::string month;
	std::string day;

	getline(ss, year, '-');
	getline(ss, month, '-');
	getline(ss, day, '-');

	int IntYear = stoi(year);
	IntYear -= 2009;
	int IntMonth = stoi(month);
	IntMonth -= 1;
	int rt = stoi(day);
	int IsLeap = IntYear % 4;

	while (IntYear > 0)
	{
		if (IntYear % 4 == 0)
			rt += 366;
		else
			rt += 365;
		IntYear--;
	}
	while (IntMonth > 0)
	{
		if (IntMonth == 1 || IntMonth == 3 || IntMonth == 5 || IntMonth == 7 || IntMonth == 8 || IntMonth == 10 || IntMonth == 12)
			rt += 31;
		if (IntMonth == 4 || IntMonth == 6 || IntMonth == 9 || IntMonth == 11)
			rt += 30;
		if (IntMonth == 2)
		{
			if (IsLeap == 0)
				rt += 29;
			if (IsLeap == 0)
				rt += 28;
		}
		IntMonth--;
	}
	return (rt);
}

double getIntValue(std::string str)
{
	return (stod(str));
}

int checkLineValue(std::string str)
{
	double num;

	if (checkValue(str) == 1)
	{
		num = std::stod(str);
		if (num < 0 || num > 1000)
			return (-2);
		return (1);
	}
	else
	{
		return (-1);
	}
}

double getValue(std::map<int, double> dataMap, int date, double value)
{
	std::map<int, double>::iterator it = dataMap.lower_bound(date);
	
	if (it->first == date)
	{
			return (it->second * value);
	}
	else
	{
		it--;
			return (it->second * value);
	}
}
