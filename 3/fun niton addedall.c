#include<stdio.h>
int added_all(int val)
{
    int n;
    int sum;
    sum=0;
    for(n=0;n<=500;n++)
       sum+=n;
       printf("\n sum of all numbers from 1 to %d is %d.",val,sum);
}
int main()
{
    added_all (500);
    return 0;
}
