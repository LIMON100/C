#include<stdio.h>
int main()
{
    int i,loc,a[3],beg,end,mid,key,n;
    printf("total number of item:");
    scanf("%d",&n);
    printf("number of element:");
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    loc=0,beg=1,end=n,mid=(beg+end/2);
    printf("key value is :");
    scanf("%d",&key);
    while(beg<=end)
    {
        if(key<a[mid])
        {
            end=mid-1;
        }
        else if(key>a[mid])
        {
            beg=mid+1;
        }
        else {
        loc=mid;
        printf("\n\n%d i in position %d\n\n",key,loc);
        break ;
        }
        mid=(beg+end)/2;
    }
    if(loc==0)
    {
        printf("\n\n%d i not in the list\n\n",key);
    }

    return 0;
}
