#include<stdio.h>
int main()
{
    int a[20],i,max,n;
    printf("Enter no of array: ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    for(i=0; i<n; i++)
    {
        max=a[0];

        for(i=1;i<n;i++)
        {
            if(a[i]>max)
            {
                max=a[i];
            }
        }
    }

    printf("%d",max);
    return 0;
}
