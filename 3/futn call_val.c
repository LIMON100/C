#include<stdio.h>
int call_by_val(int,int,int);
int call_by_val(int x,int y,int z)
{
    printf("\n original values are: %d %d %d.",x,y,z);
    x+=100;
    y+=101;
    z+=102;
    printf("\n after changing the values:%d %d %d.",x,y,z);
}
int main()
{
    int ratna,nipu,romi;
    ratna=1; nipu=2; romi=3;
    call_by_val(ratna,nipu,romi);
    printf("\n after function calling: %d %d %d",ratna,nipu,romi);
    return 0;
}
