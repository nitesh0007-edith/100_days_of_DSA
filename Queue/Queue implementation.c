/* Queue implementation using Static Array */
#include<stdio.h>
#include<stdlib.h>
#define CAPACITY 5
int queue[CAPACITY];
int front=0;
int rear=0;

void insert(void);
void delete(void);
void traverse(void);

void main()
{
    int ch;
    while(1)
    {
        printf("\n1. Insert\n");
        printf("2. Delete\n");
        printf("3. Traverse\n");
        printf("4. Exit\n");

        printf("\nEnter Your Choice:");
        scanf("%d",&ch);

        switch(ch)
        {
            case 1: insert();
                    break;
            case 2: delete();
                    break;
            case 3: traverse();
                    break;
            case 4: exit(0);
            default:    printf("Invalid Choice");
        }
    }
}

void insert()
{
    if(CAPACITY==rear)
    {
        printf("\nQueue is Full\n");
    }
    else
    {
        int ele;
        printf("\nEnter Element you want to Insert in the Queue:\n");
        scanf("%d",&ele);

        queue[rear]=ele;
        rear++;
    }
}

void delete()
{
    if(front==rear)
    {
        printf("\nQueue is Empty\n");
    }
    else
    {
        printf("%d is the deleted Element from the Queue:",queue[front]);
        for(int i=0;i<rear-1;i++)
        {
            queue[i]=queue[i+1];
        }
        rear--;
    }
}

void traverse()
{
    if(front==rear)
    {
        printf("\nQueue is Empty\n");
    }
    else
    {
        printf("\n Current Element in Queue:\n");
        for(int i=front;i<rear;i++)
        {
            printf("%d ",queue[i]);
        }
        printf("\n");
    }
}
