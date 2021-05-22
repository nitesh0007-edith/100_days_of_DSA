// this is recursive solution 
// so time complexity = 0(log n) but auxilary space = O(log n)
#include<iostream>
#include<limits.h>

using namespace std;

int Power(int x,int n)
{
	if(n==0)
		return 1;
	int temp=Power(x,n/2);
	temp=temp*temp;
	if(n%2==0)
		return temp;
	else
		return temp*x;	
}
int main()
{
	int x,n;
	cin>>x>>n;
	cout<<Power(x,n);
	
	return 0;
}
