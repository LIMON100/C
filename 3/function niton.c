#include <stdio.h>
int SOL()
{
    long int a,b,i;
    int c=0;
    scanf("%ld",&b);
    for(i=1; i<=b; i++)
        c+=i;
    return c;
}

int main()
{
    long int a=SOL();
    printf("%ld",a);
    return 0;
}
