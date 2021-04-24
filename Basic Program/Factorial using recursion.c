#include<stdio.h>
int fact(int n);

int main()
{
    int n,factorial;
    printf("Enter any number:");
    scanf("%d",&n);

    factorial = fact(n);
    printf("\nFactorial of %d is :%d\n",n,factorial);
}

int fact(int n)
{
    int factorial;
    if(n==0)
        factorial=1;
    else
        factorial=n*fact(n-1);
    return factorial;
}
