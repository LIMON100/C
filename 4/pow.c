#include<stdio.h>
#include<math.h>

double a_function(int n)
{
    double f;
    if(n==0)
    {
        return pow(2.0,0.5)+pow(3.0,0.5)+pow(6.0,0.5);
    }

    else if(n!=0)
    {
        f=1;
        while(f<=n)
        {
        return (a_function(pow((n-1),2))-5)/((2*a_function(n-1))+4);
        f++;

    }
}

int main()
{
    int n;
    double result;
    scanf("%d",&n);
    result=a_function(n);
    printf("%0.10lf\n",result);
    return 0;
}
