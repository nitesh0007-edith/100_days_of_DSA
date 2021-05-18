//this is the Efficient Solution using Euclideam Algorithms
#include<iostream>
#include<limits.h>
using namespace std;
int GCD(int a,int b)
{
	while(a!=b)
	{
		if(a>b)
		{
			a=a-b;
		}
		else
		{
			b=b-a;
		}
	}
	return a;
	
}
int main()
{
	int a,b;
	cin>>a>>b;
	cout<<GCD(a,b);
	
	return 0;
}
