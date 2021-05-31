//Time complexity & Auxilary space : 0(d) here d= no. of digits

#include<iostream>
using namespace std;
int sumOFdigit(int n)
{
	if(n==0)    // if(n<=9)
		return 0; // return n;               these remove one recursion call
	return n%10 + sumOFdigit(n/10);
}
int main()
{
	int num;
	cin>>num;
	cout<<sumOFdigit(num);	
	return 0;
}
