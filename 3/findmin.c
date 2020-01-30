#include<stdio.h>
int main()
{
    int a[7],i,min;
    for(i=0; i<7; i++)
      scanf("%d",&a[i]);
      min=a[0];
      for(i=1;i<7;i++)
        if(a[i]<min)
      {
          min=a[i];
      }
      printf("%d",min);
      return 0;
}
