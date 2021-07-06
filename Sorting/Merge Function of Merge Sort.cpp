// Time Complexity : 0(n)
// Aux Space : 0(n)
#include<iostream>
using namespace std;

void MergeFunction(int arr[],int low,int mid,int high)
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
	int i=0,j=0,k=0;
	while(i<n1 && j<n2)
	{
		if(left[i]<=right[j])
		{
			arr[k]=left[i];
			i++;
			k++;
		}
		else
		{
			arr[k]=right[j];
			j++;
			k++;
		}
	}
	while(i<n1)
	{
		arr[k]=left[i];
		i++;
		k++;
	}
	while(j<n2)
	{
		arr[k]=right[j];
		j++;
		k++;
	}
}
int main()
{
	int arr[]={10,15,20,40,8,11,55};
	int n=sizeof(arr)/sizeof(arr[0]);
	MergeFunction(arr,0,3,n-1);
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
	return 0;
}
