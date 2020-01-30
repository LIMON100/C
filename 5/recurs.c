#include<stdio.h>
int main()
{
      int a,b,c,sum,i,x,y,arr[i];
      a = 555;

      b = 555;

      c = 0;

      while(a+b+c != 0){

          x = a%10;

          y = b%10;

          arr[i]=(x+y+c) %10;

          c = (x+y+c)/10;

          a/=10;

          b/=10;

          i++;

      }

      while(i!=0){

          printf("%d",arr[i-1]);

          i--;

       }
       return 0;
}
