#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>

template<typename T>
class Array
{
	private:
		T *array;
		unsigned int len;
	public:
		Array()
		{
			this->array = new T[0];
			this->len = 0;
		}
		Array(unsigned int len)
		{
			this->array = new T[len];
			this->len = len;
		}
		Array(const Array &ref)
		{
			this->len = ref.len;
			this->array = new T[this->len];
			for(unsigned int i = 0; i < this->len; i++)
			{
				this->array[i] = ref.array[i];
			}
		}
		Array &operator=(const Array &ref)
		{
			if (this != ref)
			{
				delete[] this->array;
				this->len = ref.len;
				this->array = new T[this->len];
				for(unsigned int i = 0; i < this->len; i++)
				{
					this->array[i] = ref.array[i];
				}
			}
		}
		~Array()
		{
			delete[] array;
		}
		T &operator[](unsigned int i) const
		{
			if (i >= this->len)
				throw std::exception();
			return (array[i]);
		}
		unsigned int size() const
		{
			return (this->len);
		}
};

#endif
