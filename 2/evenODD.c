#include<stdio.h>
int main()
{
    int n,i;
    printf("Enter no of elements: ");
    scanf("%d",&n);

    printf("From 1 to %d EVEN numbers are:\n",n);
    for(i=1; i<=n; i++)
    {
        if(i%2==0)
        {
            printf("%d\n",i);
        }
    }

    printf("\n");
    printf("From 1 to %d ODD numbers are:\n",n);
    for(i=1; i<=n; i++)
    {
        if(i%2!=0)
        {
            printf("%d\n",i);
        }
    }

    return 0;
}
