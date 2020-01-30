#include<stdio.h>
int main()
{
    int a[101],b[101],i,j,n,temp,q,s,e,ans,ans1,mid,search;

    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    scanf("%d",&q);
    for(i=0;i<q;i++)
    {
        scanf("%d",&b[i]);
    }

    for(i=n,j=0;b[j]!='\0';i++,j++)
    {
        a[i]=b[j];
    }
    a[i]='\0';

    for(i=0;i<(n+q)-1;i++)
    {
        for(j=i+1; j<(n+q); j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }

    for(i=0; i<q; i++)
    {
        ans=0,ans1=0;
        search=b[i];
        s=0;
        e=(n+q)-1;
        while(e<=q)
        {
            mid=(s+e)/2;
            if(a[mid]<search)
            {
                ans=mid;
                s=mid+1;
            }
            else if(a[mid]>search)
            {
                ans1=mid;
                e=mid-1;
                ///break;
            }
        }


       if(ans!=0 && ans1!=0)
        {
           printf("%d %d\n",ans,ans1);
        }

        else if(ans==0 && ans1!=0)
        {
           printf("X %d\n",ans1);
        }

        else if(ans!=0 && ans1==0)
        {
            printf("%d X\n",ans,ans1);
        }
    }
    return 0;
}
