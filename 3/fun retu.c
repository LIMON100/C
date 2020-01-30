#include<stdio.h>
int add(int a,int b)
{
    return a+b;
}
int abs(int a,int b)
{
    int ad=add(a,b);
    if(ad<0)
        return -ad;
     else
        return ad;
}
int main()
{
   // add(9,10);
    printf("%d\n",add(9,10));
    return 0;
}
