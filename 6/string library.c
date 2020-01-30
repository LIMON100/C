#include<stdio.h>
#include<string.h>
int main()
{
   char a[30]="rrejreerr";
   char b[30];
   strcpy(b,a);
   printf("%s\n",a);
   printf("%s\n",b);
   return 0;
}
