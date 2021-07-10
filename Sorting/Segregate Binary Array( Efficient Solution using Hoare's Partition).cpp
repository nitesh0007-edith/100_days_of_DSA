#include<iostream>
using namespace std;

void SegBinary(int arr[],int n)
{
	int i=-1,j=n;
	while(true)
	{
		do{
			i++;
		}while(arr[i]==0);
		do{
			j--;
		}while(arr[j]!=0);
		if(i>=j)
		{
			return;
		}
		swap(arr[i],arr[j]);
	}
}
int main()
{
	int arr[]={0,1,1,1,0,0,1,1,0};
	int n=sizeof(arr)/sizeof(arr[0]);
	SegBinary(arr,n);
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
}
