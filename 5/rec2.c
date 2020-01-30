#include<stdio.h>

int fact(int n)
{
    int b=35;
    if(n==5)
        return 0;
    else
    {
        printf("%d ",n);
        fact(++n);
        printf("%d ",++b);
    }
}

int main()
{
    fact(0);
    return 0;
}

