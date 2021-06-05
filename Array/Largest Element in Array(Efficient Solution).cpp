#include<iostream>
using namespace std;

int largestEle(int arr[],int n)
{
	int large=0;
	for(int i=1;i<n;i++)
	{
		if(arr[i]>arr[large])
		{
			large=i;
		}
	}
	return large;
}
int main()
{
	int arr[]={40,10,20,100};
	int n=sizeof(arr)/sizeof(arr[0]);
	cout<<largestEle(arr,n);
	return 0;
}
