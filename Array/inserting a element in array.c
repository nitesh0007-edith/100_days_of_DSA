#include<stdio.h>
main()
{
    int arr[50],n,i,key,loc;
    printf("Enter size of array :");
    scanf("%d",&n);
    printf("\nEnter %d element in array: ",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("\nElement in array before inserting :\t[");
    for(i=0;i<n;i++)
    {
        printf("%d,",arr[i]);
    }
    printf("]");

    printf("\n\nEnter the element that you want to insert :");
    scanf("%d",&key);

    printf("\n\nEnter the location where you want to insert %d :",key);
    scanf("%d",&loc);

    for(i=n-1;i>=loc;i--)
    {
        arr[i+1]=arr[i];
    }
    arr[loc]=key;

    printf("\nElement in array After inserting :\t[");
    for(i=0;i<n+1;i++)
    {
        printf("%d,",arr[i]);
    }
    printf("]");
}
