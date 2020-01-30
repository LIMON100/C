
#include<stdio.h>
int main()
{
    int x,gcd,lcm,lcm1=1,div,i,n,a[30];
    scanf("%d",&n);
    int N=3;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    for(i=0;i<n-1;i++)
    {
        if(a[i]<a[i+1])
        {
          x=a[i];
        }
        else
        {
            x=a[i+1];
        }
        for(;x>=1;x--)
        {
            if(a[i]%x==0 && a[i+1]%x==0)
            {
                gcd=x;
                break;
            }
        }

         lcm=a[i]*a[i+1]/gcd;

    }

    for(i=n-1;i>n/2;i--)
    {
                if(n>2)
                {
                i=i+2;
                lcm1*=(lcm*a[i])/gcd;
                ///i=i-1;
                }
                else
                {
                    lcm1=lcm;
                }
    }

    printf("GCD is %d\n",gcd);
    printf("LCM is %d\n",lcm1);
    return 0;
}

