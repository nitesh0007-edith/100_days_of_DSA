// This is Naive Solution

#include <iostream>
#include <limits.h>
using namespace std;

int trailing_zero(int n)
{
	int fact=1,i,count=0;
	for(i=1;i<=n;i++)
	{
		fact=fact*i;
	}
	while(fact%10==0)
	{
		count++;
		fact=fact/10;
	}
	return count;
	
	 
}
int main()
{
	int number;
	cin>>number;
	cout<<trailing_zero(number);
	
	return 0;
}
