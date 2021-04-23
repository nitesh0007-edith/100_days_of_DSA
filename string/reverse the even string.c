#include<stdio.h>
#include<string.h>
main()
{
  int len;
  char x[30];
  printf("enter the string: ");
  gets(x);
  printf("\nstring is %s",x);
  len = strlen(x);
  printf("\nlength of string is %d",len);

         printf("\nnow the swapping starts\n");
         int i=0, j=strlen(x)-1;
          char c;
                while(i<j)
                 {
                   c=x[i];
                   x[i]=x[j];
                   x[j]=c;
                    i++;
                    j--;
                   }
printf("swapped string is %s ",x);
}

