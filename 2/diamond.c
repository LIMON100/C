#include<stdio.h>
int main()
{
    int r,cp,c,n;
    scanf("%d",&n);
    for(r=1;r<=n;r++)
    {
        for(cp=1;cp<=n-r;cp++)
            printf(" ");

        for(c=1;c<=(2*r)-1;c++)
            printf("*");
        printf("\n");
    }
    for(r=n-1;r>=1;r--)
    {
        for(cp=1;cp<=n-r;cp++)
            printf(" ");
        for(c=1;c<=(2*r)-1;c++)
            printf("*");
        printf("\n");
    }
    return 0;
}
