#include<stdio.h>
float average(int a,int b,int c);
int main()
{
   int a,b,c;
   scanf("%d%d%d",&a,&b,&c);
   float d=average(a,b,c);
   printf("%lf",d);
   return 0;
}
float average(int m,int n,int o)
{
    float avg;
    avg=(m+n+o)/3.0;
    return avg;
}
