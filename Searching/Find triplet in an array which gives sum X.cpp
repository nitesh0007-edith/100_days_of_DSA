// Two Pointer Approach

#include<iostream>
using namespace std;
int Pair(int arr[],int left,int right,int x);

int triplet(int arr[],int n,int x)
{
	for(int i=0;i<n;i++)
	{
		if(Pair(arr,i+1,n-1,x-arr[i]))
		{
			cout<<arr[i]<<" "<<endl;
			return true;
		}
	}
	return false;
}
int Pair(int arr[],int left,int right,int x)
{
	while(left < right)
	{
		if((arr[left]+arr[right])==x)
		{
			cout<<arr[left]<<" "<<arr[right]<<" ";
			return true;
		}
		else if((arr[left]+arr[right])>x)
		{
			right--;
		}
		else
			left++;
	}
	return false;
}
int main()
{
	int arr[]={2,3,4,8,9,20,40};
	int n=sizeof(arr)/sizeof(arr[0]);
	int x=32;
	cout<<triplet(arr,n,x);
	return 0;
}
