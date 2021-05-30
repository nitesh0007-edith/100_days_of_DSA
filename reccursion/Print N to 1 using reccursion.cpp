//  recurrence relation T(n) = T(n-1)+0(1)
// Time complexity and Auxilary space = 0(n) 
#include<iostream>
using namespace std;

void Nto1(int n)
{
	if(n==0)
		return;
	cout<<n<<" ";
	Nto1(n-1);
	
}
int main()
{
	int num;
	cin>>num;
	Nto1(num);
	return 0;
}
