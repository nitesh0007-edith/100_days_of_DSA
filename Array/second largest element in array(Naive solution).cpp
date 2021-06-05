#include<iostream>
using namespace std;
int largestEle(int arr[] ,int n);

int secondlarge(int arr[],int n)
{
	int large=largestEle(arr,n);
	int res=-1;
	for(int i=0;i<n;i++)
	{
		if(arr[i]!=arr[large])
		{
			if(res==-1)
			{
				res=i;
			}
			else if(arr[i]>arr[res])
			{
				res=i;
			}
		}
	}
	return res;
}
int largestEle(int arr[],int n)
{
	int large=0;
	for(int i=1;i<n;i++)
	{
		if(arr[i]>arr[large])
		{
			large=i;
		}
	}
	return large;	
}
int main()
{
	int arr[]={10,10,10};
	int n=sizeof(arr)/sizeof(arr[0]);
	cout<<secondlarge(arr,n);
	return 0;
}
