// reccurence relation : T(n)=T(n-1)+0(1)
// Time complexity & auxilary space = 0(n)
#include<iostream>
using namespace std;
int sumOFnatural(int n)
{
	if(n==0)
		return 0;
	return n + sumOFnatural(n-1);	
}
int main()
{
	int num;
	cin>>num;
	cout<<sumOFnatural(num);	
	return 0;
}
