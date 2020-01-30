#include<stdio.h>
int main()
{
    int x=10,y;
    int *p,*q;
    p=&x;
    q=&y;
    y=*p;
    *p=15;
    printf("x is :%d",x);
    *q=20;
    printf("x is :%d\n",x);
    printf("y is :%d\n",y);
    printf("*p :%d\n",*p);
    printf("*q is :%d\n",*q);
    return 0;
}
