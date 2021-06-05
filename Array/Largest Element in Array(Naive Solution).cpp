#include<iostream>
using namespace std;

int largestEle(int arr[],int n)
{
	int large=arr[0];
	for(int i=1;i<n;i++)
	{
		if(arr[i]>large)
		{
			large=arr[i];
		}
	}
	for(int i=0;i<n;i++)
	{
		if(arr[i]==large)
		{
			return i;
		}
	}
}
int main()
{
	int arr[]={40,10,20,100};
	int n=sizeof(arr)/sizeof(arr[0]);
	cout<<largestEle(arr,n);
	return 0;
}
