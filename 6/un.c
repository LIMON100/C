#include<stdio.h>
int main()
{
    int x,y=10;
    x=++y;
    x=--x;
    printf("%d %d",x,y);
    return 0;
}
