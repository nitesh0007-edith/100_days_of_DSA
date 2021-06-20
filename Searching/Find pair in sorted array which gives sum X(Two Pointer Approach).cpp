// Two Pointer Approach
#include<iostream>
using namespace std;

int Pair(int arr[],int n,int x)
{
	int left=0,right=n-1;
	while(left < right)
	{
		if((arr[left]+arr[right])==x)
		{
			cout<<arr[left]<<" "<<arr[right]<<endl;
			return true;
		}
		else if((arr[left]+arr[right])>x)
		{
			right--;
		}
		else
			left++;
	}
	return false;
}
int main()
{
	int arr[]={2,5,8,12,30};
	int n=sizeof(arr)/sizeof(arr[0]);
	int x=17;
	cout<<Pair(arr,n,x);
	return 0;
}
