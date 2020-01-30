#include<stdio.h>
int main()
{
    char *p,*q,*r,temp;
    gets(p);
    q=p;
    r=p;
    while(*q!='\0')
        q++;
        q--;
      while(P<q)
      {
          temp=*p;
          *p=*q;
          *q=temp;
          p++;
          q--;
      }
      puts(r);
      return 0;
}
