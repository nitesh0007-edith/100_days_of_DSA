#include<stdio.h>
int main()
{
    int a,b,temp=0;
    printf("Enter two number:\n ");
    scanf("%d %d",&a,&b);

    temp=a;
    a=b;
    b=temp;

    printf("After swap the value of a=%d and b=%d",a,b);
    return 0;
}
