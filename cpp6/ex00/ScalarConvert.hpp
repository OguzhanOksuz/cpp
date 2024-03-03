#ifndef SCALARCONVERT_HPP
#define SCALARCONVERT_HPP

#include <iostream>
#include <sstream>

class ScalarConvert
{
	public:
		ScalarConvert();
		ScalarConvert(const ScalarConvert &ref);
		ScalarConvert &operator=(const ScalarConvert &ref);
		~ScalarConvert();
		static void convert(std::string str);
};

#endif
