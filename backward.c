#include<stdio.h>
#include<string.h>
int main()
{
   char str[100]="bangladesh",str_new[100];
   int i,j,l;
   for(i=10,j=0;i>=0;i--){
     str_new[j]=str[i];
     j=j+1;
   }
   str_new[j]='\0';
   printf("%s\n",str_new);
   return 0;
}
