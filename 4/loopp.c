#include<stdio.h>
int main()
{
    int n=3,sp,p,r;
    for(r=(2*n)-1; r>=1; r--)
    {
        for(sp=0; sp<3; sp++)
        {
            printf(" ");
        }
        for(p=1; p<=n; p++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
