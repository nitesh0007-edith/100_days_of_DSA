#include<iostream>
using namespace std;

void Merge(int arr1[],int arr2[],int n1,int n2)
{
	int i=0,j=0;
	while(i<n1 && j<n2)
	{
		if(arr1[i]<=arr2[j])
		{
			cout<<arr1[i]<<" ";
			i++;
		}
		else
		{
			cout<<arr2[j]<<" ";
			j++;
		}
	}
	while(i<n1)
	{
		cout<<arr1[i]<<" ";
		i++;
	}
		while(j<n1)
	{
		cout<<arr2[j]<<" ";
		j++;
	}
	
}
int main()
{
	int arr1[]={2,6,8,9,12,34,39,76};
	int n1=sizeof(arr1)/sizeof(arr1[0]);
	int arr2[]={1,5,9,9,29,30,36,66,100};
	int n2=sizeof(arr2)/sizeof(arr2[0]);
	
	Merge(arr1,arr2,n1,n2);
	return 0;
	
}
