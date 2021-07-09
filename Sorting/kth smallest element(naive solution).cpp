// Time Complexity O(nlogn)
#include<iostream>
#include<algorithm>
using namespace std;
int kthsmallest(int arr[],int n,int k)
{
	sort(arr,arr+n);
	return arr[k-1];
}
int main()
{
	int arr[]={10,4,5,8,11,6,26};
	int n=sizeof(arr)/sizeof(arr[0]);
	int k=5;
	cout<<kthsmallest(arr,n,k);
	return 0;
}
