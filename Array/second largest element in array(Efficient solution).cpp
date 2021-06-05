#include<iostream>
using namespace std;
int largestEle(int arr[] ,int n);

int secondlarge(int arr[],int n)
{
	int res=-1,large=0;
	for(int i=1;i<n;i++)
	{
		if(arr[i]>arr[large])
		{
			res=large;
			large=i;
		}
		else if(arr[i]!=arr[large])
		{
			if(res==-1 || arr[i]>arr[res])
			{
				res=i;
			}
		}
	}
	return res;
}
int main()
{
	int arr[]={10,20,30};
	int n=sizeof(arr)/sizeof(arr[0]);
	cout<<secondlarge(arr,n);
	return 0;
}
