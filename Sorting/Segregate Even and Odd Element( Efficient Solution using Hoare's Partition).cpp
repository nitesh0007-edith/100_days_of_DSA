#include<iostream>
using namespace std;

void SegEvenOdd(int arr[],int n)
{
	int i=-1,j=n;
	while(true)
	{
		do{
			i++;
		}while(arr[i]%2==0);
		do{
			j--;
		}while(arr[j]%2!=0);
		if(i>=j)
		{
			return;
		}
		swap(arr[i],arr[j]);
	}
}
int main()
{
	int arr[]={2,7,4,5,8,9,6};
	int n=sizeof(arr)/sizeof(arr[0]);
	SegEvenOdd(arr,n);
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
}
