// reccurence relation : T(n)=T(n-2)+0(1)
// time complexity and auxilary space : O(n)
#include<iostream>
using namespace std;

bool isPal(string &str,int start,int end)
{
	if(start>=end)
	{
		return true;
	}
	return (str[start]==str[end]) && isPal(str,start+1,end-1);
}
int main()
{
	string str;
	cin>>str;
	cout<<(bool) isPal(str,0,str.length()-1);
	return 0;
}
