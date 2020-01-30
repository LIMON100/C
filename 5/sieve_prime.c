#include <stdio.h>
#include <math.h>

void sieve(int n, int primes[]);
void main()
{
    int i, n =110;
    int v[n];
    sieve(n, v);
    for (i=0;i<n;i++)
        if (v[i] == 1)
            printf("%d\n",i);
}

void sieve(int n, int primes[])
{
    int i, j;
    for (i=0;i<n;i++)
       primes[0]=0,primes[1]=0;
    for (i=2;i<sqrt(n);i++)
        for (j=i*i;j<n;j+=i)
            primes[j] = 0;
            return 0;
}
