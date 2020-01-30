#include<stdio.h>
int main()
{
    int a[5]={2,3,11,34,656},i;
    for(i=0;i<5;i++)
        printf("%d ",*(a+i));
    return 0;
}
