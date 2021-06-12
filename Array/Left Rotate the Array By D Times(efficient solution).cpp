// time complexity: 0(n) and Space Complexity : 0(1)
#include<iostream>
using namespace std;
void reverse(int arr[],int start,int end);

void RotateByDtimes(int arr[],int n,int d)
{
	reverse(arr,0,d-1);
	reverse(arr,d,n-1);
	reverse(arr,0,n-1);
}
void reverse(int arr[],int start,int end)
{
	while(start<end)
	{
			swap(arr[start],arr[end]);
			start++;
			end--;	
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
