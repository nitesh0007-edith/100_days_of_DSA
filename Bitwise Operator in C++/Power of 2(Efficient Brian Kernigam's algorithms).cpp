#include<iostream>
#include<limits.h>
using namespace std;
bool isPow2(int n)
{
	if(n==0)
		return false;
	return ((n&(n-1))==0);
	
	// return (n!==0) && ((n&(n-1))==0); one line solution
}
int main()
{
	int num;
	cin>>num;
	cout<<(bool)isPow2(num);
	return 0;
	
}
