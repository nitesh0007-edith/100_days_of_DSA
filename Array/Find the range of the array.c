#include<stdio.h>
main()
{
    int arr[10],i,n,max,min,range=0;
    printf("Enter size of the array:");
    scanf("%d",&n);

    printf("enter the element in array:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    max=arr[0];
    for(i=1;i<n;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }

    min=arr[0];
    for(i=1;i<n;i++)
    {
        if(arr[i]<min)
        {
            min=arr[i];
        }
    }

    range=max-(min);
    printf("\nRange of the array is: %d",range);

} 
