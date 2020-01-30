#include<stdio.h>
int main()
{
    int arr[20],i,j,count,T,kase,k,n,temp;
    scanf("%d",&n);

     for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
        count=0;

    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {

            if(arr[i]>arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
                count++;
            }
        }
     }

     printf("\n");

    return 0;
}
