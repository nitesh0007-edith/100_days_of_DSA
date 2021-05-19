// This is the Naive Solution. Time Complexity is O(a*b-max(a,b))

#include<iostream>
#include<limits.h>

using namespace std;

int LCM(int a,int b)
{
	int res = max(a,b);
	while(true)
	{
		if(res%a==0 && res%b==0)
		{
			return res;
		}
		res++;
	}
	return res;
}
int main()
{
	int num1,num2;
	cin>>num1>>num2;
	cout<<LCM(num1,num2);
	
	return 0;
}
