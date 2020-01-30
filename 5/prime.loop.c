#include<stdio.h>
int main()
{
    int n,i,k,sqrt,prime;
    printf("enter the to test :");
    scanf("%d",&n);
    prime=1;
    for(i=2;i<=n/2;i++){
        if(n%i==0)
            prime=0;
    }
        if(prime==1)
            printf("the number is prime");
        else
            printf("the number is not prime");
        return 0;
}
