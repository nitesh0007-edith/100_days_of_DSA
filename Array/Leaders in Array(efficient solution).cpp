#include<iostream>
using namespace std;
void leaders(int arr[],int n)
{
	int curr_ldr=arr[n-1];
	cout<<curr_ldr<<" ";
	for(int i=n-2;i>=0;i--)
	{
		if(curr_ldr<arr[i])
		{
			curr_ldr=arr[i];
			cout<<curr_ldr<<" ";
		}
	}
}
int main()
{
	int arr[]={10,1,6,2,7,3};
	int n=sizeof(arr)/sizeof(arr[0]);
	leaders(arr,n);
	return 0;
}
