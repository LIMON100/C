#include<stdio.h>
int main()
{
    int i,j,a[3][2];
    for(i=0;i<3;i++)
        for(j=0;j<2;j++)
        scanf("%d",&a[i][j]);
     for(i=0;i<3;i++){
        for(j=0;j<2;j++){
            printf("%d  ",a[i][j]);
        }
        printf("\n");
     }
     return 0;
}
