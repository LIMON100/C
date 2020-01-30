#include<stdio.h>
int main()
{
    int a=5,*p=64;
    p=&a;
    printf("%d\n",p);
    printf("%d\n",&a);
    printf("%d\n",&p);
    printf("%d\n",*p);
    return 0;
}
