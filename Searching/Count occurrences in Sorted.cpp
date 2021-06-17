#include<iostream>
using namespace std;
int FirstOcc(int arr[],int n,int x);
int LastOcc(int arr[],int n,int x); 

int count(int arr[],int n,int x)
{
	int First= FirstOcc(arr,n,x);
	if(First==-1)
	{
		return 0;
	}
	else
		return (LastOcc(arr,n,x)-First+1);
}

int FirstOcc(int arr[],int n,int x)
{
	int low=0,high=n-1;
	while(low<=high)
	{
		int mid=(low+high)/2;
		if(arr[mid]>x)
		{
			high=mid-1;
		}
		else if(arr[mid]<x)
		{
			low=mid+1;
		}
		else
		{
			if(mid==0 || arr[mid-1]!=arr[mid])
			{
				return mid;
			}
			else
			{
				high=mid-1;
			}
		}
		
	}
	return -1;
}
int LastOcc(int arr[],int n,int x)
{
	int low=0,high=n-1;
	while(low<=high)
	{
		int mid=(low+high)/2;
		if(arr[mid]>x)
		{
			high=mid-1;
		}
		else if(arr[mid]<x)
		{
			low=mid+1;
		}
		else
		{
			if(mid==n-1 || arr[mid+1]!=arr[mid])
			{
				return mid;
			}
			else
			{
				low=mid+1;
			}
		}
		
	}
	return -1;
}
int main()
{
	int arr[]={1,10,10,10,20,20,40};
	int n=sizeof(arr)/sizeof(arr[0]);
	int x=10;
	cout<<count(arr,n,x);
	return 0;
}
