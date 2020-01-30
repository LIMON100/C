#include<stdio.h>
int main()
{
    int x=10;
    int y;
    int *p;
    printf("value of x is :%d\n",x);
    p=&x;
    //y=*p;
    *p=15;
    printf("value of x is :%d\n",x);
    y=*p;
    printf("value of y is :%d\n",y);
    printf("value of *p is :%d\n",*p);
    printf("adrees of x is :%p\n",&x);
    printf("adrees of x is :%p\n",&y);
    printf("adrees of x is :%p\n",p);
    return 0;
}
