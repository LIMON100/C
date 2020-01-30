#include<stdio.h>
#include "headerfile.h"
int add(int n1,int n2)
{
   return n1+n2;
}
int mul(int n1,int n2)
{
   return n1*n2;
}

int main()
{
    int n1=10,n2=5;
    printf("%d + %d=%d\n",n1,n2,add(n1,n2));
    printf("%d * %d=%d\n",n1,n2,mul(n1,n2));
}
