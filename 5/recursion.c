#include<stdio.h>

int sum(int a)
{
    int b=2;
    if(a==5)
    {
        return 0;
    }
    else
    {
        printf("%d ",a);
        sum(++a);
        ///printf("%d ",++b);
    }
}

int main()
{
    sum(0);
    return 0;
}
