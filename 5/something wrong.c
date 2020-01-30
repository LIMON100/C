#include<stdio.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    i=n%10;
    j=n/10;
    printf("%d %d ",i,j);
    return 0;
}
