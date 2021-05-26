#include<iostream>
using namespace std;

int set_bit_count(int n)
{
	int res=0;
	while(n>0)
	{
		n=n&(n-1);
		res++;
	}
	return res;
}
int main()
{
	int num;
	cin>>num;
	cout<<set_bit_count(num);
	return 0;
}
