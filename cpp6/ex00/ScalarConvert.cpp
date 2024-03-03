#include "ScalarConvert.hpp"

ScalarConvert::ScalarConvert()
{

}

ScalarConvert::ScalarConvert(const ScalarConvert &ref)
{
	(void)ref;
}

ScalarConvert &ScalarConvert::operator=(const ScalarConvert &ref)
{
	(void)ref;
	return (*this);
}
		
ScalarConvert::~ScalarConvert()
{

}

void ScalarConvert::convert(std::string str)
{
	{
		std::stringstream s(str);
		int num;
		s >> num;
		if (!s.fail())
		{
			if (num >= 0 && num <= 127)
			{
				char ch = static_cast<char>(num);;
				if (ch >= 32 && ch <= 126)
				{
					std::cout << "char: '" << ch << "'" << std::endl;
				}
				else
				{
					std::cout << "char: Non displayable" << std::endl;
				}
			}
			else
			{
				std::cout << "char: impossible" << std::endl;
			}
		}
		else
		{
			std::cout << "char: impossible" << std::endl;
		}
	}

	{
		std::stringstream s(str);
		int num;
		s >> num;
		if (!s.fail())
		{
			int Int = std::stoi(str);
			std::cout << "int: " << Int <<  std::endl;
		}
		else
		{
			std::cout << "int: impossible" << std::endl;
		}
	}

	{
		std::stringstream s(str);
		float num;
		s >> num;
		if (str == "inf" || str == "inff")
		{
			std::cout << "float: inff" << std::endl;
		}
		else if (str == "-inf" || str == "-inff")
		{
			std::cout << "float: -inff" << std::endl;
		}
		else if (str == "nan" || str == "nanf")
		{
			std::cout << "float: nanf" << std::endl;
		}
		else if (!s.fail())
		{
			float Float = std::stof(str);
			if (Float - static_cast<int>(Float) == 0)
			{
				std::cout << "float: " << Float << ".0f" << std::endl;
			}
			else
			{
				std::cout << "float: " << Float << "f" << std::endl;
			}
		}
		else
		{
			std::cout << "float: impossible" << std::endl;
		}
	}

	{
		std::stringstream s(str);
		double num;
		s >> num;
		if (str == "inf" || str == "inff")
		{
			std::cout << "double: inf" << std::endl;
		}
		else if (str == "-inf" || str == "-inff")
		{
			std::cout << "double: -inf" << std::endl;
		}
		else if (str == "nan" || str == "nanf")
		{
			std::cout << "double: nan" << std::endl;
		}
		else if (!s.fail())
		{
			double Double = std::stod(str);
			if (Double - static_cast<int>(Double) == 0)
			{
				std::cout << "double: " << Double << ".0" << std::endl;
			}
			else
			{
				std::cout << "double: " << Double << ".0" <<  std::endl;
			}
		}
		else
		{
			std::cout << "double: impossible" << std::endl;
		}
	}
}
		
