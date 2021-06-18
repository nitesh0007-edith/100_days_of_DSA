#include<iostream>
using namespace std;
int search(int arr[],int x)
{
	int i=0;
	while(true)
	{
		if(arr[i]==x)
			return i;
		if(arr[i]>x)
			return -1;
		i++;
	}
}
int main()
{
	int arr[]={1,10,15,20,40,80,90,100,150,500};
	int x=100;
	cout<<search(arr,x);
	return 0;
}
