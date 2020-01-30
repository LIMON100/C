#include<stdio.h>
double sqr_it(int n);
int main(void)
{
    sqr_it(11.0);
    return 0;
}
double sqr_it(int n)
{
    printf("%lf",n*n);
}
