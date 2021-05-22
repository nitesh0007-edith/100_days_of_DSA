// This solution is the sortan implementation of Sieve of Eratosthenes Otimized Solution
//Time Complexity = O(n log logn)
#include<iostream>
#include<limits.h>
#include<vector>
using namespace std;
void SieveOfEratosthencs(int n)
{
	vector<bool> isprime(n+1,true);	
	for (int i=2;i<=n;i++)
	{
		if(isprime[i])
		{
			cout<<i<<" ";
			for(int j=i*i;j<=n;j=j+i)
			{
				isprime[j]=false;
			}
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
