#include<iostream>
using namespace std;

bool palindrome(int n)
{
	int temp=n;
	int rem,result=0;
	while(temp>0)
	{
		rem=temp%10;
		result=result*10+rem;
		temp=temp/10;
	}
	return result==n;
}

int main()
{
	int number;
	cin>>number;
	cout<<(bool)palindrome(number);
	
	return 0;
}
	
	
	
