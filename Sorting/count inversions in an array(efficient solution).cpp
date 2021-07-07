// a pair(arr[i],arr[j])
// forms an inversion when 
// i<j and arr[i] > arr[j]

// Time Complexity : 0(nlogn)
// Aux Space : 0(n)
#include<iostream>
using namespace std;

int countMerge(int arr[],int low,int mid,int high);


int countMerge(int arr[],int low,int mid,int high)
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
	int res=0,i=0,j=0,k=low;
	while(i<n1 && j<n2)
	{
		if(left[i]<=right[j])
		{
			arr[k++]=left[i++];
		}
		else
		{
			arr[k++]=right[j++];
			res=res+(n1-i);
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
	return res;
}
int countInv(int arr[],int l,int r)
{
	int res=0;
	if(r>l)
	{
		int m=l+(r-l)/2;
		res += countInv(arr,l,m);
		res += countInv(arr,m+1,r);
		res += countMerge(arr,l,m,r);
	}
	return res;
}
int main()
{
	int arr[]={40,30,20,10};
	int n=sizeof(arr)/sizeof(arr[0]);
	cout<<countInv(arr,0,n-1);
	return 0;
}
