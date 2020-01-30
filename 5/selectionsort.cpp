#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,j,temp,a[100];
    printf("n = :");
    scanf("%d",&n);

    printf("Enter elements:\n");
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }

    for(i=0; i<n-1; i++)
    {
        int pos=i;
        for(j=i+1; j<n; j++)
        {
            if(a[pos] > a[j])
            {
                pos=j;
            }
        }

        if(pos!=i)
        {
            int temp=a[i];
            a[i]=a[pos];
            a[pos]=temp;
        }
    }

    for(i=0; i<n; i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");

    return 0;
}
