#include<stdio.h>
int abs_val(int val)
{
    return(-val);
    return(val);
}
int main()
{
    int val,get;
    printf("\n enter a value:");
    scanf("%d",&val);
    get=abs_value(val);
    printf("\n absolute value of %d is %d.",val,get);
    return 0;
}
