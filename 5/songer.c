#include<stdio.h>
int main()
{
    int i,j;
    for(i=1;i<=3;i++)
        for(j=1;j<11;j++){
            printf("%d*%d=%d\n",i,j,i*j);
        }
        printf("fantastic\n");
    return 0;
}
