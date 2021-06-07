#include<iostream>
using namespace std;
int MaximumDiff(int arr[],int n)
{
	int curr_max=arr[1]-arr[0];
	for(int i=0;i<n;i++)
	{
		for (int j=i+1;j<n;j++)
		{
			curr_max=max(curr_max,arr[j]-arr[i]);
		}
	}
	return curr_max;
}
int main()
{
	int arr[]={1,2,3,4,5};
	int n=sizeof(arr)/sizeof(arr[0]);
	cout<<MaximumDiff(arr,n);
	return 0;
}
