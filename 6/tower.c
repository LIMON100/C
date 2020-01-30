#include<stdio.h>

int tower(int n,char a,char b,char c)
{
    if(n==1)
    {
        printf("\n%c-----> %c",a,c);
    }
    else
    {
        tower(n-1,a,c,b);
        printf("\n%c-----> %c",a,c);
        tower(n-1,b,a,c);
    }
}

int main()
{
    int n;
    scanf("%d",&n);
    tower(n,'a','b','c');
    return 0;
}
