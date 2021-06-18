#include<iostream>
using namespace std;
int sqRootFloor(int x)
{
	int i=1;
	while(i*i<=x)
	{
		i++;
	}
	return i-1;
}
int main()
{
	int x=10;
	cout<<sqRootFloor(x);
	return 0;
}
