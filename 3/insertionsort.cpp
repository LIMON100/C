#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,j,temp,a[100];
    printf("Enter no of elements: ");
    scanf("%d",&n);

    printf("Enter elements:\n");
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }

    for(i=1; i<n; i++)
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

    printf("After sorting:\n");
    for(i=0; i<n; i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");

    return 0;
}
