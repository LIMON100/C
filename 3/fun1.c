#include<stdio.h>
int power(int n,int pow)
{
    int mul=1,i;
    for(i=1;i<=pow;i++)
        mul=mul*n;
      return mul;
}
int main()
{
    int ans;
    ans=power(9,8);
    printf("%d\n",ans);
    return 0;
}
