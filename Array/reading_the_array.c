#include<stdio.h>
main()
{
    int i, arr[5];
    printf("Enter element of array:\n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("third element of array is : %d",arr[2]);
}
