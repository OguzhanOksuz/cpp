#include "whatever.hpp"
#include <iostream>

class Awsome
{
	public:
		Awsome(void):_n(0){}
		Awsome(int n):_n(n){}
		Awsome &operator=(Awsome &a){_n = a._n; return *this; }
		bool operator==(Awsome const &rhs)const{return (this->_n == rhs._n); }
		bool operator!=(Awsome const &rhs)const{return (this->_n != rhs._n); }
		bool operator>(Awsome const &rhs)const{return (this->_n > rhs._n); }
		bool operator<(Awsome const &rhs)const{return (this->_n < rhs._n); }
		bool operator>=(Awsome const &rhs)const{return (this->_n >= rhs._n); }
		bool operator<=(Awsome const &rhs)const{return (this->_n <= rhs._n); }
		int get_n() const {return _n;}
	private:
		int _n;
};

std::ostream &operator<<(std::ostream & o, const Awsome &a) {o << a.get_n(); return o; }

int main()
{
	{
		int a = 2;
		int b = 3;
	
		::swap( a, b );
		std::cout << "a = " << a << ", b = " << b << std::endl;
		std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
		std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	
		std::string c = "chanie1";
		std::string d = "chanie2";

		::swap(c, d);
		std::cout << "c = " << c << ", d = " << d << std::endl;
		std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
		std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
	}
	{
		Awsome a(2),b(4);

		swap(a, b);
		std::cout << a << " " << b << std::endl;
		std::cout << max(a, b) << std::endl;
		std::cout << min(a, b) << std::endl;
	}	
	return (0);
}
