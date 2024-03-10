#include "Array.hpp"

int main()
{
	{
		Array<int> a;
		Array<int> b(5);

		for (unsigned int i = 0; i < b.size(); i++)
		{
			b[i] = i;
		}

		try
		{
			std::cout << "size A = " << a.size() << std::endl;
			std::cout << "size B = " << b.size() << std::endl;
			for (unsigned int i = 0; i < b.size(); i++)
			{
				std::cout << "B[" << i << "] = " << b[i] << std::endl;
			}
			std::cout << b[5] << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << "Out of index!" << std::endl;
		}
	}
}
