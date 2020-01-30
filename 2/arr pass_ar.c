#include<stdio.h>
int funcX(int get_array[])
{
    int n;
    for(n=0;n<5;n++)
    printf("%d\n",get_array[n]);
}
int main()
{
    int  niton[5]={10,20,30,40,50};
    funcX(niton);
    return 0;
}
