#include<stdio.h>

int main()///bubble sort
{
    int a[20],i,j;

    for(i=0; i<5; i++)
    {
        scanf("%d",&a[i]);
    }

    int count;
    for(i=0; i<5; i++)
    {
        count=0;
        for(j=i+1; j<5; j++)
        {
            if(a[i]>a[j])
            {
                a[i]=a[i]+a[j];
                a[j]=a[i]-a[j];
                a[i]=a[i]-a[j];
            }
            count++;
        }
        printf("Count= %d\n",count);
    }

    for(i=0; i<5; i++)
    {
        printf("%d ",a[i]);
    }

    return 0;
}
