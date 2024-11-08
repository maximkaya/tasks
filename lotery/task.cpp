#include <iostream>

int main()
{

	int i,a,b,c,d,e,f;
	std::cout << "Enter number (6)";
	std::cin >> i;

	if(i <= 100000 || i >= 999999)
	{
		std::cout << "wrong number" << std::endl;
	}
	else
	{
		a=i/100000, b=i/10000 % 10, c=i/1000 % 10, d=i/100 % 10, e=i/10 % 10, f=i % 10;
		if((a+b+c) != (d+e+f))
				{
				std::cout << "you have unlucky ticket";
				}
		else
		{
		std::cout << "you have lucky ticket";
		}
	}

	
}
