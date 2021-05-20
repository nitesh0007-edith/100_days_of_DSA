#include<iostream>
#include<limits.h>
using namespace std;

void PrimeFactor(int n)
{
	if(n<=1) return;
	
	for(int i=2; i*i<=n;i++)
	{
		while(n%i==0)
		{
			cout<<i<<" ";
			n=n/i;
		}
	}
	if(n>1)
	{
		cout<<" "<<n;
	}
}
int main()
{
	int num;
	cin>>num;
	PrimeFactor(num);
	
	return 0;
}
