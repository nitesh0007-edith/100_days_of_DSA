//Naive Approach 
// time Complexity : O(n^3)
#include<stdio.h>
int main()
{
    int arr[]={1,5,3,2};
    int n=sizeof(arr) / sizeof(arr[0]);
    int count=0;
    for(int i=0;i<n-2;i++)
    {

        for(int j=i+1;j<n-1;j++)
        {

            for(int k=j+1;k<n;k++)
            {

                if(arr[i]+arr[j]==arr[k] || arr[j]+arr[k]==arr[i] || arr[k]+arr[i]==arr[j])
                {
                    count++;
                }
            }
        }

    }
    printf("%d ",count);
    return 0;

}
