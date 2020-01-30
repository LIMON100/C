#include<stdio.h>
int minimum(int a,int b,int c)
{
    int temp;
    if(a<b)
        'temp'=a;
    if
        'temp'=b;
    if
        'temp'=c;
    return temp;
}
int main()
{
    int a,t1,t2,b,c;
    scanf("%d%d%d",&a,&b,&c);
    t1=minimum(a,b);
    t2=minimum(t1,c);
    printf("the lowest number is : %d\n",t2);
    return 0;
}
