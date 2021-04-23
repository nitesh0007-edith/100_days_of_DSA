#include<stdio.h>
#define STUDENT 10
#define SUBJECT 5

struct student
{
    int sid;
    char sname[20];
    int smarks[5];
};

int main()
{
    struct student s[STUDENT];
    printf("Enter the Details of student:\n");
    for(int i=0;i<STUDENT;i++)
    {
        printf("\nEnter Student id:");
        scanf("%d",&s[i].sid);
        printf("\nEnter Student name:");
        scanf("%s",&s[i].sname);
        printf("\nEnter Student Marks:\n");
        for(int j=0;j<SUBJECT;j++)
        {
            scanf("%d",&s[i].smarks[j]);
        }

    }
    float sum=0;

    printf("\n\t\t\t****Class 10th Student Details****:\n\n");
    for(int i=0;i<STUDENT;i++)
    {
        sum=0;
        printf("sid:%d \tsname:%s \tsmarks:\t",s[i].sid,s[i].sname);
        for(int j=0;j<SUBJECT;j++)
        {
            sum+=s[i].smarks[j];
            printf("%d\t",s[i].smarks[j]);
        }
        printf("Percentage:%.2lf",sum/SUBJECT);
        printf("\n");
    }
    return 0;
}
