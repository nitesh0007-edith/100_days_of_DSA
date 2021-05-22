// time complexity : O(n * sq root(n))

#include<iostream>
#include<limits.h>
using namespace std;
bool isprime(int);
void SieveOfEratosthencs(int);

void SieveOfEratosthencs(int n)
{
	for(int i=2;i<=n;i++)
	{
		if(isprime(i))
		{
			cout<<i<<" ";
		}
	}	
}

bool isprime(int n)
{
	if (n==1)
	{
		return false;
	}
	for(int i=2;i*i<=n;i++)
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
	SieveOfEratosthencs(num);
	
	return 0;
}
