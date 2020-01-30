#include <stdio.h>
#include <math.h>
#define size 100000
int ara[size];
 void sieve()
 {
     int i, j, root;
     for(i = 2; i < size; i++) {
         ara[i] = 1;
     }
     root = sqrt(size);

     for(i = 2; i <= root; i++) {
         if(ara[i] == 1)
          {
             for(j = 2; i * j <= size; j++)
             {
                 ara[i * j] = 0;
             }
         }
     }
 }

 int is_prime(int n)
 {
     int i;
     if(n < 2) {
         return 0;
     }
     return ara[n];
 }
 int main()
 {
     int n,i, m;
     scanf("%d",&n);
     sieve();

                 if(1 == is_prime(n))
                 {

                     printf("prime number: %d ", n);
                 }
                 else
                    printf("not prime number: %d ", n);

     return 0;
 }
