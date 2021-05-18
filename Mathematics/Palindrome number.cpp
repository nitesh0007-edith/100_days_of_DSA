#include<iostream>
using namespace std;

void palindrome(int n)
{
	int temp=n;
	int rem,result=0;
	while(temp>0)
	{
		rem=temp%10;
		result=result*10+rem;
		temp=temp/10;
	}
	if(result==n)
	{
		cout<< "given number is Palindrome number"<<endl;
	}
	else
	{
		cout<< "given number is not Palindrome number";
	}
}

int main()
{
	int number;
	cin>>number;
	palindrome(number);
	
	return 0;
}
