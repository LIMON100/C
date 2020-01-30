#include<stdio.h>
int main()
{
    int r,sp,c,n,no,i;
    printf("enter how many lines: ");
    scanf("%d",&no);

    for(r=0;r<no;r++)
    {
        for(sp=0;sp<+(no-r);sp++)
        {
        printf(" ");
        }

        n=1;

    for(c=0;c<=r;c++){
        printf(" %d",n);
        n=n*(r-c)/(c+1);
    }
    printf("\n");
    }
    return 0;
}
