#include<stdio.h>
int main()
{
    int j,i;
    for(i=0;i<3;i++)
        for(j=0;j<3;j++)
        printf("%d+%d=%d\n",i,j,i+j);
    return 0;
}
