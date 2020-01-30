#include<stdio.h>
int main()
{
    double pi=3.1415768;
    int *ptr;
    ptr=&pi;
    printf("value of pi : %lf\n",pi);
    printf("value of pi : %lf\n",ptr);
    return 0;
}
