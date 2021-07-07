// a pair(arr[i],arr[j])
// forms an inversion when 
// i<j and arr[i] > arr[j]

// Time Complexity:- O(n^2)

#include<iostream>
using namespace std;

int countInv(int arr[],int n)
{
	int res=0;
	for(int i=0;i<(n-1);i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(arr[i]>arr[j])
			{
				res++;
			}	
		}	
	}
	return res;
}
int main()
{
	int arr[]={2,4,1,3,5};
	int n=sizeof(arr)/sizeof(arr[0]);
	cout<<countInv(arr,n);
	return 0;
}
