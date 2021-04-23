#include<stdio.h>

union un                          // union share same memory location where structure share different memory location
{
    short a;
    short b;
};

main()
{
    union un var;
    var.a=10;
    printf("Value of b:%d\n",var.b); // b=10

    var.b=20;
    printf("value of a:%d",var.a);  //  a=20
} 
