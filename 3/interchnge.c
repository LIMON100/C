#include<stdio.h>
int main()
{
    int a,b,c,d;
    a=5;
    b=6;
    printf("before interchange a=%d b=%d \n",a,b);
    a=b;
    c=d;
    d=a;
    c=b;
    printf("after interchange a=%d b=%d \n",a,b);
    return 0;

}
