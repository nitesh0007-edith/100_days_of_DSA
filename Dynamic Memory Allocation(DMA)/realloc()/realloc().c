#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *ptr,n,i;
    printf("enter the size of array:\n");
    scanf("%d",&n);
    ptr=(int*) calloc(n,sizeof(int));
    if(ptr==NULL)
    {
        printf("out of memory error\n");
    }
    else
    {
        printf("Memory successfully allocated using calloc()\n");
        printf("Enter element in array:\n");
        for(i=0;i<n;i++)
        {
            scanf("%d",&ptr[i]);
        }
        printf("Element of array\n");
        for(i=0;i<n;i++)
        {
            printf("%d ",ptr[i]);
        }
        printf("\nenter the new size of array:\n");
        scanf("%d",&n);

        ptr=realloc(ptr,n*sizeof(int));
        printf("Memory successfully re-allocated using realloc():\n");
        printf("Enter element in array:\n");
        for(i=0;i<n;i++)
        {
            scanf("%d",&ptr[i]);
        }
        printf("Element of array\n");
        for(i=0;i<n;i++)
        {
            printf("%d ",ptr[i]);
        }
        free(ptr);

    }
    return 0;


}
