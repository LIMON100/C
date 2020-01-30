#include<stdio.h>
int main()
{
    int count=0,x,y;
    x=5,y=50;
    while(x<=y)
    {
        x=y/x;
    }
    printf("%d",x);
    return 0;
}
