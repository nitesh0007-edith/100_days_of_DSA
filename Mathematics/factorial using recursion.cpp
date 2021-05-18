#include <iostream>
#include <limits.h>
using namespace std;
int Factorial(int n)
{
	
	if(n==0)
	{
		return 1;
	}
	else
	{
		return n*(Factorial(n-1));
	}   
}
int main()
{
	int number;
	cin>>number;
	cout<<Factorial(number);  
	return 0;
}
