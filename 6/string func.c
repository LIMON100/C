#include<stdio.h>
#include<string.h>
int main()
{
  char str[100]="my name is limon";
  int adress,base;
  base=(int)(str);
  adress=(int)strstr(str,"limon");
  if(adress==0)
    printf("not found\n");
  else
    printf("found at positin : %d",adress-base+1);
  //printf("%d",adress);
  return 0;
}
