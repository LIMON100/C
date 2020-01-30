#include<stdio.h>
#include<math.h>
int prime(int n)
{
   int i,flag=1;

   for(i=2; i<=n/2; i++){
    if(n % i == 0){
        flag=0;
         break;
    }
   }
   return flag;
}
int armstrong(int number)
{
    int r,digit=0,sum=0,or,flag;

    or=number;

    while(or!=0)
    {
        or=or/10;
        digit++;
       // or=or/10;
    }

    or=number;

    while(or!=0)
    {
        r=or%10;
        sum=sum+pow(r,digit);
        or/=10;
    }
    if(sum==number)
        flag=1;
    else
        flag=0;
    return flag;
}
int main()
{
   int n,i,flag;
   printf("enter integer digits :");
   scanf("%d",&n);

   flag=prime(n);
   if(flag==1)
      printf("%d is prime number\n :",n);
   else
      printf("%d is not a prime number \n:",n);

   flag=armstrong(n);
      if(flag==1)
      printf("%d is armstorng number :",n);
   else
      printf("%d is not a armstong number :",n);
    return 0;
}
