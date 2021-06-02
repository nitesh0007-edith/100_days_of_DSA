// Number of Movement for Given no. of Disc = 2^n - 1
// Time Complexity = O(2^n)
#include<iostream>
using namespace std;

void TOH(int n,char A,char B,char C)
{
	if(n==1)
	{
		cout<<"Move 1 From "<<A<<" To "<<C<<endl;
		return;
	}
	TOH(n-1,A,C,B);
	cout<<"Move "<<n<<" From "<<A<<" To "<<C<<endl;
	TOH(n-1,B,A,C);
}
int main()
{
	int n=3;
	TOH(n,'A','B','C');
	return 0;
}
