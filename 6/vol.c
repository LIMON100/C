#include<stdio.h>
double myfunc();
int main()
{
    double a;
    a=myfunc(10.2);
    printf("%f",a);
}
double myfunc(double num)
{
    double i;
    i=num/2;
    return i;
}
