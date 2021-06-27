// Time Complexity: O(n^2)
// Buble sort is a Stable Algorithms
#include<iostream>
using namespace std;

void BubbleSort(int arr[],int n)
{
	for(int i=0;i<n-1;i++)       
	{
		for(int j=0;j<n-1;j++) 		// j < n-i-1 optimized way
		{
			if(arr[j]>arr[j+1])
			{
				swap(arr[j],arr[j+1]);
			}
		}
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
	BubbleSort(arr,n);
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
	return 0;
}
