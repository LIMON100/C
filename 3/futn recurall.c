#include<stdio.h>
int recursive_call(int)
int main()
{
    recursive_call(2);
    return 0;
}
int recursive_call(int x)
{
    if(x==0)
    return;
    printf("%d\n",x);
    recursive_call(x-1);
    printf("call end\n\n");
}
