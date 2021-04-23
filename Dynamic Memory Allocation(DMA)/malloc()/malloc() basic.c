#include<stdio.h>
 struct emp
 {
     int eno;
     char ename[20];
     float esal;
 };

 int main()
 {
     struct emp* ptr;
     ptr=(struct emp*) malloc(sizeof(struct emp));
     if(ptr==NULL)
     {
         printf("out of memory error\n");
     }
     else
     {
         printf("Enter Employee details:");
         scanf("%d%s%f",&ptr->eno,ptr->ename,&ptr->esal);
     }

     printf("\nDetails of Employee:\n");
     printf("eno:%d\tenmae:%s\tesal:%.2lf",ptr->eno,ptr->ename,ptr->esal);
     return 0;

 }
