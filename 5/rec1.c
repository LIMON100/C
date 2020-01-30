#include<stdio.h>

int fact(int n)
{
    if(n<=0)
        return 1;
    else
    {
        return fact(n-1)*(n+1);

    }
}

int main()
{
    int n=5;
    fact(5);
    return 0;
}
