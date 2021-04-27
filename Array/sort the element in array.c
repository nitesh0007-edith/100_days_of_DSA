#include<stdio.h>
int main()
{
    int arr[]={0,2,1,0,0,1,2,1};
    int i,j,temp=0;
    int len=sizeof(arr)/sizeof(arr[0]);
    printf("Element in array before sorting:\n");
    for(i=0;i<len;i++)
    {
        printf("%d\t",arr[i]);
    }
    printf("\n");

    // sorting
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
    printf("\n");
    printf("Element in array After sorting:\n");
    for(i=0;i<len;i++)
    {
        printf("%d\t",arr[i]);
    }
    return 0;

}
