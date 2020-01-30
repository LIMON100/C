#include<stdio.h>
int main()
{
    int i,j,n,count=0,a[100001];
    scanf("%d",&n);
    for(i=2;i<n;i++)
    {
        if(i%2!=0)
       a[i]=1;
    }

    for(i=2;i<n;i++)
    {
        if(a[i]==0)
         for(j=i-1;j>1;j--)
          {
              if(i%j==0 && n%j==0)
                count++;
          }
    }
    printf("%d\n",count);
    return 0;
}
