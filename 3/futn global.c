#include<stdio.h>
int x1=10;
int X1()
{
    printf("\n fron X1()x=%d\n",x1);
    x2=15;
}
int X2()
{
    printf("\n from X2()x=%d\n",x2);
}
int main()
{
    printf("\n from main():x=%d\n",x);
    X1();
    X2();
    return 0;
}
