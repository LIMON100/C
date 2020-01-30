#include<stdio.h>
#include<math.h>
int prime[3000000],nprime;
int mark[10000002];

int main()
{
    int i,j,n,limit;
    scanf("%d",&n);
    limit=sqrt(n*1)+2;
    mark[1]=1;

    for(i=4;i<=n;i++)
        mark[i]=1;
     prime[nprime++]=2;

    for(i=3;i<=n;i++)
    {
        if(!mark[i])
        {
            prime[nprime++]=i;
            if(i<=limit)
            {
                for(j=i*i; j<=n; j++)
                {
                    mark[j]=1;
                }
            }
        }
    }

    for(i=2; i<=n; i++)
    {
        if(mark[i]==0){
            printf("%d ",i);
        }
    }

    return 0;
}
