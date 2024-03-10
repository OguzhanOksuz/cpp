#ifndef SCALARCONVERT_HPP
#define SCALARCONVERT_HPP

#include <iostream>
#include <sstream>

class ScalarConvert
{
	private:
		ScalarConvert();
		ScalarConvert(const ScalarConvert &ref);
		ScalarConvert &operator=(const ScalarConvert &ref);
		~ScalarConvert();
	public:
		static void convert(std::string str);
};

#endif
