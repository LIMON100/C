#include <stdio.h>
 int is_prime(int n)
 {
     int i,flag,reverse;
     if (n < 2) {
         return 0;
     }
     for(i = 2; i < n; i++) {
         if(n % i == 0)
            return 0;
         else{
        reverse = reverse * 10;
         reverse = reverse + n%10;
         n = n/10;
         flag=is_prime;
         }
     }
     return 1;
 }
 int main()
 {
     int n,flag,reverse;
     while(1) {
         printf("Please enter a number (enter 0 to exit): ");
         scanf("%d", &n);
         if(n == 0) {
             break;
         }
         if(1 == is_prime(n)) {
             printf("%d is prime.\n", n);
         }
         else if(flag==is_prime){
            printf("%d is emirp.",reverse);
         }
        else
            printf("%d is not prime.\n", n);
     }
     return 0;
 }
