#include<stdio.h>
int main()
{
    int a[10],b[10],i,n=5;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        b[i]=a[i];
    }

    for(i=(n/2);i>=1;i--)
    {
        printf("%d ",b[i]);
    }
    return 0;

}
