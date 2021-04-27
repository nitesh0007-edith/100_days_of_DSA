#include<stdio.h>
#include<stdlib.h>
 int main()
 {
     int* arr,m,n,i,count=0;
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
         printf("Enter the  Element you want to find the occurrence of that number in the given array:\n");
         scanf("%d",&n);


         for(i=0;i<m;i++)
         {
             if(arr[i]==n)
             {
                 count++;
             }

         }
         printf("%d  present in a array %d times",n,count);

     }

     return 0;

 }
