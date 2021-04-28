/*Stack implementation using Static Array*/

#include<stdio.h>
#define CAPACITY 5 // Pre-process macro
int stack[CAPACITY];
int top=-1;

void push(int);
int pop(void);
void peek(void);
int isfull(void);
int isempty(void);
void traverse(void);

void main(void)
{
    int ch,item;
    while(1)
    {
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Peek\n");
        printf("4. Traverse \n");
        printf("5. Quit\n");

        printf("\nEnter your choice:");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1  :   printf("Enter Element that you want to push:");
                        scanf("%d",&item);
                        push(item);
                        break;
            case 2  :   item = pop();
                        if(item==0)
                        {
                            printf("stack is underflow\n");

                        }
                        else
                        {
                            printf("popped item:%d\n",item);
                        }
                        break;
            case 3  :   peek();
                        break;
            case 4  :   traverse();
                        break;

            case 5  :    exit(0);
            default :    printf("\nInvalid Input:\n\n");
        }
    }

}
void push(int ele)
{
    if(isfull())
    {
        printf("\nStack is overflow:\n");
    }
    else
    {
        top++;
        stack[top]=ele;
        printf("Element Pushed into the stack is :%d\n",ele);
    }
}
int isfull()
{
    if(top==CAPACITY-1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int pop()
{

    if(isempty())
    {
        printf("Stack is underflow:\n");
    }
    else
    {
        return stack[top--];

    }

}
int isempty()
{
    if(top==-1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
void peek()
{
    if(isempty())
    {
        printf("stack is empty\n");
    }
    else
    {
        printf("peek element is :%d",stack[top]);
    }
}
void traverse()
{
    if(isempty())
    {
        printf("stack is empty\n");
    }
    else
    {
        int i;
        printf("stack element are:\n");
        for(i=0;i<=top;i++)
        {
            printf("%d \n",stack[i]);
        }
    }
}
