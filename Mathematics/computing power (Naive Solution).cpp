// Time Complexity = 0(n)

#include<iostream>
#include<limits.h>

using namespace std;

int Power(int x,int n)
{
	int pow=1;
	for(int i=0;i<n;i++)
	{
		pow=pow*x;
	}
	return pow;
}
int main()
{
	int x,n;
	cin>>x>>n;
	cout<<Power(x,n);
	
	return 0;
}
