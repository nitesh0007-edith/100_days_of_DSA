#include <bits/stdc++.h>
// time complexity : O(n) and Aux Space : O(1)
#include<iostream>
using namespace std;

int HoarePartition(int arr[],int l,int h)
{
	int pivot=arr[l];
	int i=l-1,j=h+1;
	while(true)
	{
		do{
			i++;
		}while(arr[i]<pivot);
		
		do{
			j--;
		}while(arr[j]>pivot);
		
		if(i>=j) return j;
		swap(arr[i],arr[j]);
	}	
	
}
int main()
{
	int arr[]={5,3,8,4,2,7,1,10};
	int n=sizeof(arr)/sizeof(arr[0]);
	cout<<HoarePartition(arr,0,n-1);
	cout<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
	return 0;
}
