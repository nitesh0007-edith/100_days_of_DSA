#include<stdio.h>

struct emp
{
   int eno;
   char ename[20];
   float esal;
};
main()
{
    struct emp e;
    printf("Size of emp:%d",sizeof(e));
    printf("\nSize of emp:%d",sizeof(struct emp));
}
