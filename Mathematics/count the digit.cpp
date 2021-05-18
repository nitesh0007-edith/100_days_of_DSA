#include <iostream>
using namespace std;

int count_digit(int n)
{
	int count=0;
	while(n>0)
	{
		n=n/10;
		count++;
	}
	return count;
}

int main()
{
	int number;
	cin>>number;
	cout<<count_digit(number);
	
	return 0;
}
