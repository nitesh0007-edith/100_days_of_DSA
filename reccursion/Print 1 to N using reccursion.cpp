// recurrence relation T(n) = T(n-1)+0(1)
// Time complexity 0(n) 
// Auxilary space  O(n) 
#include<iostream>
using namespace std;

void Nto1(int n)
{
	if(n==0)
		return;
	Nto1(n-1);
	cout<<n<<" ";
	
}
int main()
{
	int num;
	cin>>num;
	Nto1(num);
	return 0;
}
