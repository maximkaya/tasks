#include <iostream>

int main()
{
	int a;
	a = 1;
	std::cout << "a = " << a << std::endl;
	int &b = a;
	std::cout << "b = " << &b << std::endl;


}
