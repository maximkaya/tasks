#include <iostream>

int main()
{
	int n;
	int *a = new int[n+1];
	for(int i = 0;i<=n;i++)
	{
	a[i]=i;
	}
	
	for(int i = 2; i*i<=n;i++)
	{
		if(a[i])
		{
		for(int j= i*i; j<=n; j+= i)
		{
		a[j]=0;
		}
		}
	}
	
	for(int i = 2;i<n;i++)
	{
	if(a[i])
	{
	std::cout << a[i] << ' ';
	}
	}
	
	std::cout << std::endl << std::endl;
	delete[] a;
	
	return 0;

}
