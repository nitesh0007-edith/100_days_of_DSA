#include<stdio.h>
main()
{
    int a[10][10],b[10][10],c[10][10],row,col,i,j,k;
    printf("Enter size of rows:");
    scanf("%d",&row);
    printf("\nEnter size of columns:");
    scanf("%d",&col);

    printf("\nEnter the element of Matrix A:\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("\nEnter the element of Matrix B:\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }

    printf("\nMatrix Multiplication\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            c[i][j]=0;
            for(k=0;k<col;k++)
            {
                c[i][j] += a[i][j]*b[i][j];
            }
        }
    }
    printf("\nResulted Matrix after Multiplying the Matrix A and B\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }


}
