#include<stdio.h>
void main()
{
    int i=100;
    int* ptr;
    ptr=&i;

    printf("%d",i);
    printf("\n%u",ptr);
    printf("\n%u",&i);
    printf("\n%u",&ptr);
    printf("\n%d",*ptr);
    printf("\n%d",*(&i));
}
