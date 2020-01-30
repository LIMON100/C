#include<stdio.h>
#include<math.h>
int main()
{
    int i=0,r,n,decimal=0,octal=0;
    printf("enter binary number :");
    scanf("%d",&n);
    while(n!=0)
    {
        r=n%10;
        n=n/10;
        decimal+=r*pow(2,i);
    }
    i=1;
    while(decimal!=0)
    {
        r=decimal%8;
        n=n/8;
        octal+=decimal*i;
        i=i*10;
        printf("%d is octal number ",octal);
    }
    return 0;
}
