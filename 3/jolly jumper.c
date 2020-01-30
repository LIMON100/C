#include<stdio.h>
int main()
{
    int n[3000],i,j,m,a[3000];
    while(scanf("%d",&n)==1)
    {
    for(i=0;i<=n;i++){
        scanf("%d",&n[i]);
    }
    for(i=0;i<n;i++)
    {
      n[i]=abs(i-n[i]);
    }

    j=n-1;
    for(i=0;i<j;i++){
        a[abs(n[i]-n[i+1])];
    }

    for(i=1;i<n;i++)
    {
        if(!a[i])
        {
            j=0;
            break;
        }
    }

    if(j)
        printf("jolly\n");
    else
        printf("not jolly\n");
    }
    return 0;
}
