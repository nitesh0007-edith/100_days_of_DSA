#include<stdio.h>
int main()
{
    int n,rem,result=0,temp=0;
    printf("enter any 3 digit number:\n");
    scanf("%d",&n);
    temp=n;
    while(n>0)
    {
        rem=n%10;
        result=result+(rem*rem*rem);
        n=n/10;
    }
    if(temp==result)
    {
        printf("Given no. is Armstrong no.");

    }
    else
    {
         printf("Given no. is not a Armstrong no.");
    }
    return 0;
}
