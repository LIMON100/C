#include<stdio.h>
int x=10;
int X()
{
    printf("\n int X(),outside block statement :x=%d\n",x);
    {
        int x=100;
        printf("\n int X(),inside block statement :x=%d\n",x);
    }
}
int main()
{
    X();
    printf("\n in main():x=%d",x);
    return 0;
}
