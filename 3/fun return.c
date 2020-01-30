#include<stdio.h>
int change_data(int r,int s,int i)
{
    int result;
    result=r+s+i;
    return result;
}
int main()
{
    int result;
    result=change_data(12,4,5);
    printf("result is %d",result);
}
