#include<stdio.h>

struct emp
{
    int eno;
    char ename[20];
    float esal;
};

void main()
{
    struct emp e1={10001,"Nitesh",50000};
    printf("Employee Details:\n");
    printf("eno: %d\n",e1.eno);
    printf("ename: %s\n",e1.ename);
    printf("esal: %.2lf\n",e1.esal);
}
