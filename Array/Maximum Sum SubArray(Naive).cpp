#include<iostream>
using namespace std;

int MaxSumSubArray(int arr[],int n)
{
	int res=arr[0];
	for(int i=0;i<n;i++)
	{
		int curr=0;
		for(int j=i;j<n;j++)
		{
			curr=curr+arr[j];
			res=max(res,curr);
		}	
	}
	return res;
}
int main()
{
	int arr[]={2,3,-8,7,-1,2,3};
	int n=sizeof(arr)/sizeof(arr[0]);
	cout<<MaxSumSubArray(arr,n);
	return 0;
}
