#include<iostream>
using namespace std;
void DecToBin(int n)
{
	if(n==0)
		return;
	DecToBin(n/2);
	cout<<n%2;
}
int main()
{
	DecToBin(13);
	return 0;
}
