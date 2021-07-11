#include<iostream>
#include<cstdlib>
using namespace std;

int getMinDiff(int arr[],int n)
{
	int res=INT_MAX;
	for(int i=1;i<n;i++)
	{
		for(int j=0;j<i;j++)
		{
			res=min(res,abs(arr[i]-arr[j]));
		}
	}
	return res;
}
int main()
{
	int arr[]={1,8,12,5,18};
	int n=sizeof(arr)/sizeof(arr[0]);
	cout<<getMinDiff(arr,n);
	return 0;
}
