//Time Complexity :- O(m+n)*log(m+n)
#include<iostream>
#include<algorithm>
using namespace std;

void Union(int a[],int b[],int m,int n)
{
	int c[m+n];
	for(int i=0;i<m;i++)
	{
		c[i]=a[i];
	}
	for(int i=0;i<n;i++)
	{
		c[m+i]=b[i];
	}
	sort(c,c+m+n);
	for(int i=0;i<m+n;i++)
	{
		if(i==0 || c[i]!=c[i-1])
		{
			cout<<c[i]<<" ";
		}
	}
}
int main()
{
	int a[]={3,5,10,10,15,15,20};
	int m=sizeof(a)/sizeof(a[0]);
	int b[]={5,10,10,15,30};
	int n=sizeof(b)/sizeof(b[0]);
	Union(a,b,m,n);
	return 0;
}
