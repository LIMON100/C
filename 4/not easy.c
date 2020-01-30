#include<stdio.h>
int main()
{
    int i;
    for(i=100;i>0;i=i-30){
        printf("%d ",i);
        printf("easy?\n");
    }
    printf("%d ",i);
    printf("not easy");
    return 0;
}
