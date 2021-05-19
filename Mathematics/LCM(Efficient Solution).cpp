// This is the Efficient Solution using Euclidean Algorithms
#include<iostream>
#include<limits.h>
using namespace std;
int GCD(int a,int b)
{
	if(b==0)
	{
		return a;
	}
	return GCD(b,a%b);
}
int LCM(int a,int b)
{
	
	return (a*b)/GCD(a,b);
}
int main()
{
	int num1,num2;
	cin>>num1>>num2;
	cout<<LCM(num1,num2);
	
	return 0;
}
