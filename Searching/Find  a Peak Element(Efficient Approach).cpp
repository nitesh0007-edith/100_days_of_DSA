// Time Complexity O(log n)
#include<iostream>
using namespace std;

int Peak(int arr[],int n)
{
	int low=0,high=n-1;
	while(low<=high)
	{
		int mid=(low+high)/2;
		if( mid==0 || arr[mid]>=arr[mid-1] && mid==n-1 || arr[mid]>=arr[mid+1] )
		{
			return arr[mid];
		}
		if(mid>0 && arr[mid] <= arr[mid-1] )
		{
			high=mid-1;
		}
		else
		{
			low=mid+1;
		}
	}
	return -1;
}
int main()
{
	int arr[]={10,20,15,5,23,90,67};
	int n=sizeof(arr)/sizeof(arr[0]);
	cout<<Peak(arr,n);
	return 0;
}
