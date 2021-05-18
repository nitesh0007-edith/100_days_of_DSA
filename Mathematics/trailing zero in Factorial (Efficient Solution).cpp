// This is Efficient Solution Time complexity for this solution is 0(logn)
#include <iostream>
#include <limits.h>
using namespace std;
int trailing_zero(int n)
{
	int i,count=0;
	for(i=5;i<=n;i=i*5)
	{
		count=count+n/i;
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
