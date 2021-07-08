// Divide and Conqure Algorithms
// worst case Time :- O(n^2)
// Average Case Time :- O(nlogn)
// Despite O(n^2) worst case, it is considered faster as compared to Merge Sort, because
// 1) cache friendly
// 2) In-Place 
// 3) Tail Recursive

#include <bits/stdc++.h>
#include<iostream>
using namespace std;
int LomutoPartition(int arr[],int l,int h);

void QuickSort(int arr[],int l,int h)
{
	if(l<h)
	{
		int p=LomutoPartition(arr,l,h);
		QuickSort(arr,l,p-1);
		QuickSort(arr,p+1,h);
	}
}
int LomutoPartition(int arr[],int l,int h)
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
	return (i+1);
}
int main()
{
	int arr[]={5,3,8,4,2,7,1,10};
	int n=sizeof(arr)/sizeof(arr[0]);
	QuickSort(arr,0,n-1);
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
	return 0;
}
