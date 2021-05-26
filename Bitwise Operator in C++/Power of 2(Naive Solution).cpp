#include<iostream>
#include<limits.h>
using namespace std;
bool isPow2(int n)
{
	if(n==0)
		return false;
	while(n!=1)
	{
		if(n%2!=0)
		{
			return false;
		}
		n=n/2;
	}
	return true;
}
int main()
{
	int num;
	cin>>num;
	cout<<(bool)isPow2(num);
	return 0;
	
}
