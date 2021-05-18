//this is the Naive Solution
// Time complexity O(min(a,b)
#include<iostream>
#include<limits.h>
using namespace std;
int GCD(int a,int b)
{
	int result=min(a,b);
	while(result>0)
	{
		if(a%result==0 && b%result==0)
		{
			break;
		}
		result--;
	}
	return result;
	
}
int main()
{
	int a,b;
	cin>>a>>b;
	cout<<GCD(a,b);
	
	return 0;
}
