#include<stdio.h>
#include<math.h>
int arm(int);
int power(int ,int );
int main()
{
    int c,a,b;
    printf("enter the digitd :");
    scanf("%d%d",&a,&b);
    for(c=1;c<=b;c++){
        if(arm(c)==1)
            printf("%d\n",c);
    }
    return 0;
}
int arm(int n)
 long long sum = 0, temp;
   int remainder, digits = 0;

   temp = n;

   while (temp != 0) {
      digits++;
      temp = temp/10;
   }

   temp = n;

   while (temp != 0) {
      remainder = temp%10;
      sum = sum + power(remainder, digits);
      temp = temp/10;
   }

   if (n == sum)
      return 1;
   else
      return 0;
}

int  power(int n, int r) {
   int c, p = 1;

   for (c = 1; c <= r; c++)
      p = p*n;

   return p;
}
