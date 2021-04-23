#include<stdio.h>
#include<stdio.h>
main()
{
    char string[50];
    unsigned int len;
    printf("Enter any string:");
    gets(string);
    len=strlen(string);
    printf("Length of the '%s' is: '%d'",string,len);
}
