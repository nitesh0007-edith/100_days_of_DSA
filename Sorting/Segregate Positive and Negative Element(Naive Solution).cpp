#include<iostream>
using namespace std;

void SegPosNeg(int arr[],int n)
{
	int temp[n],i=0;
	for(int j=0;j<n;j++)
	{
		if(arr[j]<0)
		{
			temp[i]=arr[j];
			i++;
		}
	}
	for(int j=0;j<n;j++)
	{
		if(arr[j]>=0)
		{
			temp[i]=arr[j];
			i++;
		}
	}
	for(int j=0;j<n;j++)
	{
		arr[j]=temp[j];
	}
}
int main()
{
	int arr[]={15,-3,-2,18};
	int n=sizeof(arr)/sizeof(arr[0]);
	SegPosNeg(arr,n);
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
}
