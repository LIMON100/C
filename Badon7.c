#include<stdio.h>
int main()
{
    int a=3,b=10,x;
    x=3*a+b--%3;
    printf("%d\n",x);
    x=3*(a+b--)%3;
    printf("%d\n",x);
    return 0;
}
