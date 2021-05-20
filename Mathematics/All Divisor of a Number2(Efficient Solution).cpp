// Time Complexity : 0(sq root(n))
// Auxilary Space: 0(1)
// This solution gives the Solution in sorted order
#include<iostream>
#include<limits.h>
using namespace std;

void AllDivisor(int n)
{
	int i;
	for(i=1;i*i<n;i++)    // this loop print all divisor from 1(inclusive) to sq root(n)(exclusive)
	{
		if(n%i==0)
		{
			cout<<i<<" ";
		}
	}
	for( ;i>=1;i--)        // this loop print all divisor from sq root(n)(exclusive) to n(inclusive)
	{
		if(n%i==0)
		{
			cout<<(n/i)<<" ";
		}
	}
}
int main()
{
	int num;
	cin>>num;
	AllDivisor(num);
	
	return 0;
}
