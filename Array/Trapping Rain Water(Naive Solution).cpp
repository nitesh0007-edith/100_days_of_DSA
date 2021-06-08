#include<iostream>
using namespace std;

int getwater(int arr[],int n)
{
	int res=0;
	for(int i=0;i<n;i++)
	{
		int lmax=arr[i];
		for(int j=0;j<i;j++)
		{
			lmax=max(lmax,arr[j]);
		}
		int rmax=arr[i];
		for(int j=i+1;j<n;j++)
		{
			rmax=max(rmax,arr[j]);
		}
		res=res+(min(lmax,rmax)-arr[i]);
	}
	return res;
}
int main()
{
	int arr[]={1,5,3,8,12};
	int n=sizeof(arr)/sizeof(arr[0]);
	cout<<getwater(arr,n);
	return 0;
}
