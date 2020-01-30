#include<stdio.h>
int main()
{
    char c1='A';
    char *p,**q;
    p=&c1;
    q=&p;
     printf("value of c1 : %c\n",c1);
     printf("value of c1 : %c\n",*p);
      printf("value of c1 : %c\n",**q);
       c1='z';

      printf("value of c1 : %c\n",**q);

    return 0;
}

