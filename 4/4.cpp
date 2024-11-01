#include <iostream>
#include <iomanip>

int main() 
{
	int a;
	int b;

	std::cin >> a >> b;

	/*
	for(int j = 1; j <= a; j = j+1)
	{
		for(int i = 1; i <= b; i = d+1){
			std::cout << "*";
		} 
		std::cout << std::endl;
	}
	*/

	for(int count = 1; count <= a*b; count = count + 1)
	{
		std::cout << std::setw(3) << count;
		if(count % a == 0) std::cout << std::endl;
	}



	return 0;
}

