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
int HoarePartition(int arr[],int l,int h);

void QuickSort(int arr[],int l,int h)
{
	if(l<h)
	{
		int p=HoarePartition(arr,l,h);
		QuickSort(arr,l,p);
		QuickSort(arr,p+1,h);
	}
}
int HoarePartition(int arr[],int l,int h)
{
	int pivot=arr[l];
	int i=l-1,j=h+1;
	while(true)
	{
		do{
			i++;
		}while(arr[i]<pivot);
		
		do{
			j--;
		}while(arr[j]>pivot);
		
		if(i>=j) return j;
		swap(arr[i],arr[j]);
	}		
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
