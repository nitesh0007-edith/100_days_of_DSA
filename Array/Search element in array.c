#include<stdio.h>
#include<stdlib.h>
 int main()
 {
     int* arr,m,n,i;
     printf("Enter size of array:\n");
     scanf("%d",&m);
     arr=(int *) calloc(m,sizeof(int));
     if(arr==NULL)
     {
         printf("out of Memory Error:\nTry Again to allocate the memory\n");
     }
     else
     {
         printf("Memory Allocated Successfully using calloc() Function.\n");
         printf("\nEnter %d Element in array:\n",m);
         for(i=0;i<m;i++)
         {
             scanf("%d",&arr[i]);
         }
         printf("Enter Element you want to search:\n");
         scanf("%d",&n);

         printf("Searching for %d element in array:\n",n);
         for(i=0;i<m;i++)
         {
             if(arr[i]==n)
             {
                 printf("\nYes, %d Element is Present at index %d in array\n",n,arr[i]);
                 break;
             }
             else
                printf("\nat index %d of array, Element %d is not found\n",arr[i],n);


         }

     }
     printf("\nSearching Completed:\n");
     return 0;

 }
