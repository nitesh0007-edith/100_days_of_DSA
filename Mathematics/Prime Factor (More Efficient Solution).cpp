// time complexity of this Solution is 0(sq. root(n))

#include<iostream>
#include<limits.h>
using namespace std;

void PrimeFactor(int n)
{
	if(n<=1) return;
	
	while(n%2==0)
	{
		cout<<2<<" ";
		n=n/2;
	}
	while(n%3==0)
	{
		cout<<3<<" ";
		n=n/3;
	}
	for(int i=5;i*i<=n;i=i+6)
	{
		while(n%i==0)
		{
			cout<<i<<" ";
			n=n/i;
		}
		while(n%i+2==0)
		{
			cout<<i<<" ";
			n=n/i;
		}
	}
	if(n>3)
	{
		cout<<n;
	}
}
int main()
{
	int num;
	cin>>num;
	PrimeFactor(num);
	
	return 0;
}
