#include<stdio.h>
int stringlenth(char[]);
void main()
{
    char str[30];
    int len;
    printf("enter string:");
    gets(str);
    len = stringlength(str);
    printf("length :%d \n",len);
}
int stringlength(char x[])
{
    int i=0,count=0;
    while(x[i] != '\0')
    {
        count++;
        i++;
    }
    return count;
}
