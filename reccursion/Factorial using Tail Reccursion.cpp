#include<iostream>
using namespace std;
int Fact(int n,int k)
{
	if(n==0 || n==1)
		return k;
	return Fact(n-1,k*n);
}
int main()
{
	int num,k=1;
	cin>>num;
	cout<<Fact(num,k);
	return 0;
}
