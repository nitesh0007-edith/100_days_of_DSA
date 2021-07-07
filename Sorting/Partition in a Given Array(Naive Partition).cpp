#include<iostream>
using namespace std;

int Partition(int arr[],int l,int h,int p)
{
	int temp[h-l+1],index=0;
	for(int i=l;i<=h;i++)
	{
		if(arr[i]<=arr[p])
		{
			temp[index]=arr[i];
			index++;
		}
	}
	for(int i=l;i<=h;i++)
	{
		if(arr[i]>arr[p])
		{
			temp[index]=arr[i];
			index++;
		}
	}
	for(int i=l;i<=h;i++)
	{
		arr[i]=temp[i-l];
	}
}
int main()
{
	int arr[]={5,13,6,9,12,11,8};
	int n=sizeof(arr)/sizeof(arr[0]);
	Partition(arr,0,n-1,n-1);
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
	return 0;
}
