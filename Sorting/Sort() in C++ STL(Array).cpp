#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	int arr[]={10,20,5,7,2};
	int n=sizeof(arr)/sizeof(arr[0]);
	sort(arr,arr+n);
	for(int i=0;i<n;i++)
		cout<<arr[i]<<" ";
	sort(arr,arr+n,greater<int>());
	cout<<endl;
	for(int i=0;i<n;i++)
		cout<<arr[i]<<" ";
	
	return 0;
}
