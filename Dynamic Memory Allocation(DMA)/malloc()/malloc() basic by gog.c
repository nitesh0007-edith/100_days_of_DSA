#include<stdio.h>
#include<stdlib.h>
int main()
{
    int* ptr,i,n;
    printf("enter size of arr:");
    scanf("%d",&n);
    printf("Element of array:");
    ptr =(int *) malloc(n*sizeof(int));
    if(ptr==NULL)
    {
        printf("out of memory error:");
        exit(0);
    }
    else
    {
        for(i=0;i<n;i++)
        {
            scanf("%d",&ptr[i]);
        }
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",ptr[i]);
    }
    return 0;
}
