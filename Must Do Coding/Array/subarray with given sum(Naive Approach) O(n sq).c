#include<stdio.h>

void printArray(int arr [],int i,int j)
{
    printf("%d %d ", i, j);
    /*for (int k = i; k <= j; k++)
	{
        printf("%d ", arr[k]);
    }*/
    printf("\n");

}
void subArraySum(int arr[],int len,int sum)
{

    for(int i=0;i<len;i++)
    {
        int new_sum=0;
        for(int j=i;j<len;j++)
        {
            new_sum += arr[j];
            if(new_sum==sum)
            {
                printArray(arr,i,j);
            }
        }
    }
}

int main()
{
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    int sum=15;
    int len = sizeof(arr) / sizeof(arr[0]);
    subArraySum(arr,len,sum);

    return 0;

}


