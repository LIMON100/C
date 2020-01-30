#include<stdio.h>
int main()
{
    int i,j;
    for(i=0;i<5;i++){
    for(j=0;j<1000;j++){
        printf("%d",j);
        if(j==5) break;
    }
    printf("\n");
    }
    return 0;
}
