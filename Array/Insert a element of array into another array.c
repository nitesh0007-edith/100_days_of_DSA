#include<stdio.h>
main()
{
    int arr1[50],arr2[50],m,n,i,loc;
    printf("Enter size of array 1:");
    scanf("%d",&m);
    printf("\nEnter %d element in array 1: ",m);
    for(i=0;i<m;i++)
    {
        scanf("%d",&arr1[i]);
    }
    printf("Enter size of array 2:");
    scanf("%d",&n);
    printf("\nEnter %d element in array 2: ",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr2[i]);
    }

    printf("\nElement in array before inserting array 2 in array 1 :\t[");
    for(i=0;i<m;i++)
    {
        printf("%d,",arr1[i]);
    }
    printf("]");

    printf("\nElement of array 2 :\t[");
    for(i=0;i<n;i++)
    {
        printf("%d,",arr2[i]);
    }
    printf("]");

    printf("\n\nEnter the location where you want to insert :");
    scanf("%d",&loc);

    for(i=m-1;i>=loc;i--)
    {
        arr1[i+n]=arr1[i];
    }
    for(i=0;i<n;i++)
    {
        arr1[loc+i]=arr2[i];
    }

    printf("\nElement in array After inserting in array 1 :\t[");
    for(i=0;i<m+n;i++)
    {
        printf("%d,",arr1[i]);
    }
    printf("]");
}
