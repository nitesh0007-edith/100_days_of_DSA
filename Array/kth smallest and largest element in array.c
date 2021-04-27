#include<stdio.h>
int kthSmallNum(int arr[], int len,int k)
{
    int i,j,temp=0;
    for(i=0;i<len;i++)
    {
        for(j=i+1;j<len;j++)
        {
            if(arr[i]>arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;

            }
        }
    }
    return arr[k-1];
}
int kthLargeNum(int arr[], int len,int k)
{
    int i,j,temp=0;
    for(i=0;i<len;i++)
    {
        for(j=i+1;j<len;j++)
        {
            if(arr[i]<arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;

            }
        }
    }
    return arr[k-1];
}
void printArray(int arr[], int len)
{
int i;
for (i=0; i < len; i++)
	printf("%d ", arr[i]);

printf("\n");
}
int main()
{
    int arr[]={3,4,2,8,5,6,9,1};
    int i,k=3;
    int len=sizeof(arr)/sizeof(arr[0]);
    printf("Element in array :\n");
    printArray(arr,len);
    int kthsmallest=kthSmallNum(arr,len,k);
    int kthlargest=kthLargeNum(arr,len,k);
    printf("%d rd smallest element in array:%d\n",k,kthsmallest);
    printf("%d rd Largest element in array:%d",k,kthlargest);
    return 0;
}
