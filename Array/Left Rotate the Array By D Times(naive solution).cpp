#include<iostream>
using namespace std;
void RotateByDtimes(int arr[],int n,int d)
{
	for(int j=0;j<d;j++)
	{
	
	int temp=arr[0];
	for(int i=1;i<n;i++)
	{
		arr[i-1]=arr[i];
	}
	arr[n-1]=temp;
}
}
int main()
{
	int arr[]={1,2,3,4,5,6};
	int n=sizeof(arr)/sizeof(arr[0]);
	int d;
	cin>>d;
	RotateByDtimes(arr,n,d);
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
	return 0;
}
