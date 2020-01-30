#include<stdio.h>
int main()
{
    int a;
    int *p;
    p = &a;
    *p = 6456456;
    printf("%d \t %d\n",a,*p);
    a=10;
    printf("%d \t %d",a,*p);
    return 0;
}
