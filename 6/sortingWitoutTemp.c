#include<stdio.h>

/*int main()///bubble sort
{
    int a[20],i,j;

    for(i=0; i<5; i++)
    {
        scanf("%d",&a[i]);
    }

    for(i=0; i<5; i++)
    {
        for(j=i+1; j<5; j++)
        {
            if(a[i]>a[j])
            {
                a[i]=a[i]+a[j];
                a[j]=a[i]-a[j];
                a[i]=a[i]-a[j];
            }
        }
    }

    for(i=0; i<5; i++)
    {
        printf("%d ",a[i]);
    }

    return 0;
}*/

/*int main()///insertion sort
{
    int a[20],i,j,temp;

    for(i=0; i<5; i++)
    {
        scanf("%d",&a[i]);
    }

    for(i=1; i<5; i++)
    {
       temp=a[i];
       j=i-1;

       while(j>=0 && a[j]>temp)
       {
           a[j+1]=a[j];
           j--;
       }
       a[j+1]=temp;
    }

    for(i=0; i<5; i++)
    {
        printf("%d ",a[i]);
    }

    return 0;
}*/

int main()///selection sort
{
    int a[20],i,j,temp;

    for(i=0; i<5; i++)
    {
        scanf("%d",&a[i]);
    }

    int count;
    for(i=0; i<5; i++)
    {
        temp=i;

       for(j=i+1; j<5; j++)
       {
           if(a[temp]>a[j])
            {
                temp=j;
            }

       }

       if(temp!=i)
       {
           int swap=a[i];
           a[i]=a[temp];
           a[temp]=swap;
       }
    }

    for(i=0; i<5; i++)
    {
        printf("%d ",a[i]);
    }

    return 0;
}


