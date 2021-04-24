#include<stdio.h>
#include<stdlib.h>
void main()
{
    int n , *arr;
    printf("Enter size\n");
    scanf("%d",&n);
    arr=(int *) calloc(n,sizeof(int));
    if(arr==NULL)
    {
        printf("Out of Memory Error\n");
    }
    else
    {
        printf("array element are:\n");
        for(int i=0;i<n;i++)
        {
            printf("%d ",*(arr+i));
        }
    }
}
