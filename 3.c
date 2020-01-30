#include<stdio.h>
int main()
{
    int x=10;
    int *p;
    printf("value of x is:%d\n",x);
    p=&x;
    *p=20;
    printf("value od x:%d\n",x);
    x=15;
    printf("value of x is:%d\n",x);
    printf("value stored in location %p is %d\n",p,*p);
    printf("adrees of x is:%p\n",&x);
    printf("value of p:%p\n",p);
    return 0;
}
