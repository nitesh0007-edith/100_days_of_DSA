// Time complexity 0(total bits in n)
#include<iostream>
#include<limits.h>

using namespace std;

int count_set_bit(int n)
{
	int count=0;
	while(n>0)
	{
	
		/*if((n&1)==1);
		{
			count++;
		}*/
		count=count+(n&1);
		n=n>>1;
	}
	return count;
}
int main()
{
	int n;
	cin>>n;
	cout<<count_set_bit(n);
	
	return 0;
}
