#include<stdio.h>
int main()
{
    char a[30]="bangla",b[30]="\nlimon";
    int i,j,length;
    length=6;
    for(i=length,j=0;b[j]!=0;i++,j++){
        a[i]=b[j];
    }
   a[i]='\0';
   printf("%s",a);
   return 0;
}
