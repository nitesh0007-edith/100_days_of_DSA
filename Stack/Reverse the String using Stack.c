#include<stdio.h>
#include<string.h>
#define CAPACITY 100

int top=-1;
int stack[CAPACITY];

void push(char x)
{
    if(top==CAPACITY-1)
    {
        printf("Stack is overflow");
    }
    else
    {
        stack[++top]=x;
    }
}

pop()
{
    printf("%c ",stack[top--]);
}

main()
{
    char str[] = "INDIA";
    int len=strlen(str);
    int i;

    for(i=0;i<len;i++)
        push(str[i]);

    for(i=0;i<len;i++)
        pop();
}
