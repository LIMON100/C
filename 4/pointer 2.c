#include<stdio.h>
int main()
{
    int x,y;
    int *p,*q;
    p=&x;
    q=&y;
    x=6;
    y=8;
    printf("%d %d %d %d\n",*p,x,*q,y);
    p=q;
    printf("%d %d %d %d\n",*p,x,*q,y);
    x=10;y=12;
    printf("%d %d %d %d",*p,x,*q,y);
    return 0;
}
