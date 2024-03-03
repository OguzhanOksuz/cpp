#ifndef DATA_HPP
#define DATA_HPP

class Data
{
	public:
		int value;
		Data(int val);
		Data(const Data &ref);
		Data &operator=(const Data &ref);
		~Data();
};

#endif
