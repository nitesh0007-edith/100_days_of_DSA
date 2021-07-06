// Time Complexity : 0(nlogn)
// Aux Space : 0(n)
#include<iostream>
#include<algorithm>
using namespace std;
void Merge(int arr[],int low,int mid,int high);


void Merge(int arr[],int low,int mid,int high)
{
	// Setting up Auxilary Array
	int n1=mid-low+1;
	int n2=high-mid;
	int left[n1];
	int right[n2];
	for(int i=0;i<n1;i++)
	{
		left[i] = arr[low+i];
	}
	for(int i=0;i<n2;i++)
	{
		right[i] = arr[mid+1+i];
	}

	// Standard Merge Logic of Two Sorted Array
	int i=0,j=0,k=low;
	while(i<n1 && j<n2)
	{
		if(left[i]<=right[j])
		{
			arr[k++]=left[i++];
		}
		else
		{
			arr[k++]=right[j++];
		}
	}
	while(i<n1)
	{
		arr[k++]=left[i++];
	}
	while(j<n2)
	{
		arr[k++]=right[j++];
	}
}
void MergeSort(int arr[],int l,int r)
{
	if(r>l)
	{
		int m=l+(r-l)/2;
		MergeSort(arr,l,m);
		MergeSort(arr,m+1,r);
		Merge(arr,l,m,r);
	}
}
int main()
{
	int arr[]={10,15,20,40,8,11,55};
	int n=sizeof(arr)/sizeof(arr[0]);
	MergeSort(arr,0,n-1);
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
	return 0;
}
