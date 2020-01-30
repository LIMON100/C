#include<stdio.h>
int main()
{
    int a[30],i,j,n=5;

    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }

    int search;
    printf("Enter search item: ");
    scanf("%d",&search);

    int s=1,e=n,loc=0;

    printf("\n");
    while(s<=e)
    {
        int mid=(s+e)/2;

        if(a[mid]==search)
        {
            printf("%d found position %d\n",search,mid+1);
            loc=1;
            break;
        }
        else if(a[mid]>search)
        {
            e=mid-1;
        }
        else
        {
            s=mid+1;
        }
    }

    if(loc==0)
    {
        printf("Not found\n");
    }

    return 0;
}
