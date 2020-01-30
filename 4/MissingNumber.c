#include<stdio.h>
int missingNumber(int a[],int n)
{
    int val,i,j,nextvalue;

    for(i=0; i<n; i++)
    {
        if(a[i]<=0 || a[i]>n)
            continue;

        val=a[i];

        while(a[val-1]!=val)
        {
            nextvalue=a[val-1];
            a[val-1]=val;
            val=nextvalue;

            if(val<=0 || val>n)
                break;
        }
    }

    for(i=0; i<n; i++)
    {
        if(a[i]!=i+1)
        {
            return i+1;
        }
    }

    return n+1;
}

int main()
{
    int t,i,a[50],n;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        for(i=0; i<n; i++)
        {
            scanf("%d",&a[i]);
        }
        printf("%d\n",missingNumber(a,n));
    }
    return 0;
}

