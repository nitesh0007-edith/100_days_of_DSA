#include<stdio.h>
void swap(int x,int y);

void main()
{
    int a=10,b=20;
    printf("Before swap value of a:%d and b:%d\n",a,b);
    swap(a,b);
 // printf("After swap value of a:%d and b:%d\n",a,b); // not allowed in call by value , this problem is solved by call by reference
}

void swap(int x,int y) // call by value
{
    int temp = x;
    x=y;
    y=temp;
    printf("After swap value of a:%d and b:%d\n",x,y);
}
