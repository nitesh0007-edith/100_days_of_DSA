// time complexityb : 0(2^n * n)

#include<iostream>
#include<cmath>
using namespace std;

void PowerSet(string str)
{
	int n=str.length();
	int PowSize=pow(2,n);
	
	for(int counter=0;counter<PowSize;counter++)
	{
		for(int j=0;j<n;j++)
		{
			if((counter & (1<<j))!=0)
			{
				cout<<str[j];
			}
		}
		cout<<endl;
	}
}
int main()
{
	string str="abcde";
	PowerSet(str);
	return 0;
}
