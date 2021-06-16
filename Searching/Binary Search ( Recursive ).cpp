#include<iostream>
using namespace std;

int BinarySearch(int arr[],int low,int high,int x)
{
	
	if(low>high)
		return -1;
	int mid=(low+high)/2;
	if(arr[mid]==x)
		return mid;
	else if(arr[mid]>x)
		return BinarySearch(arr,low,mid-1,x);
	else
		return BinarySearch(arr,mid+1,high,x);
}
int main()
{
	int arr[]={10,20,30,40,50,60,70};
	int n=sizeof(arr)/sizeof(arr[0]);
	int x=60;
	cout<<BinarySearch(arr,0,n-1,x);
	return 0;
}
