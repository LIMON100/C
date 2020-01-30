#include<stdio.h>
#include<stdlib.h>
char comparefunc(const void *a,const void *b)
{
    return (*(char*)a-*(char*)b);
}

int main()
{
   int i,n=5;
   char values[5];
   for(i=0;i<5;i++)
   {
       scanf("%s",values[i]);
   }
   qsort(values,5,sizeof(char),comparefunc);
   for(i=0;i<n;i++)
   {
       printf("%c ",values[i]);
   }
   printf("\n");
   return 0;
}
