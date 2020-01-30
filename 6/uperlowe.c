#include <stdio.h>

int firstocc(int a[],int n,int search)
{
    int s=0,e=n-1,mid,ans=-1;
    while(s<=e)
    {
        mid=(s+e)/2;

        if(a[mid]==search)
        {
            ///ans=mid;
            s=mid+1;
        }

        else if(a[mid]>search)
        {
            e=mid-1;
        }
        else
            ans=mid;
            s=mid+1;

    }

    return ans;
}

int main()
{
    int a[100],n,i,search,binary;
    printf("Enter how many numbers: ");
    scanf("%d",&n);

    printf("Enter numbers: ");
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }

    printf("Enter search number: ");
    scanf("%d",&search);

    binary=firstocc(a,n,search);
    printf("The last occurance of %d is %d",search,binary);

    return 0;
}

