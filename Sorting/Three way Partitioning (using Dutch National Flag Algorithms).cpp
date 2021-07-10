#include<iostream>
using namespace std;

void Sort(int arr[],int n)
{
	int l=0,h=n-1,mid=0,pivot=2;
	while(mid<=h)
	{
		if(arr[mid]<pivot)
		{
			swap(arr[l],arr[mid]);
			l++;
			mid++;
		}
		else if(arr[mid]==pivot)
		{
			mid++;
		}
		else
		{
			swap(arr[mid],arr[h]);
			h--;
		}
	}
}
int main()
{
	int arr[]={2,1,2,20,10,20,1};
	int n=sizeof(arr)/sizeof(arr[0]);
	Sort(arr,n);
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
}
