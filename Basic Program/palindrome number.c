#include<stdio.h>
int main()
{
    int num,rem,temp=0,reverse=0;
    printf("Enter any number:\n");
    scanf("%d",&num);
    temp=num;
    while(temp>0)
    {
        rem=temp%10;
        reverse=reverse*10+rem;
        temp=temp/10;
    }
    if(num==reverse)
    {
        printf("%d is Palindrome number",num);
    }
    else
        printf("%d is not a palindrome number",num);

    return 0;
}
