//Method 1 using Left shift operator

#include<iostream>
#include<limits.h>

using namespace std;

void kth_bit_set(int n,int k)
{
	if(n&(1<<(k-1))!=0)
	{
		cout<<"Yes";
	}
	else
	{
		cout<<"No";
	}
}
int main()
{
	int n,k;
	cin>>n>>k;
	kth_bit_set(n,k);
	
	return 0;
}
