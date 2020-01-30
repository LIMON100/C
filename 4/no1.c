#include<stdio.h>
int main()
{
    int i,j;

    int num=1;

    for(i=1; i<=16; i++)
    {
        printf("%d\t",i);
        if(i==4 || i==8 || i==12){
            printf("\n");
        }
    }
    return 0;
}
