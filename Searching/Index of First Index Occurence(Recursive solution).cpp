#include<iostream>
using namespace std;
int FirstOcc(int arr[],int low,int high,int x)
{
	if(low>high)
	{
		return -1;
	}
	int mid=(low+high)/2;
	if(arr[mid]>x)
	{
		return FirstOcc(arr,low,mid-1,x);
	}
	else if(arr[mid]<x)
	{
		return FirstOcc(arr,mid+1,high,x);
	}
	else
	{
		if(mid==0 || arr[mid-1]!=arr[mid])
		{
			return mid;
		}
		else
		{
			return FirstOcc(arr,low,mid-1,x);
		}
	}
}
int main()
{
	int arr[]={1,10,10,10,20,20,40};
	int n=sizeof(arr)/sizeof(arr[0]);
	int x=20;
	cout<<FirstOcc(arr,0,n-1,x);
	return 0;
}
