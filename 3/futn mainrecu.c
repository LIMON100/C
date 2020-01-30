#include<stdio.h>
int add_all(int n)
{
    if(n<=1)
     return (n);
    else
     return(n+add_all(n-1));
}
