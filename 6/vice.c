#include<stdio.h>
#include<math.h>
long long binary(int n)
{
  int long long bn=0;
  int r,i=1;
  while(n!=0)
  {
      r=n%2;
      n=n/2;
      bn=bn+r*i;
      i=i*10;
  }
  return bn;
}
int main()
{
   int n;
   printf("enter a integer decimal number :");
   scanf("%d",&n);
   printf("%d in decimal = %lld in binary :",n,binary(n));
   return 0;
}
