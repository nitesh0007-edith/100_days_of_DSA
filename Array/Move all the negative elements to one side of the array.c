#include<stdio.h>
void rearrange(int arr[],int len);
void PrintArray(int arr[],int len);
void rearrange(int arr[],int len)
 {
     int i,j=0,temp=0;
     for(i=0;i<len;i++)
     {
         if(arr[i]<0)
         {
            temp = arr[i];
            arr[i] = arr[j];
            arr[j]= temp;
            j++;
         }
     }
 }
void PrintArray(int arr[],int len)
 {
     for (int i = 0; i < len; i++)
        printf("%d ", arr[i]);
 }
 int main()
 {
     int arr[]={5,6,7,-1,-2,3,-5,8,7,-9};
     int len= sizeof(arr)/sizeof(arr[0]);
     rearrange(arr, len);
     PrintArray(arr, len);
     return 0;
 }
