#include<stdio.h>
int main()
{
    int i,j,k,n[3000],a[2000];

    while(scanf("%d",&j)==1)
    {
    for(i=0;i<j;i++)
    {
        scanf("%d",&n[i]);
    }

    k=j-1;
    for(i=0;i<k;i++)
    {
        a[abs(n[i]-n[i+1])]=1;
        k=1;
        for(i=1;i<j;i++)
        {
            if(!n[i])
                k=0;
                break;
        }
    }

    if(!k)
        printf("jolly\n");
    else
        printf("not jolly\n");

   }
    return 0;
}
