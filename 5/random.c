#include<stdio.h>
int main()
{
    int a[101],n,i,t,j;
    scanf("%d",&n);
    srand(time(NULL));
    for(i=0;i<n;i++)
    {
        a[i]=rand()%1000;
        printf("%d ",a[i]);
    }

    printf("\n\n");
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
        }
    }
    for(i=0;i<n;i++)
        printf("%d\n",a[i]);
    return 0;
}
