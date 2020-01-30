#include <stdio.h>
 int main()
 {
   int n=0,i=1,j=2;
   while(n<10001)
   {

     for(i=2;i<j;i++)
     {
      if(j%i==0)
        break;
     }
     if(i==j)
       n++;
     j++;
    }
    j--;
  printf("%d",j);
  return 0;
 }
