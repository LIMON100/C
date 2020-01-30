#include<stdio.h>
int main()
{
    int a1[10]={1,2,3,4,5,6,7,8,9,10};
    int a2[10],i,j;

    for(i=0,j=9; i<10; i++,j--)
    {
        a2[j]=a1[i];
    }

    for(i=0; i<10; i++)
    {
        printf("%d ",a2[i]);
    }

    return 0;
}
