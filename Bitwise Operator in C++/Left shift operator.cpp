#include<iostream>
#include<limits.h>
using namespace std;

int main()
{
	int x=3,y=4;
	cout<<(x<<1)<<endl;  // x is left shifted by 1
	cout<<(x<<2)<<endl;  // x is left shifted by 2
	int z=(x<<y);       // x is left shifted by y=4
	cout<<z;
	return 0;
}

// If we assume that the leading y bits are 0, then result of (x<<y) is equivalent to x*2^y
