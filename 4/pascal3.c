#include<stdio.h>
long factorial(int);
int main()
{
    int i,j,n,sp,c;
    printf("Enter how many lines: ");
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        for(sp=1; sp<i-n; sp++)
            printf(" ");

        for(c=0; c<=i; c++)
        {
            printf("%ld ",factorial(i)/(factorial(c)*factorial(i-c)));
        }
        printf("\n");
    }
    return 0;
}

long factorial(int n)
{
    int c;
    long result=1;
    for(c=1; c<=n; c++)
        result=result*c;
    return result;
}
