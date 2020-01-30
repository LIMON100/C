#include<stdio.h>
int main()
{
    int bball[4][5];
    int i,j;
    for(i=1;i<=4;i++)
    for(j=1;j<=5;j++){
        printf("quarter %d,player %d,",i,j);
        printf("enter number of points :");
        scanf("%d",&bball[i][j]);
    }
    for(i=1;i<=4;i++)
    for(j=1;j<=5;j++){
        printf("quarter %d,player %d,",i,j);
        printf("%d \n",bball[i][j]);
    }
    return 0;
}
