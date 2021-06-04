// linear search
#include<iostream>
using namespace std;

int searching(int arr[],int n,int x)
{
	for (int i=0;i<n;i++)
	{
		if(arr[i]==x)
			return i;
	}
	return -1;
}
int main()
{
	int arr[]={20,5,7,25};
	int n=sizeof(arr)/sizeof(arr[0]);
	int x=5;
	cout<<searching(arr,n,x);
	return 0;
}
