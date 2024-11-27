#include <iostream>

void fibonacci(int lenght)
{
	if(lenght <= 0){
	std::cout << "wrong number" << std::endl;
	return;
	}
	
	long prev = 0, curr = 1;

	if(lenght == 1) std::cout << prev << " ";
	if(lenght == 2) std::cout << curr << " ";

	for(int i = 1; i <= lenght; ++i)
	{
	long next = prev + curr;
	std::cout << next << " ";
	prev = curr;
	curr = next;

	} 

	
}

int main()
{
	int lenght;
	std::cout << "enter number" << std::endl;
	std::cin >> lenght;

	fibonacci(lenght);
	std::cout << std::endl;

	return 0;
}
