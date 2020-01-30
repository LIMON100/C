#include<stdio.h>
int main()
{
    int ara[]={1,2,3,4,5,6,7};
    int ara1[]={1,2,3,5,6,7};
    int result=0,result1=0,n=7,n1=6,i,j,sum=0,sum2,sum1=0;

    for(i=0; i<n; i++)
    {
        result=result^ara[i];
        sum=sum+result;
    }
    for(j=0;j<n1; j++)
    {
        result1=result1^ara1[j];
        sum1=sum1+result1;
    }

    sum2=sum-sum1;
    printf("Result: %d\n",sum2);
    return 0;
}
