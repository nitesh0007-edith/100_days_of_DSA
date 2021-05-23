#include<iostream>
#include<limits.h>
using namespace std;

int main()
{
	int x=33,y=4;
	cout<<(x>>1)<<endl;  // x is right shifted by 1
	cout<<(x>>2)<<endl;  // x is right shifted by 2
	int z=(x>>y);       // x is right shifted by y=4
	cout<<z;
	return 0;
}

// (x>>y) is equaivalent to floor(x/2^y)
