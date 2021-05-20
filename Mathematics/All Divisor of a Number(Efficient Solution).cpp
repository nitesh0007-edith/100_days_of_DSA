// Time Complexity : 0(sq root(n))
// Auxilary Space: 0(1)
// This solution gives the Solution but not in sorted order
#include<iostream>
#include<limits.h>
using namespace std;

void AllDivisor(int n)
{
	for(int i=1;i*i<=n;i++)
	{
		if(n%i==0)
		{
			cout<<i<<" ";
			if(i!=n/i)
			{
				cout<<n/i<<" ";
			}
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
