// Time complexity of this Problem is O(n)
#include<iostream>
#include<limits.h>
using namespace std;

bool prime(int n)
{
	if (n==1)
	{
		return false;
	}
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
	cout<<(bool)prime(num);  
	return 0;
}
