#include<stdio.h>

void subArraySum(int arr[],int len,int sum)
{

    for(int i=0;i<len;i++)
    {
        int current_sum=arr[i];
        int j=i+1;
        while(j<=len)
        {
            if(current_sum==sum)
            {
                printf("%d %d",i+1,(j-1)+1);
                return 1;
            }
            if(current_sum>sum || j==len)
            {
                break;
            }
            current_sum+=arr[j];
            j++;
        }
    }
    printf("No Sub array Found:\n");
}

int main()
{
    int arr[]={1,4,20,3,10,5};
    int sum=33;
    int len = sizeof(arr) / sizeof(arr[0]);
    subArraySum(arr,len,sum);

    return 0;

}
