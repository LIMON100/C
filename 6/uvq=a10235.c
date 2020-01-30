#include<stdio.h>
#include<math.h>
int is_prime(int  n);
int reverse (int  n);
int main()
{
      int  n,rev=0,tmp=0;
      while(scanf("%d",&n)==1){
      if(n==is_prime(n)){
            tmp=reverse(n);
            if(tmp==is_prime(tmp)){
                  if(is_prime(tmp)==is_prime(n))
                  printf("%d is prime.\n",n);
                  else
                  printf("%d is emirp.\n",n);
            }
                  else
                  printf("%d is prime.\n",n);
      }
      else
      {
            printf("%d is not prime.\n",n);
      }
}
return 0;
}
int  is_prime(int  n)
{
      int i,count=1,tmp,root;
      root=sqrt(n);
      for(i=2;i<=root;i++){
            if(n%i==0){
                  count=0;
                  break;
            }
      }
      if(count==1)
      return n;
}
int reverse(int n)
{
      int tmp,rev=0,reverse_number;
      while(n>0){
            rev=10*rev+(n%10);
            n=n/10;
      }
      return reverse;
}
