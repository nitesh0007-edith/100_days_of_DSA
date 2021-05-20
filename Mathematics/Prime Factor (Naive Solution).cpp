#include<iostream>
#include<limits.h>
void PrimeFactor(int n);
int isPrime(int n);
using namespace std;

void PrimeFactor(int n)
{
	int i,x;
	for(i=2;i<n;i++)
	{
		if(isPrime(i))
		{
			x=i;
			while(n%x==0)
			{
				cout<< i<<" ";
				x=x*i;
			}
		}
	}
}
int isPrime(int n)
{
	for(int i=2;i<n;i++)
	{
		if(n%i==0)
		{
			return false;
		}
	}
	return true;
}
int main()
{
	int num;
	cin>>num;
	PrimeFactor(num);
	
	return 0;
}
