#include<stdio.h>

struct emp
{
    int eno;
    char ename[20];
    float esal;
};

int main()
{
    struct emp e[3];                          // array of Structure concepts
    printf("Enter the Details of Emp:\n");
    for(int i=0;i<3;i++)
    {
        printf("\nEnter Employee id:");
        scanf("%d",&e[i].eno);
        printf("\nEnter Employee name:");
        scanf("%s",&e[i].ename);
        printf("\nEnter Employee salary:");
        scanf("%f",&e[i].esal);
    }
    printf("\nEmployee Details:\n");
    for(int i=0;i<3;i++)
    {
        printf("Eno:%d\tEname:%s\tEsal:%.2lf\n",e[i].eno,e[i].ename,e[i].esal);
    }
    return 0;
}
