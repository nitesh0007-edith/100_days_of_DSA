#include<stdio.h>
void swap(int* ,int* );

void main()
{
    int a=10,b=20;
    printf("Before swap value of a:%d and b:%d\n",a,b);
    swap(&a,&b);
    printf("\nAfter swap value of a:%d and b:%d\n",a,b);
}
void swap(int* x,int* y) // call by reference
{
    int temp=*x;
    *x=*y;
    *y=temp;
    printf("\nAfter swap value of x:%d and y:%d",*x,*y);
}
