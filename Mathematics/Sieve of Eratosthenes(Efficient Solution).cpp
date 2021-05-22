#include<iostream>
#include<limits.h>
#include<vector>
using namespace std;


void SieveOfEratosthencs(int n)
{
	vector<bool> isprime(n+1,true);
	for(int i=2;i*i<=n;i++)
	{
		if(isprime[i])
		{
			for(int j=2*i;j<=n;j=j+i)
			{
				isprime[j]=false;
			}
		}
	}
	for(int i=2;i<=n;i++)
	{
		if(isprime[i])
		{
			cout<<i<<" ";
		}
	}	
}

int main()
{
	int num;
	cin>>num;
	SieveOfEratosthencs(num);
	
	return 0;
}
