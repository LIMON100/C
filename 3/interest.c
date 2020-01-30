#include<stdio.h>
int main()
{
   int la,ia,y,ta,ma;
   printf("enter the la=");
   scanf("%d",&la);
   printf("enter the ia=");
   scanf("%d",&ia);
   printf("enter the y=");
   scanf("%d",&y);
   ta=(la+la*ia/100);
   ma=(ta/(y*12));
   printf("ta=%d\n",ta);
   printf("ma=%d",ma);
   return 0;
}
