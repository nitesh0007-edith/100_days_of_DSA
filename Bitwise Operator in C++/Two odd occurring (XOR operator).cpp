#include<iostream>
using namespace std;

int OnlyOdd(int arr[],int n)
{
	int res=0;
	for(int i=0;i<n;i++)
	{
		res=res^arr[i];
	}
	return res;
}
int main()
{
	int arr[50]={10,20,20,10,30,20,30,20,10};
	int size=sizeof(arr) / sizeof(arr[0]);;
	cout<<OnlyOdd(arr,size);
	
	return 0;
}
