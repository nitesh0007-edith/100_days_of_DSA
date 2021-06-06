#include<iostream>
using namespace std;

int remdup(int arr[],int n)
{
	int res=1;
	for(int i=1;i<n;i++)
	{
		if(arr[res-1]!=arr[i])
		{
			arr[res]=arr[i];
			res++;
		}
	}
	return res;
}
int main()
{
	int arr[]={10,20,20,30,30,30};
	int n=sizeof(arr)/sizeof(arr[0]);
	int size=remdup(arr,n);
	cout<<size<<endl;
	for(int i=0;i<size;i++)
	{
		cout<<arr[i]<<" ";
	}
	return 0;
}
