#include<stdio.h>
void add(int a,int b,int c)
{
   int x,y,sum,m;
   if(a!=0 || b!=0)
    {
     if(a>10 || b>10)
    {
      x=a%10;
      y=b%10;
      sum=x+y+c;
      m=sum%10;
     printf("%d",m);
     add(a/10,b/10,sum/10);
}
    else
      {
     x=a%10;
      y=b%10;
     sum=x+y+c;
     m=sum%10;
      c=sum/10;
   printf("%d%d",m,c);

}
}
}
int main()
{
   int a,b,c=0;
   scanf("%d %d",&a,&b);
    add(a,b,c);
}
