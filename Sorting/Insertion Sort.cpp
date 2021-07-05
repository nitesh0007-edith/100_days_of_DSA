// used in small sized array
// In-place and Stable algorithms
// Time Complexity :  Best Case  0(n)
//                    worst case 0(n^2)
//                    In General 0(n^2)

#include<iostream>
using namespace std;

void InsertionSort(int arr[],int n)
{
	for(int i=1;i<n;i++)
	{
		int key=arr[i];
		int j=i-1;
		while(j>=0 && arr[j]>key)
		{
			arr[j+1]=arr[j];
			j--;
		}
		arr[j+1]=key;
	}
}
int main()
{
	int arr[]={20,5,40,30,20,7,60};
	int n=sizeof(arr)/sizeof(arr[0]);
	
	InsertionSort(arr,n);
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
	return 0;
}
