// Time Complexity : 0(n)
// Auxilary Space: 0(1)
#include<iostream>
#include<limits.h>
using namespace std;

void AllDivisor(int n)
{
	for(int i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			cout<<i<<" ";
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
