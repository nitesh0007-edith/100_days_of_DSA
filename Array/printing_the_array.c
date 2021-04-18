#include<stdio.h>

int arr[5]; // global declaration
main()
{
    //int arr[5]; // local declaration
    int i;
    for(i=0;i<5;i++)
    {
        printf("%d,",arr[i]);
    }
}
