#include<iostream>
using namespace std;

void fun(int n)
{
	if(n==0)        // base case
	{
		return;
	}
	cout<<"Nitesh\n";
	fun(n-1);
}
int main()
{
	fun(2);
	return 0;
}
