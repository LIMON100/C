#include<stdio.h>
#include<math.h>

long factorial(int);
int main()
{
   int i,n,j,c;
   printf("enter how many lines u want to see :");
   scanf("%d",&n);

   for(i=0; i<n; i++)
    {
    for(j=0; j<=(n-i-2); j++)
        printf(" ");

    for(j=0; j<=i; j++)
        printf("%ld ",factorial(i)/(factorial(j)*factorial(i-j)));

    printf("\n");
    }
}
long factorial(int n)
{
    int c;
    long result=1;

    for(c=1;c<=n;c++)
        result=result*c;

    return result;
}
