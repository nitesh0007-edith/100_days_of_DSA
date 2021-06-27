// if array is sorted this algo take 0(1) Time
#include<iostream>
using namespace std;

void BubbleSort(int arr[],int n)
{
	bool swapped;
	for(int i=0;i<n-1;i++)       
	{
		swapped=false;
		for(int j=0;j<n-i-1;j++) 		// j < n-i-1 optimized way
		{
			if(arr[j]>arr[j+1])
			{
				swap(arr[j],arr[j+1]);
				swapped=true;
			}
		}
		if(swapped==false)
		{
			break;
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
