#include<stdio.h>
int main()
{
    int a=0,b=1,c,n=13;
    c=a+b;
    while(c<=n)
    {
        a=b;
        b=c;
        c=a+b;
    }
    if(c!=n)
        printf("I am a good student!\n");
    else
        printf("Bad student!\n");

    return 0;
}
