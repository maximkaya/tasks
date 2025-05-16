#include <iostream>
#include <iomanip>




void rows(int a, int b)
{
	for(int i = 1; i <= a; i = i+1)
	{
		std::cout << "*";
		if(i % a == 0) std::cout << std::endl;
	}	
}


int main() 
{
	int a;
	int b;

	std::cin >> a >> b;

	/* 	
	 *	filled
	 *
	for(int j = 1; j <= a; j = j+1)
	{
		for(int i = 1; i <= b; i = d+1){
			std::cout << "*";
		} 
		std::cout << std::endl;
	}
	*/

	/*
	for(int count = 1; count <= a*b; count = count + 1)
	{
		std::cout << std::setw(3) << count;
		if(count % a == 0) std::cout << std::endl;
	}

	*/

	/*for(int i = 1; i <= a; i = i+1)
	{
		std::cout << "*";
		if(i % a == 0) std::cout << std::endl;
	}*/

	rows(a,b);

	for(int j = 1; j < b-1; j=j+1)
	{
	std::cout << "*" << std::setw(a-1) << "*" << std::endl;
	}

	rows(a,b);


	return 0;
}

