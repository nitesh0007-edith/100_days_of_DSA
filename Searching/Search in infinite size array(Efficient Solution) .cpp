#include<iostream>
using namespace std;
int BinarySearch(int arr[],int low,int high,int x);

int search(int arr[],int x)
{
	if(arr[0]==x)
		return 0;
	int i=1;
	while(arr[i]<x)
	{
		i=i*2;
	}
	if(arr[i]==x)
		return i;
	return BinarySearch(arr,(i/2)+1,i-1,x);
}
int BinarySearch(int arr[],int low,int high,int x)
{
	while(low<=high)
	{
		int mid=(low+high)/2;
		if(arr[mid]==x)
			return mid;
		else if(arr[mid]>x)
			high=mid-1;
		else
			low=mid+1;
	}
	return -1;
}
int main()
{
	int arr[]={1,10,15,20,40,80,90,100,150,500};
	int x=100;
	cout<<search(arr,x);
	return 0;
}
