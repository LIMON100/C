#include<stdio.h>
int main()
{
    int a[5],i,avg=0;

    for(i=0;i<3;i++)
        scanf("%d",&a[i]);

     for(i=0;i<3;i++)
        avg=avg+a[i];

  avg=avg/3;
     printf("%d",avg);
    return 0;
}
