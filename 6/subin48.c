#include<stdio.h>
int main()
{
    int arr[100001],i,sub,n,T,sum1,sum2;
    scanf("%d",&T);
    while(T--)
    {
        scanf("%d",&n);
        sum1=0,sum2=0;
        for(i=1; i<=n-1; i++)
        {
        scanf("%d",&arr[i]);
        }
        for(i=1;i<=n;i++)
        {
            sum1=sum1+i;
        }
        for(i=1; i<=n-1; i++)
        {
           sum2=sum2+i;
        }
        sub=sum1-sum2;
        printf("%d %d\n",sum1,sum2);
    }
    return 0;
}
