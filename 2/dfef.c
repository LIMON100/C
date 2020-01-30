#include<stdio.h>
#include<math.h>
long factorial(int);
long find_ncr(int,int);
long find_npr(int ,int);
int main()
{
    int n,r,i,result,ncr,npr;
    printf("enter two numbers :");
    scanf("%d%d",&n,&r);
    ncr=find_ncr(n,r);
    npr=find_npr(n,r);
    printf("%dc%d =%d\n",n,r,ncr);
    printf("%dp%d =%d\n",n,r,npr);
    return 0;
}
long find_ncr(int n,int r)
{
   long re;
   re=factorial(n)/(factorial(r)*factorial(n-r));
   return re;
}
long find_npr(int n,int r)
{
   long re;
   re=factorial(n)/factorial(n-r);
   return re;
}
long factorial(int n) {
   int c;
   long result =1;

   for (c = 1; c <= n; c++)
      result = result*c;

   return result;
}
