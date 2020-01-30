#include<stdio.h>
int main()
{
  int i=1,j;
   do
    {
         j=0;
      do
      {
          printf("%d\n",i*j);
          j++;
      }
    while(j<3);
      i++;
    }
    while(i<4);
     return 0;
  return 0;
}
