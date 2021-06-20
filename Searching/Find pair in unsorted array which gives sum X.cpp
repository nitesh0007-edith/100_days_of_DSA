#include<iostream>
using namespace std;

int Pair(int arr[],int n,int x)
{
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if((arr[i]+arr[j])==x)
			{
				cout<<arr[i]<<" "<<arr[j]<<endl;
				return true;
			}
		}
	}
	return false;
}
int main()
{
	int arr[]={3,5,9,2,8,10,11};
	int n=sizeof(arr)/sizeof(arr[0]);
	int x=17;
	cout<<Pair(arr,n,x);
	return 0;
}
