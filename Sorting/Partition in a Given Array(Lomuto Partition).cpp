// Time complexity :- O(n)
// Aux Space :- O(1)
#include<iostream>
using namespace std;

void LomutoPartition(int arr[],int l,int h)
{
	int pivot=arr[h];
	int i=l-1;
	for(int j=l;j<=h-1;j++)
	{
		if(arr[j]<pivot)
		{
			i++;
			swap(arr[i],arr[j]);
		}
	}
	swap(arr[i+1],arr[h]);
	
}
int main()
{
	int arr[]={5,13,6,9,12,11,8};
	int n=sizeof(arr)/sizeof(arr[0]);
	LomutoPartition(arr,0,n-1);
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
	return 0;
}
