#include<stdio.h>

int isPrime(int n);
int isArmstrong(int n);
int isPerfect(int n);

int main()
{
    int n;
    printf("Enter any number:");
    scanf("%d",&n);

    if(isPrime(n))
    {
        printf("%d number is prime number\n",n);
    }
    else
    {
        printf("%d number is not a prime number\n",n);
    }
    if(isArmstrong(n))
    {
        printf("%d number is Armstrong number\n",n);
    }
    else
    {
        printf("%d number is not a Armstrong number\n",n);
    }
    if(isPerfect(n))
    {
        printf("%d number is Perfect number\n",n);
    }
    else
    {
        printf("%d number is not a Perfect number\n",n);
    }
    return 0;
}

int isPrime(int n)
{
    int i;
    for(i=2;i<=n/2;i++)
    {
        if(n%i==0)
        {
            return 0;
        }
    }
    return 1;
}

int isArmstrong(int n)
{
    int rem,orinum,result=0;
    orinum=n;
    while(n>0)
    {
        rem=n%10;
        result+=rem*rem*rem;
        n=n/10;
    }
    return (orinum == result);
}

int isPerfect(int n)
{
    int i,num,sum=0;
    num=n;
    for(i=1;i<n;i++)
    {
        if(n%i==0)
        {
            sum+=i;
        }
    }
    return (num == sum);
}
