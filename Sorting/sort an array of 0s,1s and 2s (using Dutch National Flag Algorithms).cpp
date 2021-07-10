// Time Complexity : 0(n), Aux Space : 0(1), and one Traversal
#include<iostream>
using namespace std;

void Sort(int arr[],int n)
{
	int l=0,h=n-1,mid=0;
	while(mid<=h)
	{
		if(arr[mid]==0)
		{
			swap(arr[l],arr[mid]);
			l++;
			mid++;
		}
		else if(arr[mid]==1)
		{
			mid++;
		}
		else
		{
			swap(arr[mid],arr[h]);
			h--;
		}
	}
}
int main()
{
	int arr[]={0,1,1,2,2,1,0,0,2,1,1,0,2};
	int n=sizeof(arr)/sizeof(arr[0]);
	Sort(arr,n);
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
}
