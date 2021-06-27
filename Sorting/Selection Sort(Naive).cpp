#include<iostream>
using namespace std;

void SelectionSort(int arr[],int n)
{
	int temp[n];
	for(int i=0;i<n;i++)
	{
		int min_idx=0;
		for(int j=1;j<n;j++)
		{
			if(arr[j]<arr[min_idx])
			{
				min_idx=j;
			}
		}
		temp[i]=arr[min_idx];
		arr[min_idx]=INT_MAX;
	}
	for(int i=0;i<n;i++)
	{
		arr[i]=temp[i];
	}
}
int main()
{
	int arr[]={2,10,8,7,12,1,9,14,3};
	int n=sizeof(arr)/sizeof(arr[0]);
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	SelectionSort(arr,n);
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
	return 0;
}
