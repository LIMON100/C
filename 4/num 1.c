#include<stdio.h>
#define PI 3.1416
int main()
{
    int a=10,b=43,c=24;
    if(a>b)
    {
        if(a>c)
            printf("%d",a);
        else
            printf("%d",c);
    }
    else
    {
        if(b>c)
            printf("%d",b);
        else
        printf("%d",c);
    }
    return 0;
}
